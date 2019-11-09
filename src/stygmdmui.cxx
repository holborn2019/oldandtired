// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include <libintl.h>
#include "stygmdmui.h"
//Copyright(c) 2006 Josep Andreu (holborn)
//License GNU/GPL version 2

DSlider::DSlider(int x,int y, int w, int h, const char *label):Fl_Value_Slider(x,y,w,h,label) {
}

int DSlider::handle(int event) {
  int i=0;
  
  if (event == FL_PUSH && Fl::visible_focus()) {
      Fl::focus(this);
      redraw();
  } 
  
  
  
  switch (event) 
  	{
      	              		
      		 case FL_MOUSEWHEEL :
                        {
                        if (Fl::e_dy==0) return 0;
                        handle_push();
                        handle_drag(clamp(increment(value(),Fl::e_dy)));
                        handle_release();
                        return 1;	
                        }
           
                  case FL_FOCUS :
                  case FL_UNFOCUS :
                        if (Fl::visible_focus()) {
                        redraw();
                        return 1;
                        } else return 0;
          }
  
  
   i = Fl_Slider::handle(event);
  
  return i;
}

void Drummixer::cb_drummixerwin_i(Fl_Window*, void*) {
  GuardaPrefs();
rmgmo->wdrummixer=0;
pera=2;
Fl::remove_timeout(tick);
drummixerwin->clear();
drummixerwin->hide();
delete drummixerwin;
}
void Drummixer::cb_drummixerwin(Fl_Window* o, void* v) {
  ((Drummixer*)(o->user_data()))->cb_drummixerwin_i(o,v);
}

void Drummixer::cb_Caso_i(Fl_Box*, void*) {
  if(rmgmo->bplay) MiraLucecitas();
}
void Drummixer::cb_Caso(Fl_Box* o, void* v) {
  ((Drummixer*)(o->parent()->parent()->user_data()))->cb_Caso_i(o,v);
}

void Drummixer::cb_Apply_i(Fl_Button*, void*) {
  PonCambiosPoce();
ResetSliders();
}
void Drummixer::cb_Apply(Fl_Button* o, void* v) {
  ((Drummixer*)(o->parent()->parent()->user_data()))->cb_Apply_i(o,v);
}

void Drummixer::cb_Cancel_i(Fl_Button*, void*) {
  rmgmo->bcancel=2;
drummixerwin->do_callback();
}
void Drummixer::cb_Cancel(Fl_Button* o, void* v) {
  ((Drummixer*)(o->parent()->parent()->user_data()))->cb_Cancel_i(o,v);
}

void Drummixer::cb_Ok_i(Fl_Button*, void*) {
  PonCambiosPoce();
rmgmo->bcancel=0;
drummixerwin->do_callback();
}
void Drummixer::cb_Ok(Fl_Button* o, void* v) {
  ((Drummixer*)(o->parent()->parent()->user_data()))->cb_Ok_i(o,v);
}

void Drummixer::cb_Reset_i(Fl_Button*, void*) {
  ResetSliders();
}
void Drummixer::cb_Reset(Fl_Button* o, void* v) {
  ((Drummixer*)(o->parent()->parent()->user_data()))->cb_Reset_i(o,v);
}

Drummixer::Drummixer(RMGMO *rmgmo_) {
  Fl::visual(FL_DOUBLE|FL_INDEX);
  Fl::visual(FL_RGB);
  rmgmo=rmgmo_;
  make_window();
  ReadPattern();
  GeneraScroll();
  labelwin();
  
  int x,y,w,h;
  static const char *pepe [] ={"stygmorgan"};
  int argc=1;
  char **argv= (char **) pepe;
  
  Fl_Preferences stygmorgan (Fl_Preferences::USER, WEBSITE, PACKAGE);
  
  stygmorgan.get("drummixerwinX",x,4);
  stygmorgan.get("drummixerwinY",y,29);
  stygmorgan.get("drummixerwinW",w,600);
  stygmorgan.get("drummixerwinH",h,600);
  
  drummixerwin->resize(x,y,w,h);
  drummixerwin->icon((char *)p);
  drummixerwin->show(argc,argv);
  
  
  
  
  void * v=Caso;
  Fl::add_timeout(.5,tick,v);
}

void Drummixer::tick(void* v) {
  Fl_Box *o = (Fl_Box*)v;
  o->do_callback();
  Fl::repeat_timeout(.008,tick,v);
}

