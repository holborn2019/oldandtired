// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include <libintl.h>
#include "stygmeditui.h"
//Copyright(c) 2006 Josep Andreu (holborn)
//License GNU/GPL version 2
#include "choice.h"

void type_cb(Fl_Widget* o,void* v) {
  ((rmgmedit*)(o->parent()->user_data()))->type_cb_i(o,v);
}

void rmgmedit::cb_rmgmeditwin_i(Fl_Double_Window* o, void*) {
  pera=2;
GuardaPrefs();
o->hide();
rmgmo->weventeditor=0;
o->clear();
delete rmgmeditwin;
}
void rmgmedit::cb_rmgmeditwin(Fl_Double_Window* o, void* v) {
  ((rmgmedit*)(o->user_data()))->cb_rmgmeditwin_i(o,v);
}

void rmgmedit::cb_EditBro_i(Fl_Browser* o, void*) {
  int i,j,k;

if (o->value()== 1) 
{
o->select(1,0);
return;
}
 
i=rmgmo->buscanum(o->text(o->value()));

if ((Hear->value()) && ( rmgmo->PEG[rmgmo->Variacion][i].tipo == 2 ))
rmgmo->envionota(rmgmo->pcp[rmgmo->PEG[rmgmo->Variacion][i].canal],rmgmo->PEG[rmgmo->Variacion][i].nota,127);


if (Fl::event_button()==3) 
{
editaevento(i);
//EditBro->redraw();
return;
}

if (sAllE->value())
{ 
  for(j=2; j<=o->size(); j++)
   {
      k=rmgmo->buscanum(o->text(j));
      if ((rmgmo->PEG[rmgmo->Variacion][k].tipo == rmgmo->PEG[rmgmo->Variacion][i].tipo) && (rmgmo->PEG[rmgmo->Variacion][k].nota == rmgmo->PEG[rmgmo->Variacion][i].nota)
      && (rmgmo->PEG[rmgmo->Variacion][k].canal == rmgmo->PEG[rmgmo->Variacion][i].canal)) o->select(j,1);
    }
 };
}
void rmgmedit::cb_EditBro(Fl_Browser* o, void* v) {
  ((rmgmedit*)(o->parent()->user_data()))->cb_EditBro_i(o,v);
}

void rmgmedit::cb_sNote_i(Fl_Check_Button*, void*) {
  ReadPattern();
}
void rmgmedit::cb_sNote(Fl_Check_Button* o, void* v) {
  ((rmgmedit*)(o->parent()->parent()->user_data()))->cb_sNote_i(o,v);
}

void rmgmedit::cb_sControl_i(Fl_Check_Button*, void*) {
  ReadPattern();
}
void rmgmedit::cb_sControl(Fl_Check_Button* o, void* v) {
  ((rmgmedit*)(o->parent()->parent()->user_data()))->cb_sControl_i(o,v);
}

void rmgmedit::cb_sProgram_i(Fl_Check_Button*, void*) {
  ReadPattern();
}
void rmgmedit::cb_sProgram(Fl_Check_Button* o, void* v) {
  ((rmgmedit*)(o->parent()->parent()->user_data()))->cb_sProgram_i(o,v);
}

void rmgmedit::cb_sPitchBend_i(Fl_Check_Button*, void*) {
  ReadPattern();
}
void rmgmedit::cb_sPitchBend(Fl_Check_Button* o, void* v) {
  ((rmgmedit*)(o->parent()->parent()->user_data()))->cb_sPitchBend_i(o,v);
}

void rmgmedit::cb__i(Fl_Menu_Bar*, void*) {
  //EditBro->redraw();
}
void rmgmedit::cb_(Fl_Menu_Bar* o, void* v) {
  ((rmgmedit*)(o->parent()->user_data()))->cb__i(o,v);
}

void rmgmedit::cb_Brush_i(Fl_Menu_*, void*) {
  rmgmo->XGGM();
ReadPattern();
}
void rmgmedit::cb_Brush(Fl_Menu_* o, void* v) {
  ((rmgmedit*)(o->parent()->user_data()))->cb_Brush_i(o,v);
}

void rmgmedit::cb_D2_i(Fl_Menu_*, void*) {
  rmgmo->D2Db2toRide();
ReadPattern();
}
void rmgmedit::cb_D2(Fl_Menu_* o, void* v) {
  ((rmgmedit*)(o->parent()->user_data()))->cb_D2_i(o,v);
}

void rmgmedit::cb_High_i(Fl_Menu_*, void*) {
  rmgmo->HighQtoLowFloorTom();
ReadPattern();
}
void rmgmedit::cb_High(Fl_Menu_* o, void* v) {
  ((rmgmedit*)(o->parent()->user_data()))->cb_High_i(o,v);
}

void rmgmedit::cb_Help_i(Fl_Menu_*, void*) {
  rmgmo->ventana=7;
//EditBro->redraw();
ReadPattern();
}
void rmgmedit::cb_Help(Fl_Menu_* o, void* v) {
  ((rmgmedit*)(o->parent()->user_data()))->cb_Help_i(o,v);
}

void rmgmedit::cb_About_i(Fl_Menu_*, void*) {
  if(wabout) return;
wabout=1;
rmgmo->ventana=1;
//EditBro->redraw();
ReadPattern();
}
void rmgmedit::cb_About(Fl_Menu_* o, void* v) {
  ((rmgmedit*)(o->parent()->user_data()))->cb_About_i(o,v);
}

unsigned char rmgmedit::menu__i18n_done = 0;
Fl_Menu_Item rmgmedit::menu_[] = {
 {"&Functions", 0,  0, 0, 64, (uchar)FL_NORMAL_LABEL, 0, 14, 7},
 {"Brush Drums XG->GM", 0,  (Fl_Callback*)rmgmedit::cb_Brush, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 14, 7},
 {"D2 & Db2 to Ride", 0,  (Fl_Callback*)rmgmedit::cb_D2, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 14, 7},
 {"High Q to Low Floor Tom()", 0,  (Fl_Callback*)rmgmedit::cb_High, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 14, 7},
 {0,0,0,0,0,0,0,0,0},
 {"&Help", 0,  0, 0, 64, (uchar)FL_NORMAL_LABEL, 0, 14, 7},
 {"Help", 0xffbe,  (Fl_Callback*)rmgmedit::cb_Help, 0, 128, (uchar)FL_NORMAL_LABEL, 0, 14, 7},
 {"About", 0,  (Fl_Callback*)rmgmedit::cb_About, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 14, 7},
 {0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0}
};
Fl_Menu_Item* rmgmedit::sFunctions = rmgmedit::menu_ + 0;

void rmgmedit::cb_Hear_i(Fl_Button* o, void*) {
  if (o->value() == 0) rmgmo->panico(1,0,15);
}
void rmgmedit::cb_Hear(Fl_Button* o, void* v) {
  ((rmgmedit*)(o->parent()->user_data()))->cb_Hear_i(o,v);
}

#include <FL/Fl_Pixmap.H>
static const char *idata_speaker2[] = {
"32 32 2 1 ",
"  c black",
". c None",
"................................",
"................  ..............",
"...............   ..............",
"..............     .............",
".............      .............",
"............       .............",
"...........        .............",
"..........         ......  .....",
".........          .......  ....",
"........           ........  ...",
"..    ..           .... .... ...",
".     ..           ....  ...  ..",
".     ..           .....  ... ..",
".     ..           .. ... ... ..",
".     ..           ..  ..  ..  .",
".     ..           ... ... ..  .",
".     ..           ... ... ..  .",
".     ..           ..  ..  ..  .",
".     ..           .. ... ... ..",
".     ..           .....  ... ..",
".     ..           ....  ...  ..",
"..    ..           .... .... ...",
"........           ........  ...",
".........          .......  ....",
"..........         ......  .....",
"...........        .............",
"............       .............",
".............      .............",
"..............     .............",
"...............   ..............",
"................  ..............",
"................................"
};
static Fl_Image *image_speaker2() {
  static Fl_Image *image = new Fl_Pixmap(idata_speaker2);
  return image;
}

void rmgmedit::cb_Edit_i(Fl_Button*, void*) {
  int i,j;

for(i=2; i<=EditBro->size(); i++)
 {
   if (EditBro->selected(i))
        {  
          j=rmgmo->buscanum(EditBro->text(i));
          editaevento(j);
          break;
          
        }  
  };
}
void rmgmedit::cb_Edit(Fl_Button* o, void* v) {
  ((rmgmedit*)(o->parent()->parent()->user_data()))->cb_Edit_i(o,v);
}

void rmgmedit::cb_Delete_i(Fl_Button*, void*) {
  int i;
int j=0;
for (i=2; i<=EditBro->size(); i++)


{
if (EditBro->selected(i)) 
{

rmgmo->borraevento(rmgmo->buscanum(EditBro->text(i))-j);
j++;
}
}

ReadPattern();
}
void rmgmedit::cb_Delete(Fl_Button* o, void* v) {
  ((rmgmedit*)(o->parent()->parent()->user_data()))->cb_Delete_i(o,v);
}

void rmgmedit::cb_IsNote_i(Fl_Check_Button*, void*) {
  ReadPattern();
}
void rmgmedit::cb_IsNote(Fl_Check_Button* o, void* v) {
  ((rmgmedit*)(o->parent()->parent()->user_data()))->cb_IsNote_i(o,v);
}

void rmgmedit::cb_IsControl_i(Fl_Check_Button*, void*) {
  ReadPattern();
}
void rmgmedit::cb_IsControl(Fl_Check_Button* o, void* v) {
  ((rmgmedit*)(o->parent()->parent()->user_data()))->cb_IsControl_i(o,v);
}

void rmgmedit::cb_IsProgram_i(Fl_Check_Button*, void*) {
  ReadPattern();
}
void rmgmedit::cb_IsProgram(Fl_Check_Button* o, void* v) {
  ((rmgmedit*)(o->parent()->parent()->user_data()))->cb_IsProgram_i(o,v);
}

void rmgmedit::cb_IsPitchBend_i(Fl_Check_Button*, void*) {
  ReadPattern();
}
void rmgmedit::cb_IsPitchBend(Fl_Check_Button* o, void* v) {
  ((rmgmedit*)(o->parent()->parent()->user_data()))->cb_IsPitchBend_i(o,v);
}

void rmgmedit::cb_Insert_i(Fl_Button*, void*) {
  int index=0;
int canal=0;
int tipo=0;
int i;

for (i=2;i<=EditBro->size();i++)
if (EditBro->selected(i))
  {
     index=rmgmo->buscanum(EditBro->text(i));
     break;
   }
   
if (IsNote->value()) tipo=2;
if (IsControl->value()) tipo=3;
if (IsProgram->value()) tipo=4;
if (IsPitchBend->value()) tipo=5;

canal=(int) SChMidi->value() -1;    
     
rmgmo->InsertaEvento(index,tipo,canal);

ReadPattern();
editaevento(index);
}
void rmgmedit::cb_Insert(Fl_Button* o, void* v) {
  ((rmgmedit*)(o->parent()->parent()->user_data()))->cb_Insert_i(o,v);
}

void rmgmedit::cb_SChMidi_i(Fl_Counter* o, void*) {
  o->parent()->redraw();
}
void rmgmedit::cb_SChMidi(Fl_Counter* o, void* v) {
  ((rmgmedit*)(o->parent()->parent()->user_data()))->cb_SChMidi_i(o,v);
}

void rmgmedit::cb_Ok_i(Fl_Button*, void*) {
  rmgmeditwin->do_callback();
}
void rmgmedit::cb_Ok(Fl_Button* o, void* v) {
  ((rmgmedit*)(o->parent()->user_data()))->cb_Ok_i(o,v);
}

void rmgmedit::cb_Cancel_i(Fl_Button*, void*) {
  rmgmo->bcancel=2;
rmgmeditwin->do_callback();
}
void rmgmedit::cb_Cancel(Fl_Button* o, void* v) {
  ((rmgmedit*)(o->parent()->user_data()))->cb_Cancel_i(o,v);
}

void rmgmedit::cb_Eventwin_i(Fl_Double_Window*, void*) {
  Eventwin->hide();
//EditBro->redraw();
}
void rmgmedit::cb_Eventwin(Fl_Double_Window* o, void* v) {
  ((rmgmedit*)(o->user_data()))->cb_Eventwin_i(o,v);
}