Fl_Window* Drummixer::make_window() {
  { drummixerwin = new Fl_Window(500, 600);
    drummixerwin->color((Fl_Color)44);
    drummixerwin->callback((Fl_Callback*)cb_drummixerwin, (void*)(this));
    { Fl_Group* o = new Fl_Group(0, 0, 500, 73);
      o->box(FL_BORDER_BOX);
      o->color((Fl_Color)44);
      o->selection_color(FL_DARK1);
      { Caso = new Fl_Box(25, 25, 35, 17);
        Caso->callback((Fl_Callback*)cb_Caso);
      } // Fl_Box* Caso
      { Fl_Button* o = new Fl_Button(11, 13, 110, 25, gettext("Apply Changes"));
        o->box(FL_PLASTIC_THIN_UP_BOX);
        o->color((Fl_Color)11);
        o->selection_color((Fl_Color)3);
        o->labelsize(11);
        o->callback((Fl_Callback*)cb_Apply);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(380, 45, 110, 25, gettext("Cancel"));
        o->box(FL_PLASTIC_THIN_UP_BOX);
        o->color((Fl_Color)11);
        o->selection_color((Fl_Color)3);
        o->labelsize(11);
        o->callback((Fl_Callback*)cb_Cancel);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(381, 13, 110, 25, gettext("Ok"));
        o->box(FL_PLASTIC_THIN_UP_BOX);
        o->color((Fl_Color)11);
        o->selection_color((Fl_Color)3);
        o->labelsize(11);
        o->callback((Fl_Callback*)cb_Ok);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(11, 45, 110, 25, gettext("Reset Sliders"));
        o->box(FL_PLASTIC_THIN_UP_BOX);
        o->color((Fl_Color)11);
        o->selection_color((Fl_Color)3);
        o->labelsize(11);
        o->callback((Fl_Callback*)cb_Reset);
      } // Fl_Button* o
      o->end();
    } // Fl_Group* o
    { Scr = new Fl_Scroll(0, 76, 500, 524);
      Scr->type(2);
      Scr->color((Fl_Color)44);
      Scr->selection_color(FL_DARK1);
      Scr->labelcolor(FL_BACKGROUND2_COLOR);
      Scr->end();
    } // Fl_Scroll* Scr
    drummixerwin->end();
  } // Fl_Window* drummixerwin
  return drummixerwin;
}

void Drummixer::labelwin() {
  char temp[256];
  sprintf(temp, "%s %s - Drum Note Mixer - %s %s",PACKAGE,VERSION,rmgmo->nStyle.Name,rmgmo->nStyle.Pattern[rmgmo->Variacion].Name);
  drummixerwin->copy_label(temp);
}

void Drummixer::GuardaPrefs() {
  Fl_Preferences stygmorgan (Fl_Preferences::USER, WEBSITE, PACKAGE);
  
  stygmorgan.set("drummixerwinX",drummixerwin->x());
  stygmorgan.set("drummixerwinY",drummixerwin->y());
  stygmorgan.set("drummixerwinW",drummixerwin->w());
  stygmorgan.set("drummixerwinH",drummixerwin->h());
}

void Drummixer::dm_call1(Fl_Value_Slider* o, void* v) {
  ((Drummixer*)(o->parent()->parent()->parent()->user_data()))->dm_call1_i(o,v);
}

void Drummixer::dm_call1_i(Fl_Value_Slider* o, void*) {
  long long kd = (long long) o->user_data();
  int nota= int(kd)-1800;
  rmgmo->VelPorce[nota]=(int)o->value();
}

void Drummixer::ReadPattern() {
  int i;
  for (i=0;i<128;i++)
  {
   rmgmo->losquehayqueponer[i]=0;
   rmgmo->VelPorce[i]= 0;
   rmgmo->NotaVel[i]=0;
  }
  
  
  for (i=0; i<rmgmo->nStyle.Pattern[rmgmo->Variacion].eventos;i++)
  {
   if (rmgmo->pcp[rmgmo->PEG[rmgmo->Variacion][i].canal]==9)
    {   
  
     if ((rmgmo->PEG[rmgmo->Variacion][i].tipo ==2) || (rmgmo->PEG[rmgmo->Variacion][i].velocity >0))
      {
        rmgmo->losquehayqueponer[rmgmo->PEG[rmgmo->Variacion][i].nota] = 1;
        
      }
     } 
     }
}