void rmgmedit::cb_Ok1_i(Fl_Button*, void*) {
  int i;
int pvelo=0;
int plength=0;
int lastselected=1;

if (sAllE->value())
{

  if (presvelo->value()) pvelo=1;
  if (preslength->value()) plength=1; 

for (i=2;i<=EditBro->size();i++)
{
  if (EditBro->selected(i))
  { 
    rmgmo->selevent=rmgmo->buscanum(EditBro->text(i));
    rmgmo->ActuaEvento(1, pvelo,plength,(unsigned int)SlPos->value(),(int)SlNote->value(),(int)SlVal1->value(),(int)SlVal2->value(),(int)SlVelo->value(),(int)SlLength->value());
    if(lastselected==1) lastselected=i;
  }
}  


}
else
{
rmgmo->ActuaEvento(0,pvelo,plength,(unsigned int)SlPos->value(),(int)SlNote->value(),(int)SlVal1->value(),(int)SlVal2->value(),(int)SlVelo->value(),(int)SlLength->value());
lastselected=EditBro->value();

}
Eventwin->do_callback();
ReadPattern();
EditBro->topline(lastselected);
EditBro->select(lastselected,1);
}
void rmgmedit::cb_Ok1(Fl_Button* o, void* v) {
  ((rmgmedit*)(o->parent()->user_data()))->cb_Ok1_i(o,v);
}

void rmgmedit::cb_Cancel1_i(Fl_Button*, void*) {
  Eventwin->do_callback();
}
void rmgmedit::cb_Cancel1(Fl_Button* o, void* v) {
  ((rmgmedit*)(o->parent()->user_data()))->cb_Cancel1_i(o,v);
}

void rmgmedit::cb_SlPos_i(Fl_Counter* o, void*) {
  char pos[32];
char *posi;
o->parent()->redraw();

bzero(pos,sizeof(pos));
posi=pos;
rmgmo->convtickcompasval(posi,(int)o->value());
PosDis->copy_label(pos);
SlVal2->maximum(rmgmo->longic - SlPos->value());
}
void rmgmedit::cb_SlPos(Fl_Counter* o, void* v) {
  ((rmgmedit*)(o->parent()->user_data()))->cb_SlPos_i(o,v);
}

void rmgmedit::cb_SlNote_i(Fl_Counter* o, void*) {
  char note[32];
char *notei;
o->parent()->redraw();

bzero(note,sizeof(note));
notei=note;


rmgmo->convnotaval(notei,(int)o->value());

NotaDis->copy_label(note);
}
void rmgmedit::cb_SlNote(Fl_Counter* o, void* v) {
  ((rmgmedit*)(o->parent()->user_data()))->cb_SlNote_i(o,v);
}

void rmgmedit::cb_SlVal1_i(Fl_Counter* o, void*) {
  o->parent()->redraw();
}
void rmgmedit::cb_SlVal1(Fl_Counter* o, void* v) {
  ((rmgmedit*)(o->parent()->user_data()))->cb_SlVal1_i(o,v);
}

void rmgmedit::cb_SlVal2_i(Fl_Counter* o, void*) {
  o->parent()->redraw();
}
void rmgmedit::cb_SlVal2(Fl_Counter* o, void* v) {
  ((rmgmedit*)(o->parent()->user_data()))->cb_SlVal2_i(o,v);
}

void rmgmedit::cb_SlVelo_i(Fl_Counter* o, void*) {
  o->parent()->redraw();
}
void rmgmedit::cb_SlVelo(Fl_Counter* o, void* v) {
  ((rmgmedit*)(o->parent()->user_data()))->cb_SlVelo_i(o,v);
}

void rmgmedit::cb_SlLength_i(Fl_Counter* o, void*) {
  o->parent()->redraw();
}
void rmgmedit::cb_SlLength(Fl_Counter* o, void* v) {
  ((rmgmedit*)(o->parent()->user_data()))->cb_SlLength_i(o,v);
}

rmgmedit::rmgmedit(RMGMO *rmgmo_) {
  Fl::visual(FL_DOUBLE|FL_INDEX);
  Fl::visual(FL_RGB);
  
  char temp[80];
  int x1,y1,w1,h1;
  int speaker;
  static const char *pepe [] ={"stygmorgan"};
  
  int argc=1;
  char **argv= (char **) pepe;
  
  Fl::visual(FL_DOUBLE|FL_INDEX);
  Fl::visual(FL_RGB);
  rmgmo=rmgmo_;
  
  
  
  static const int colsizes[]= {60,100,32,110,160,160,0};
  
  
  make_window();
  
  EditBro->column_widths((const int*) colsizes);
  
  make_eventwindow();
  
  Fl_Preferences stygmorgan (Fl_Preferences::USER, WEBSITE, PACKAGE);
  stygmorgan.get("rmgmeditwinX",x1,x);
  stygmorgan.get("rmgmeditwinY",y1,y);
  stygmorgan.get("rmgmeditwinW",w1,750);
  stygmorgan.get("rmgmeditwinH",h1,535);
  stygmorgan.get("SpeakerOnOff",speaker,0);
  if(speaker)Hear->value(1); else Hear->value(0);
  
  rmgmeditwin->icon((char *)p);
  
  sNote->value(1);
  sControl->value(1);
  sProgram->value(1);
  sPitchBend->value(1);
  DNomCh->copy_label("All");
  BaseChord->copy_label("---");
  IsNote->setonly();
  bzero(temp,sizeof(temp));
  sprintf(temp, "%s %s - %s - %s - Event Editor",PACKAGE,VERSION,rmgmo->nStyle.Name,rmgmo->nStyle.Pattern[rmgmo->Variacion].Name);
  rmgmeditwin->label(temp);
  
  chsel=0;
  SelCh->menu(choices);
  SelCh->value(0);
  
  rmgmo->PendientesEE=0;
  memset(rmgmo->POEE, 0 ,sizeof rmgmo->POEE);
  
  rmgmeditwin->show(argc,argv);
  rmgmeditwin->resize(x1,y1,w1,h1);
  
  ReadPattern();
}

Fl_Double_Window* rmgmedit::make_window() {
  { rmgmeditwin = new Fl_Double_Window(755, 545);
    rmgmeditwin->color((Fl_Color)44);
    rmgmeditwin->labelsize(11);
    rmgmeditwin->labelcolor(FL_BACKGROUND2_COLOR);
    rmgmeditwin->callback((Fl_Callback*)cb_rmgmeditwin, (void*)(this));
    { EditBro = new Fl_Browser(5, 135, 745, 405);
      EditBro->tooltip(gettext("Left Click Select - Rigth Click Edit"));
      EditBro->type(3);
      EditBro->color((Fl_Color)44);
      EditBro->selection_color(FL_LIGHT2);
      EditBro->labelcolor(FL_BACKGROUND2_COLOR);
      EditBro->textcolor(FL_BACKGROUND2_COLOR);
      EditBro->callback((Fl_Callback*)cb_EditBro);
      Fl_Group::current()->resizable(EditBro);
    } // Fl_Browser* EditBro
    { Fl_Group* o = new Fl_Group(5, 60, 90, 70);
      o->box(FL_THIN_DOWN_BOX);
      o->color((Fl_Color)44);
      o->selection_color(FL_DARK1);
      o->labelcolor(FL_BACKGROUND2_COLOR);
      { sNote = new Fl_Check_Button(10, 65, 60, 15, gettext("Note"));
        sNote->down_box(FL_DOWN_BOX);
        sNote->color((Fl_Color)44);
        sNote->selection_color((Fl_Color)3);
        sNote->labelsize(11);
        sNote->labelcolor(FL_BACKGROUND2_COLOR);
        sNote->callback((Fl_Callback*)cb_sNote);
        sNote->when(FL_WHEN_CHANGED);
      } // Fl_Check_Button* sNote
      { sControl = new Fl_Check_Button(10, 95, 60, 15, gettext("Control"));
        sControl->down_box(FL_DOWN_BOX);
        sControl->color((Fl_Color)44);
        sControl->selection_color((Fl_Color)3);
        sControl->labelsize(11);
        sControl->labelcolor(FL_BACKGROUND2_COLOR);
        sControl->callback((Fl_Callback*)cb_sControl);
        sControl->when(FL_WHEN_CHANGED);
      } // Fl_Check_Button* sControl
      { sProgram = new Fl_Check_Button(10, 80, 65, 15, gettext("Program"));
        sProgram->down_box(FL_DOWN_BOX);
        sProgram->color((Fl_Color)44);
        sProgram->selection_color((Fl_Color)3);
        sProgram->labelsize(11);
        sProgram->labelcolor(FL_BACKGROUND2_COLOR);
        sProgram->callback((Fl_Callback*)cb_sProgram);
        sProgram->when(FL_WHEN_CHANGED);
      } // Fl_Check_Button* sProgram
      { sPitchBend = new Fl_Check_Button(10, 110, 80, 15, gettext("Pitch Bend"));
        sPitchBend->down_box(FL_DOWN_BOX);
        sPitchBend->color((Fl_Color)44);
        sPitchBend->selection_color((Fl_Color)3);
        sPitchBend->labelsize(11);
        sPitchBend->labelcolor(FL_BACKGROUND2_COLOR);
        sPitchBend->callback((Fl_Callback*)cb_sPitchBend);
        sPitchBend->when(FL_WHEN_CHANGED);
      } // Fl_Check_Button* sPitchBend
      o->end();
    } // Fl_Group* o
    { Fl_Menu_Bar* o = new Fl_Menu_Bar(0, 0, 755, 20);
      o->color((Fl_Color)44);
      o->selection_color(FL_DARK1);
      o->labelcolor(FL_BACKGROUND2_COLOR);
      o->callback((Fl_Callback*)cb_);
      if (!menu__i18n_done) {
        int i=0;
        for ( ; i<8; i++)
          if (menu_[i].label())
            menu_[i].label(gettext(menu_[i].label()));
        menu__i18n_done = 1;
      }
      o->menu(menu_);
    } // Fl_Menu_Bar* o
    { Hear = new Fl_Button(605, 35, 40, 40);
      Hear->tooltip(gettext("Hear Events"));
      Hear->type(1);
      Hear->box(FL_PLASTIC_THIN_UP_BOX);
      Hear->color((Fl_Color)11);
      Hear->selection_color((Fl_Color)3);
      Hear->image( image_speaker2() );
      Hear->callback((Fl_Callback*)cb_Hear);
      Hear->align(Fl_Align(FL_ALIGN_CLIP));
    } // Fl_Button* Hear
    { Fl_Box* o = new Fl_Box(100, 60, 90, 70);
      o->box(FL_THIN_DOWN_BOX);
      o->color((Fl_Color)44);
      o->selection_color(FL_DARK1);
      o->labelcolor(FL_BACKGROUND2_COLOR);
    } // Fl_Box* o
    { SelCh = new Fl_Choice(105, 75, 80, 20, gettext("Midi Channel"));
      SelCh->down_box(FL_BORDER_BOX);
      SelCh->color((Fl_Color)44);
      SelCh->selection_color(FL_DARK1);
      SelCh->labelsize(11);
      SelCh->labelcolor(FL_BACKGROUND2_COLOR);
      SelCh->textsize(11);
      SelCh->textcolor(FL_BACKGROUND2_COLOR);
      SelCh->align(Fl_Align(FL_ALIGN_TOP_LEFT));
    } // Fl_Choice* SelCh
    { DNomCh = new Fl_Box(105, 100, 80, 25);
      DNomCh->box(FL_DOWN_BOX);
      DNomCh->color((Fl_Color)44);
      DNomCh->selection_color(FL_DARK1);
      DNomCh->labelsize(11);
      DNomCh->labelcolor(FL_BACKGROUND2_COLOR);
    } // Fl_Box* DNomCh
    { Disi = new Fl_Box(5, 35, 185, 20, gettext("Display"));
      Disi->box(FL_THIN_DOWN_BOX);
      Disi->color((Fl_Color)44);
      Disi->labelfont(1);
      Disi->labelcolor((Fl_Color)1);
      Disi->align(Fl_Align(FL_ALIGN_CENTER|FL_ALIGN_INSIDE));
    } // Fl_Box* Disi
    { Fl_Box* o = new Fl_Box(210, 35, 185, 20, gettext("Select"));
      o->box(FL_THIN_DOWN_BOX);
      o->color((Fl_Color)44);
      o->selection_color(FL_DARK1);
      o->labelfont(1);
      o->labelcolor((Fl_Color)1);
      o->align(Fl_Align(FL_ALIGN_CENTER|FL_ALIGN_INSIDE));
    } // Fl_Box* o
    { Fl_Group* o = new Fl_Group(210, 60, 185, 60);
      o->box(FL_THIN_DOWN_BOX);
      o->color((Fl_Color)44);
      o->selection_color(FL_DARK1);
      o->labelcolor(FL_BACKGROUND2_COLOR);
      { sAllE = new Fl_Check_Button(215, 65, 175, 20, gettext("All Equal Events"));
        sAllE->down_box(FL_DOWN_BOX);
        sAllE->color((Fl_Color)44);
        sAllE->selection_color((Fl_Color)3);
        sAllE->labelsize(11);
        sAllE->labelcolor(FL_BACKGROUND2_COLOR);
        sAllE->when(FL_WHEN_CHANGED);
      } // Fl_Check_Button* sAllE
      { Fl_Button* o = new Fl_Button(220, 90, 80, 25, gettext("Edit"));
        o->box(FL_PLASTIC_THIN_UP_BOX);
        o->color((Fl_Color)11);
        o->selection_color((Fl_Color)3);
        o->labelsize(11);
        o->callback((Fl_Callback*)cb_Edit);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(305, 90, 80, 25, gettext("Delete"));
        o->box(FL_PLASTIC_THIN_UP_BOX);
        o->color((Fl_Color)11);
        o->selection_color((Fl_Color)3);
        o->labelsize(11);
        o->callback((Fl_Callback*)cb_Delete);
      } // Fl_Button* o
      o->end();
    } // Fl_Group* o
    { Fl_Box* o = new Fl_Box(405, 35, 185, 20, gettext("Insert"));
      o->box(FL_THIN_DOWN_BOX);
      o->color((Fl_Color)44);
      o->selection_color(FL_DARK1);
      o->labelfont(1);
      o->labelcolor((Fl_Color)1);
      o->align(Fl_Align(FL_ALIGN_CENTER|FL_ALIGN_INSIDE));
    } // Fl_Box* o
    { Fl_Group* o = new Fl_Group(405, 60, 90, 70);
      o->box(FL_THIN_DOWN_BOX);
      o->color((Fl_Color)44);
      o->selection_color(FL_DARK1);
      o->labelcolor(FL_BACKGROUND2_COLOR);
      { IsNote = new Fl_Check_Button(410, 65, 60, 15, gettext("Note"));
        IsNote->type(102);
        IsNote->down_box(FL_DOWN_BOX);
        IsNote->color((Fl_Color)44);
        IsNote->selection_color((Fl_Color)3);
        IsNote->labelsize(11);
        IsNote->labelcolor(FL_BACKGROUND2_COLOR);
        IsNote->callback((Fl_Callback*)cb_IsNote);
        IsNote->when(FL_WHEN_CHANGED);
      } // Fl_Check_Button* IsNote
      { IsControl = new Fl_Check_Button(410, 95, 60, 15, gettext("Control"));
        IsControl->type(102);
        IsControl->down_box(FL_DOWN_BOX);
        IsControl->color((Fl_Color)44);
        IsControl->selection_color(FL_DARK1);
        IsControl->labelsize(11);
        IsControl->labelcolor(FL_BACKGROUND2_COLOR);
        IsControl->callback((Fl_Callback*)cb_IsControl);
        IsControl->when(FL_WHEN_CHANGED);
      } // Fl_Check_Button* IsControl
      { IsProgram = new Fl_Check_Button(410, 80, 65, 15, gettext("Program"));
        IsProgram->type(102);
        IsProgram->down_box(FL_DOWN_BOX);
        IsProgram->color((Fl_Color)44);
        IsProgram->selection_color((Fl_Color)3);
        IsProgram->labelsize(11);
        IsProgram->labelcolor(FL_BACKGROUND2_COLOR);
        IsProgram->callback((Fl_Callback*)cb_IsProgram);
        IsProgram->when(FL_WHEN_CHANGED);
      } // Fl_Check_Button* IsProgram
      { IsPitchBend = new Fl_Check_Button(410, 110, 80, 15, gettext("Pitch Bend"));
        IsPitchBend->type(102);
        IsPitchBend->down_box(FL_DOWN_BOX);
        IsPitchBend->color((Fl_Color)44);
        IsPitchBend->selection_color((Fl_Color)3);
        IsPitchBend->labelsize(11);
        IsPitchBend->labelcolor(FL_BACKGROUND2_COLOR);
        IsPitchBend->callback((Fl_Callback*)cb_IsPitchBend);
        IsPitchBend->when(FL_WHEN_CHANGED);
        Fl_Group::current()->resizable(IsPitchBend);
      } // Fl_Check_Button* IsPitchBend
      o->end();
    } // Fl_Group* o
    { Fl_Group* o = new Fl_Group(500, 60, 90, 70);
      o->box(FL_THIN_DOWN_BOX);
      o->color((Fl_Color)44);
      o->selection_color(FL_DARK1);
      o->labelcolor(FL_BACKGROUND2_COLOR);
      { Fl_Button* o = new Fl_Button(505, 65, 80, 25, gettext("Insert"));
        o->box(FL_PLASTIC_THIN_UP_BOX);
        o->color((Fl_Color)11);
        o->selection_color((Fl_Color)3);
        o->labelsize(11);
        o->callback((Fl_Callback*)cb_Insert);
      } // Fl_Button* o
      { SChMidi = new Fl_Counter(505, 105, 80, 20, gettext("Midi Ch."));
        SChMidi->type(1);
        SChMidi->box(FL_NO_BOX);
        SChMidi->color((Fl_Color)44);
        SChMidi->selection_color(FL_DARK1);
        SChMidi->labelsize(11);
        SChMidi->labelcolor(FL_BACKGROUND2_COLOR);
        SChMidi->minimum(1);
        SChMidi->maximum(16);
        SChMidi->step(1);
        SChMidi->value(10);
        SChMidi->textcolor(FL_BACKGROUND2_COLOR);
        SChMidi->callback((Fl_Callback*)cb_SChMidi);
        SChMidi->align(Fl_Align(FL_ALIGN_TOP));
      } // Fl_Counter* SChMidi
      o->end();
    } // Fl_Group* o
    { Fl_Button* o = new Fl_Button(660, 55, 85, 25, gettext("Ok"));
      o->box(FL_PLASTIC_THIN_UP_BOX);
      o->color((Fl_Color)11);
      o->selection_color((Fl_Color)3);
      o->labelsize(11);
      o->callback((Fl_Callback*)cb_Ok);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(660, 25, 85, 25, gettext("Cancel"));
      o->box(FL_PLASTIC_THIN_UP_BOX);
      o->color((Fl_Color)11);
      o->selection_color((Fl_Color)3);
      o->labelsize(11);
      o->callback((Fl_Callback*)cb_Cancel);
    } // Fl_Button* o
    { BaseChord = new Fl_Box(600, 100, 145, 25);
      BaseChord->box(FL_DOWN_BOX);
      BaseChord->color((Fl_Color)44);
      BaseChord->selection_color(FL_DARK1);
      BaseChord->labelsize(11);
      BaseChord->labelcolor(FL_BACKGROUND2_COLOR);
      BaseChord->align(Fl_Align(FL_ALIGN_CENTER|FL_ALIGN_INSIDE));
    } // Fl_Box* BaseChord
    { LabelBaseChord = new Fl_Box(600, 85, 145, 15, gettext("Base Chord"));
      LabelBaseChord->box(FL_THIN_DOWN_BOX);
      LabelBaseChord->color((Fl_Color)44);
      LabelBaseChord->selection_color(FL_DARK1);
      LabelBaseChord->labelfont(1);
      LabelBaseChord->labelsize(12);
      LabelBaseChord->labelcolor((Fl_Color)1);
      LabelBaseChord->align(Fl_Align(FL_ALIGN_CENTER|FL_ALIGN_INSIDE));
    } // Fl_Box* LabelBaseChord
    rmgmeditwin->size_range(800, 600);
    rmgmeditwin->end();
  } // Fl_Double_Window* rmgmeditwin
  sNote->down_box(FL_NO_BOX);
   sNote->selection_color((Fl_Color)3);
   sNote->clear_visible_focus();    
   
   sControl->down_box(FL_NO_BOX);
   sControl->selection_color((Fl_Color)3);
   sControl->clear_visible_focus();    
   
   sProgram->down_box(FL_NO_BOX);
   sProgram->selection_color((Fl_Color)3);
   sProgram->clear_visible_focus();    
   
   sPitchBend->down_box(FL_NO_BOX);
   sPitchBend->selection_color((Fl_Color)3);
   sPitchBend->clear_visible_focus();    
   
   sAllE->down_box(FL_NO_BOX);
   sAllE->selection_color((Fl_Color)3);
   sAllE->clear_visible_focus();    
   
   IsNote->down_box(FL_NO_BOX);
   IsNote->selection_color((Fl_Color)3);
   IsNote->clear_visible_focus();    
   
   IsControl->down_box(FL_NO_BOX);
   IsControl->selection_color((Fl_Color)3);
   IsControl->clear_visible_focus();    
   
   IsProgram->down_box(FL_NO_BOX);
   IsProgram->selection_color((Fl_Color)3);
   IsProgram->clear_visible_focus();    
   
   IsPitchBend->down_box(FL_NO_BOX);
   IsPitchBend->selection_color((Fl_Color)3);
   IsPitchBend->clear_visible_focus();
  return rmgmeditwin;
}