void Drummixer::GeneraScroll() {
  int i,x,y;
  char tmp[128];
  Scr->clear();
  
  i=0;
  x=8;
  y=76;
      
   for(i=0; i<128; i++)
   
  {  
   
    if(rmgmo->losquehayqueponer[i]==1)
     { 
        
        Fl_Group* ob = new Fl_Group( x-4 , y, 498, 40);
              
        ob->box(FL_BORDER_BOX);
        ob->color(44);
        ob->labelsize(9);
        ob->labelcolor(88);
        ob->align(FL_ALIGN_BOTTOM_LEFT|FL_ALIGN_INSIDE);
        ob->user_data((void *) i);
        ob->begin();
       
         Fl_Box* Caja = new Fl_Box(x+2, y+12, 14, 14);
         Caja->box(FL_GTK_ROUND_UP_BOX);
         Caja->color((Fl_Color)59);
         Caja->selection_color((Fl_Color)2);
         ob->add(Caja);
  
         bzero(tmp,sizeof tmp);
         sprintf(tmp,"%s",rmgmo->PD[rmgmo->CM[9].program].DNN[i].Nom);
         if (strlen(tmp) < 3) sprintf(tmp,"%s%d",rmgmo->NCE[i%12].Nom,i/12);    
          
      
         Fl_Box* Instru = new Fl_Box(x+22,y+4,170,30); 
         Instru->box(FL_BORDER_BOX); 
         Instru->color(44);  
         Instru->labelsize(13);
         Instru->labelcolor(FL_LIGHT2);
         Instru->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
         Instru->copy_label(tmp);
         ob->add(Instru) ;
   
         DSlider* ElSlider = new DSlider(x+198,y+4,272,30);
         ElSlider->type(5);
         ElSlider->box(FL_GTK_DOWN_BOX);
         ElSlider->color((Fl_Color)44);
         ElSlider->selection_color((Fl_Color)12);
         ElSlider->labeltype(FL_NORMAL_LABEL);
         ElSlider->labelfont(0);
         ElSlider->labelsize(14);
         ElSlider->labelcolor(FL_FOREGROUND_COLOR);
         ElSlider->minimum(-70);
         ElSlider->maximum(70);
         ElSlider->step(1);
         ElSlider->textsize(14);
         ElSlider->textcolor(FL_LIGHT2);
         ElSlider->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
         ElSlider->when(FL_WHEN_CHANGED);
         ElSlider->user_data((void*) (1800+i));
         ElSlider->callback((Fl_Callback *)dm_call1);
         
        ob->end(); 
        
        Scr->add(*ob);
        y=y+40;
        
   }
  }
  
  Scr->redraw();    
  Fl::flush();
}

void Drummixer::MiraLucecitas() {
  for(int i=0;i<128;i++)
  {
     if(rmgmo->losquehayqueponer[i])
       {
         if(rmgmo->NotaVel[i]!=0)PonLucecitas(BuscaLucecita(i)-1);
         if(rmgmo->NotaVel[i]==0)QuitaLucecitas(BuscaLucecita(i)-1);
       }               
  }
}

int Drummixer::BuscaLucecita(int luz) {
  int Encontradas = 0;
  
  for (int i=0;i<128;i++)
    {
       if(rmgmo->losquehayqueponer[i])
          {
            Encontradas++;
            if (i == luz) break;
          } 
     }
     
   return(Encontradas);
}

void Drummixer::PonLucecitas(int luz) {
  Fl_Group *h = Scr->child(luz)->as_group();
  h->child(0)->color(2);
  h->child(0)->redraw();
}

void Drummixer::QuitaLucecitas(int luz) {
  Fl_Group *h = Scr->child(luz)->as_group();
  h->child(0)->color(59);
  h->child(0)->redraw();
}

void Drummixer::PonCambiosPoce() {
  int i=0;
  int velo=0;
  
  for (i=0; i<rmgmo->nStyle.Pattern[rmgmo->Variacion].eventos;i++)
  {
   
   if (rmgmo->pcp[rmgmo->PEG[rmgmo->Variacion][i].canal]==9)
    {   
  
     if ((rmgmo->PEG[rmgmo->Variacion][i].tipo ==2) || (rmgmo->PEG[rmgmo->Variacion][i].velocity >0))
      {
      
      velo= rmgmo->PEG[rmgmo->Variacion][i].velocity;
      velo += (rmgmo->PEG[rmgmo->Variacion][i].velocity * rmgmo->VelPorce[rmgmo->PEG[rmgmo->Variacion][i].nota] / 100);
      if(velo > 127) velo= 127;
      if(velo <=0) velo = 4;
      rmgmo->PEG[rmgmo->Variacion][i].velocity = velo;
        
      }
     } 
     }
}

void Drummixer::ResetSliders() {
  int i,k;
  k=0;
  for(i=0;i<128;i++)
   {
    rmgmo->VelPorce[i]=0;
   
     if(rmgmo->losquehayqueponer[i]==1)
       {
          Fl_Group *h = Scr->child(k)->as_group();
          Fl_Value_Slider *g = (Fl_Value_Slider *) h->child(2);
          g->value(0);
          g->redraw();
          k++;
        }  
    }
}