void rmgmedit::ReadPattern() {
  int i;
  int fcana,feve; 
  char temp[256], evento[24],nota[64],pos[32],length[16],velo[16];
  char *posi = pos;
  char *noti = nota;
  
  
  EditBro->clear();
  
  bzero(temp,sizeof(temp));
  sprintf(temp, "@c@b@B44@C1@_%s\t@c@b@B45@C1@_%s\t@c@b@B44@C1@_%s\t@c@b@B45@C1@_%s\t@c@b@B44@C1@_%s\t@c@b@B45@C1@_%s\t@c@b@B44@C1@_%s", "Index","Position","Ch.","Event","Value 1","Value 2","Length"); 
  EditBro->add(temp);
  for (i=0; i<rmgmo->nStyle.Pattern[rmgmo->Variacion].eventos;i++)
  {
    fcana=0; feve=0;
  
  
  
  switch (chsel)
       {
         case 0:
          fcana=1;
          break;
         case 17:
          if (rmgmo->pcp[rmgmo->PEG[rmgmo->Variacion][i].canal]==9) fcana=1;
          break;
         default:
          if (rmgmo->PEG[rmgmo->Variacion][i].canal == (chsel - 1)) fcana=1;
       }
  
  
    if (fcana == 0 ) continue;
  
  
    switch (rmgmo->PEG[rmgmo->Variacion][i].tipo)
     {
       case 2:
       
       if (sNote->value()) feve=1;
        break;
       
       case 3:   
       
       if (sControl->value()) feve=1;
        break;
  
       case 4:   
       
       if (sProgram->value()) feve=1;
        break;
  
       case 5:
       if (sPitchBend->value()) feve=1;
       break;
  
       default:
         feve=1;
  
     }
  
  if (feve==0) continue;
  
  if ((fcana) && (feve))
  {
  
  bzero(pos,sizeof(pos));
  bzero(evento,sizeof(evento));
  bzero(nota,sizeof(nota));
  bzero(length,sizeof(length));
  bzero(velo,sizeof(velo));
  
  rmgmo->convtickcompas(posi,i);
  
  sprintf(length,"%s","-");
  sprintf(velo,"%s","-");
  
  
  switch (rmgmo->PEG[rmgmo->Variacion][i].tipo)
   { 
   case 2:
     
     strcpy(evento,"Note");
     
     rmgmo->convnota(noti,i);
     sprintf(velo,"%d",rmgmo->PEG[rmgmo->Variacion][i].velocity);
     sprintf(length,"%d",rmgmo->PEG[rmgmo->Variacion][i].length);
     
     break; 
   
   case 3:
     strcpy(evento,"Control");   
     sprintf(nota,"%s",rmgmo->CCn[rmgmo->PEG[rmgmo->Variacion][i].nota].Nom);
     sprintf(velo,"%d",rmgmo->PEG[rmgmo->Variacion][i].velocity);  
     break;
   case 4:
     strcpy(evento,"Program");    
      sprintf(nota,"%s",rmgmo->PresetList[rmgmo->CalculaBanco(rmgmo->pcp[rmgmo->PEG[rmgmo->Variacion][i].canal])].PBanco[rmgmo->PEG[rmgmo->Variacion][i].nota].ProgName);
     break;
   case 5:
     strcpy(evento,"PitchBend"); 
      sprintf(nota,"%d",rmgmo->PEG[rmgmo->Variacion][i].nota);   
     break;
   default:
     sprintf(evento,"%d", rmgmo->PEG[rmgmo->Variacion][i].tipo);
  }
  
  
  
  
  bzero(temp,sizeof(temp));
  if (i % 2 == 0)
  sprintf(temp, "@r@B44  %5d\t@r@B45  %s\t@r@B44  %2d\t@c@B45  %s\t@c@B44  %s\t@c@B45  %s\t@c@B44   %s", i,pos, rmgmo->PEG[rmgmo->Variacion][i].canal+1,evento,nota,velo,length);
  else
  sprintf(temp, "@r@B46  %5d\t@r@B47  %s\t@r@B46  %2d\t@c@B47  %s\t@c@B46  %s\t@c@B47  %s\t@c@B46   %s", i,pos, rmgmo->PEG[rmgmo->Variacion][i].canal+1,evento,nota,velo,length);
  
  
  EditBro->add(temp);
  
  }
   
  }
  
  // EditBro->redraw();
}

void rmgmedit::type_cb_i(Fl_Widget* o,void* v) {
  int i=0;
  char temp[28];
  long long cast_v=(long long)v;
  
  
  chsel=(int)cast_v;
  
  switch (chsel)
  {
  case 0:
  DNomCh->copy_label("All");
  BaseChord->copy_label("---");
  SChMidi->value(1);
  break;
  case 17:
  DNomCh->copy_label("Drums");
  BaseChord->copy_label("---");
  SChMidi->value(10);
  break;
  default:
  while ( (chsel -1) != rmgmo->nStyle.Pattern[rmgmo->Variacion].casm[i].track)
     {
      i++;
      if (i>16) break;
     }
  DNomCh->copy_label(rmgmo->nStyle.Pattern[rmgmo->Variacion].casm[i].Name);
  bzero(temp,sizeof(temp));
  
  if((rmgmo->nStyle.Pattern[rmgmo->Variacion].casm[i].ChRoot <0) || (rmgmo->nStyle.Pattern[rmgmo->Variacion].casm[i].ChRoot >23)) return;
  if((rmgmo->nStyle.Pattern[rmgmo->Variacion].casm[i].ChType <0) || (rmgmo->nStyle.Pattern[rmgmo->Variacion].casm[i].ChType >33)) return;
  
  
  sprintf(temp,"%s%s",rmgmo->NCE[rmgmo->nStyle.Pattern[rmgmo->Variacion].casm[i].ChRoot].Nom,rmgmo->ChN[rmgmo->nStyle.Pattern[rmgmo->Variacion].casm[i].ChType].Nom);
  BaseChord->copy_label(temp);
  
  SChMidi->value(chsel);
  }
  
  
  
  ReadPattern();
}

Fl_Double_Window* rmgmedit::make_eventwindow() {
  { Eventwin = new Fl_Double_Window(340, 290);
    Eventwin->color((Fl_Color)44);
    Eventwin->selection_color(FL_DARK1);
    Eventwin->labelcolor(FL_BACKGROUND2_COLOR);
    Eventwin->callback((Fl_Callback*)cb_Eventwin, (void*)(this));
    { Fl_Button* o = new Fl_Button(260, 250, 65, 25, gettext("Ok"));
      o->box(FL_PLASTIC_THIN_UP_BOX);
      o->color((Fl_Color)11);
      o->selection_color((Fl_Color)3);
      o->labelsize(11);
      o->callback((Fl_Callback*)cb_Ok1);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(190, 250, 65, 25, gettext("Cancel"));
      o->box(FL_PLASTIC_THIN_UP_BOX);
      o->color((Fl_Color)11);
      o->selection_color((Fl_Color)3);
      o->labelsize(11);
      o->callback((Fl_Callback*)cb_Cancel1);
    } // Fl_Button* o
    { PosDis = new Fl_Box(175, 55, 155, 25);
      PosDis->box(FL_THIN_DOWN_BOX);
      PosDis->color((Fl_Color)44);
      PosDis->selection_color(FL_DARK1);
      PosDis->labelcolor(FL_BACKGROUND2_COLOR);
      PosDis->align(Fl_Align(FL_ALIGN_RIGHT|FL_ALIGN_INSIDE));
    } // Fl_Box* PosDis
    { SlPos = new Fl_Counter(15, 55, 155, 25, gettext("Position"));
      SlPos->box(FL_NO_BOX);
      SlPos->color((Fl_Color)44);
      SlPos->selection_color(FL_DARK1);
      SlPos->labelsize(11);
      SlPos->labelcolor(FL_BACKGROUND2_COLOR);
      SlPos->minimum(0);
      SlPos->maximum(1);
      SlPos->step(1);
      SlPos->textcolor(FL_BACKGROUND2_COLOR);
      SlPos->callback((Fl_Callback*)cb_SlPos);
      SlPos->align(Fl_Align(FL_ALIGN_TOP));
    } // Fl_Counter* SlPos
    { NotaDis = new Fl_Box(175, 100, 155, 25);
      NotaDis->box(FL_THIN_DOWN_BOX);
      NotaDis->color((Fl_Color)44);
      NotaDis->selection_color(FL_DARK1);
      NotaDis->labelcolor(FL_BACKGROUND2_COLOR);
      NotaDis->align(Fl_Align(FL_ALIGN_RIGHT|FL_ALIGN_INSIDE));
    } // Fl_Box* NotaDis
    { SlNote = new Fl_Counter(15, 100, 155, 25, gettext("Note"));
      SlNote->box(FL_NO_BOX);
      SlNote->color((Fl_Color)44);
      SlNote->selection_color(FL_DARK1);
      SlNote->labelsize(11);
      SlNote->labelcolor(FL_BACKGROUND2_COLOR);
      SlNote->minimum(0);
      SlNote->maximum(127);
      SlNote->step(1);
      SlNote->textcolor(FL_BACKGROUND2_COLOR);
      SlNote->callback((Fl_Callback*)cb_SlNote);
      SlNote->align(Fl_Align(FL_ALIGN_TOP));
    } // Fl_Counter* SlNote
    { SlVal1 = new Fl_Counter(15, 160, 155, 25, gettext("Velocity"));
      SlVal1->box(FL_NO_BOX);
      SlVal1->color((Fl_Color)44);
      SlVal1->selection_color(FL_DARK1);
      SlVal1->labelsize(11);
      SlVal1->labelcolor(FL_BACKGROUND2_COLOR);
      SlVal1->minimum(0);
      SlVal1->maximum(127);
      SlVal1->step(1);
      SlVal1->textcolor(FL_BACKGROUND2_COLOR);
      SlVal1->callback((Fl_Callback*)cb_SlVal1);
      SlVal1->align(Fl_Align(FL_ALIGN_TOP));
    } // Fl_Counter* SlVal1
    { SlVal2 = new Fl_Counter(15, 210, 155, 25, gettext("Length"));
      SlVal2->box(FL_NO_BOX);
      SlVal2->color(FL_BACKGROUND2_COLOR);
      SlVal2->selection_color(FL_DARK1);
      SlVal2->labelsize(11);
      SlVal2->labelcolor(FL_BACKGROUND2_COLOR);
      SlVal2->minimum(0);
      SlVal2->maximum(1);
      SlVal2->step(1);
      SlVal2->textcolor(FL_BACKGROUND2_COLOR);
      SlVal2->callback((Fl_Callback*)cb_SlVal2);
      SlVal2->align(Fl_Align(FL_ALIGN_TOP));
    } // Fl_Counter* SlVal2
    { DInfoq = new Fl_Box(15, 10, 315, 25);
      DInfoq->box(FL_THIN_DOWN_BOX);
      DInfoq->color((Fl_Color)44);
      DInfoq->selection_color(FL_DARK1);
      DInfoq->labelcolor(FL_BACKGROUND2_COLOR);
      DInfoq->align(Fl_Align(FL_ALIGN_CENTER|FL_ALIGN_INSIDE));
    } // Fl_Box* DInfoq
    { SlVelo = new Fl_Counter(175, 160, 155, 25, gettext("% Velocity"));
      SlVelo->box(FL_NO_BOX);
      SlVelo->color(FL_BACKGROUND2_COLOR);
      SlVelo->selection_color(FL_DARK1);
      SlVelo->labelsize(11);
      SlVelo->labelcolor(FL_BACKGROUND2_COLOR);
      SlVelo->minimum(-50);
      SlVelo->maximum(50);
      SlVelo->step(1);
      SlVelo->textcolor(FL_BACKGROUND2_COLOR);
      SlVelo->callback((Fl_Callback*)cb_SlVelo);
      SlVelo->align(Fl_Align(FL_ALIGN_TOP));
    } // Fl_Counter* SlVelo
    { presvelo = new Fl_Check_Button(0, 135, 70, 15, gettext("Preserve"));
      presvelo->down_box(FL_DOWN_BOX);
      presvelo->color((Fl_Color)44);
      presvelo->selection_color((Fl_Color)3);
      presvelo->labelsize(11);
      presvelo->labelcolor((Fl_Color)1);
    } // Fl_Check_Button* presvelo
    { preslength = new Fl_Check_Button(0, 190, 70, 15, gettext("Preserve"));
      preslength->down_box(FL_DOWN_BOX);
      preslength->color((Fl_Color)44);
      preslength->selection_color((Fl_Color)3);
      preslength->labelsize(11);
      preslength->labelcolor((Fl_Color)1);
    } // Fl_Check_Button* preslength
    { SlLength = new Fl_Counter(175, 210, 155, 25, gettext("% Length"));
      SlLength->box(FL_NO_BOX);
      SlLength->color((Fl_Color)44);
      SlLength->selection_color(FL_DARK1);
      SlLength->labelsize(11);
      SlLength->labelcolor(FL_BACKGROUND2_COLOR);
      SlLength->minimum(-50);
      SlLength->maximum(50);
      SlLength->step(1);
      SlLength->textcolor(FL_BACKGROUND2_COLOR);
      SlLength->callback((Fl_Callback*)cb_SlLength);
      SlLength->align(Fl_Align(FL_ALIGN_TOP));
    } // Fl_Counter* SlLength
    Eventwin->end();
  } // Fl_Double_Window* Eventwin
  presvelo->down_box(FL_NO_BOX);
  presvelo->selection_color((Fl_Color)3);
  presvelo->clear_visible_focus();
  
  preslength->down_box(FL_NO_BOX);
  preslength->selection_color((Fl_Color)3);
  preslength->clear_visible_focus();
  return Eventwin;
}

void rmgmedit::editaevento(int evento) {
  int x,y;
  
  char tmp[64],tmp1[64];
  
  Eventwin->hide();
  
  static const char *pepe [] ={"stygmorgan"};
  
  int argc=1;
  char **argv= (char **) pepe;
  
  
  rmgmo->selevent=evento;
  rmgmo->selcanal=rmgmo->pcp[rmgmo->PEG[rmgmo->Variacion][evento].canal];
  rmgmo->seltipo=rmgmo->PEG[rmgmo->Variacion][evento].tipo;
  
  
  
  
  SlPos->show();
  SlPos->maximum(rmgmo->longi -1);
  SlPos->lstep(100);
  SlPos->value((int)rmgmo->PEG[rmgmo->Variacion][evento].tick);
  SlPos->do_callback();
  
  if (sAllE->value())
  
    {
      SlPos->hide(); 
      presvelo->show();
      preslength->show();
      SlVelo->show();
      SlLength->show();
    }
   else 
    {
      SlPos->show();
      presvelo->hide();
      preslength->hide();
      SlVelo->hide();
      SlLength->hide();
      
    } 
  
  SlNote->minimum(0);
  SlNote->maximum(127);
  SlNote->lstep(10);
  SlNote->value((int)rmgmo->PEG[rmgmo->Variacion][evento].nota);
  SlNote->do_callback();
  
  SlVal1->label("Velocity");
  SlVal1->lstep(10);
  SlVal2->lstep(100);
  
  SlVelo->label("% Velocity");
  SlVelo->value(0);
  SlVelo->lstep(10);
  
  
  SlLength->value(0);
  SlLength->lstep(10);
  
  
  switch(rmgmo->seltipo)
  {
           case 2:
           SlNote->label("Note");
           SlVal1->show();
           SlVal2->show();
           SlVal1->value((int)rmgmo->PEG[rmgmo->Variacion][evento].velocity);
           SlVal2->value((int)rmgmo->PEG[rmgmo->Variacion][evento].length);
           SlVal2->maximum(rmgmo->longi - rmgmo->PEG[rmgmo->Variacion][evento].tick);
           
           break;
           case 3:
           SlNote->label("Control");
           SlVal1->show();
           SlVal2->hide();
           SlVelo->label("% Value");
           SlVal1->label("Value");
           SlVal1->value((int)rmgmo->PEG[rmgmo->Variacion][evento].velocity);
           preslength->hide();
           SlLength->hide();
           break;
           case 4:
           SlNote->label("Program");
           SlVal1->hide();
           SlVal2->hide();
           presvelo->hide();
           preslength->hide();
           SlVelo->hide();
           SlLength->hide();     
           break;
           case 5:
           SlNote->minimum(-4096);
           SlNote->maximum(4096);
           SlNote->label("PitchBend");
           SlVal1->hide();
           SlVal2->hide();
           presvelo->hide();
           preslength->hide();
           SlVelo->hide();
           SlLength->hide();     
  
  
  
           }         
  
  
  bzero(tmp,sizeof(tmp));
  sprintf(tmp,"Event - %d",evento);
  
  bzero(tmp1,sizeof(tmp1));
  sprintf(tmp1,"Ticks per quarter : %d",rmgmo->nStyle.ppq);
  DInfoq->copy_label(tmp1);
  
  Fl::get_mouse(x,y);
  Eventwin->position(x,y);
  Eventwin->label(tmp);
  Eventwin->show(argc,argv);
}

void rmgmedit::GuardaPrefs() {
  Fl_Preferences stygmorgan (Fl_Preferences::USER, WEBSITE , PACKAGE);
  
  stygmorgan.set("rmgmeditwinX",rmgmeditwin->x());
  stygmorgan.set("rmgmeditwinY",rmgmeditwin->y());
  stygmorgan.set("rmgmeditwinW",rmgmeditwin->w());
  stygmorgan.set("rmgmeditwinH",rmgmeditwin->h());
  stygmorgan.set("SpeakerOnOff",(int)Hear->value());
}
