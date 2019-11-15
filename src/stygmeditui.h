// generated by Fast Light User Interface Designer (fluid) version 1.0304

#ifndef stygmeditui_h
#define stygmeditui_h
#include <FL/Fl.H>
#include "stygmorgan.h"
#include <Fl/Fl_Preferences.H>
#include <FL/Fl_Browser.H>
void type_cb(Fl_Widget* o,void* v);
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Browser.H>
#include <FL/Fl_Group.H>
#include <FL/Fl_Check_Button.H>
#include <FL/Fl_Menu_Bar.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Choice.H>
#include <FL/Fl_Counter.H>

class rmgmedit {
public:
  rmgmedit(RMGMO *rmgmo_);
private:
  RMGMO *rmgmo; 
public:
  Fl_Double_Window* make_window();
  Fl_Double_Window *rmgmeditwin;
private:
  inline void cb_rmgmeditwin_i(Fl_Double_Window*, void*);
  static void cb_rmgmeditwin(Fl_Double_Window*, void*);
public:
  Fl_Browser *EditBro;
private:
  inline void cb_EditBro_i(Fl_Browser*, void*);
  static void cb_EditBro(Fl_Browser*, void*);
public:
  Fl_Check_Button *sNote;
private:
  inline void cb_sNote_i(Fl_Check_Button*, void*);
  static void cb_sNote(Fl_Check_Button*, void*);
public:
  Fl_Check_Button *sControl;
private:
  inline void cb_sControl_i(Fl_Check_Button*, void*);
  static void cb_sControl(Fl_Check_Button*, void*);
public:
  Fl_Check_Button *sProgram;
private:
  inline void cb_sProgram_i(Fl_Check_Button*, void*);
  static void cb_sProgram(Fl_Check_Button*, void*);
public:
  Fl_Check_Button *sPitchBend;
private:
  inline void cb_sPitchBend_i(Fl_Check_Button*, void*);
  static void cb_sPitchBend(Fl_Check_Button*, void*);
  inline void cb__i(Fl_Menu_Bar*, void*);
  static void cb_(Fl_Menu_Bar*, void*);
  static unsigned char menu__i18n_done;
  static Fl_Menu_Item menu_[];
public:
  static Fl_Menu_Item *sFunctions;
  static Fl_Menu_Item *MenuXGGM;
private:
  inline void cb_MenuXGGM_i(Fl_Menu_*, void*);
  static void cb_MenuXGGM(Fl_Menu_*, void*);
public:
  static Fl_Menu_Item *MenuD1Db1;
private:
  inline void cb_MenuD1Db1_i(Fl_Menu_*, void*);
  static void cb_MenuD1Db1(Fl_Menu_*, void*);
public:
  static Fl_Menu_Item *MenuHighQ;
private:
  inline void cb_MenuHighQ_i(Fl_Menu_*, void*);
  static void cb_MenuHighQ(Fl_Menu_*, void*);
public:
  static Fl_Menu_Item *MenuG0;
private:
  inline void cb_MenuG0_i(Fl_Menu_*, void*);
  static void cb_MenuG0(Fl_Menu_*, void*);
public:
  static Fl_Menu_Item *MenuMetronome;
private:
  inline void cb_MenuMetronome_i(Fl_Menu_*, void*);
  static void cb_MenuMetronome(Fl_Menu_*, void*);
public:
  static Fl_Menu_Item *MenuF0Gb0;
private:
  inline void cb_MenuF0Gb0_i(Fl_Menu_*, void*);
  static void cb_MenuF0Gb0(Fl_Menu_*, void*);
public:
  static Fl_Menu_Item *MenuD0;
private:
  inline void cb_MenuD0_i(Fl_Menu_*, void*);
  static void cb_MenuD0(Fl_Menu_*, void*);
public:
  static Fl_Menu_Item *MenuVelocityUp;
private:
  inline void cb_MenuVelocityUp_i(Fl_Menu_*, void*);
  static void cb_MenuVelocityUp(Fl_Menu_*, void*);
public:
  static Fl_Menu_Item *MenuVelocityDown;
private:
  inline void cb_MenuVelocityDown_i(Fl_Menu_*, void*);
  static void cb_MenuVelocityDown(Fl_Menu_*, void*);
public:
  static Fl_Menu_Item *MenuVelocityUp50;
private:
  inline void cb_MenuVelocityUp50_i(Fl_Menu_*, void*);
  static void cb_MenuVelocityUp50(Fl_Menu_*, void*);
public:
  static Fl_Menu_Item *MenuVelocityDown50;
private:
  inline void cb_MenuVelocityDown50_i(Fl_Menu_*, void*);
  static void cb_MenuVelocityDown50(Fl_Menu_*, void*);
  inline void cb_Help_i(Fl_Menu_*, void*);
  static void cb_Help(Fl_Menu_*, void*);
  inline void cb_About_i(Fl_Menu_*, void*);
  static void cb_About(Fl_Menu_*, void*);
public:
  Fl_Button *Hear;
private:
  inline void cb_Hear_i(Fl_Button*, void*);
  static void cb_Hear(Fl_Button*, void*);
public:
  Fl_Choice *SelCh;
  Fl_Box *DNomCh;
  Fl_Box *Disi;
  Fl_Check_Button *sAllE;
private:
  inline void cb_Edit_i(Fl_Button*, void*);
  static void cb_Edit(Fl_Button*, void*);
  inline void cb_Delete_i(Fl_Button*, void*);
  static void cb_Delete(Fl_Button*, void*);
public:
  Fl_Check_Button *IsNote;
private:
  inline void cb_IsNote_i(Fl_Check_Button*, void*);
  static void cb_IsNote(Fl_Check_Button*, void*);
public:
  Fl_Check_Button *IsControl;
private:
  inline void cb_IsControl_i(Fl_Check_Button*, void*);
  static void cb_IsControl(Fl_Check_Button*, void*);
public:
  Fl_Check_Button *IsProgram;
private:
  inline void cb_IsProgram_i(Fl_Check_Button*, void*);
  static void cb_IsProgram(Fl_Check_Button*, void*);
public:
  Fl_Check_Button *IsPitchBend;
private:
  inline void cb_IsPitchBend_i(Fl_Check_Button*, void*);
  static void cb_IsPitchBend(Fl_Check_Button*, void*);
  inline void cb_Insert_i(Fl_Button*, void*);
  static void cb_Insert(Fl_Button*, void*);
public:
  Fl_Counter *SChMidi;
private:
  inline void cb_SChMidi_i(Fl_Counter*, void*);
  static void cb_SChMidi(Fl_Counter*, void*);
  inline void cb_Ok_i(Fl_Button*, void*);
  static void cb_Ok(Fl_Button*, void*);
  inline void cb_Cancel_i(Fl_Button*, void*);
  static void cb_Cancel(Fl_Button*, void*);
public:
  Fl_Box *BaseChord;
  Fl_Box *LabelBaseChord;
  void ReadPattern();
  void type_cb_i(Fl_Widget* o,void* v);
  Fl_Double_Window* make_eventwindow();
  Fl_Double_Window *Eventwin;
private:
  inline void cb_Eventwin_i(Fl_Double_Window*, void*);
  static void cb_Eventwin(Fl_Double_Window*, void*);
  inline void cb_Ok1_i(Fl_Button*, void*);
  static void cb_Ok1(Fl_Button*, void*);
  inline void cb_Cancel1_i(Fl_Button*, void*);
  static void cb_Cancel1(Fl_Button*, void*);
public:
  Fl_Box *PosDis;
  Fl_Counter *SlPos;
private:
  inline void cb_SlPos_i(Fl_Counter*, void*);
  static void cb_SlPos(Fl_Counter*, void*);
public:
  Fl_Box *NotaDis;
  Fl_Counter *SlNote;
private:
  inline void cb_SlNote_i(Fl_Counter*, void*);
  static void cb_SlNote(Fl_Counter*, void*);
public:
  Fl_Counter *SlVal1;
private:
  inline void cb_SlVal1_i(Fl_Counter*, void*);
  static void cb_SlVal1(Fl_Counter*, void*);
public:
  Fl_Counter *SlVal2;
private:
  inline void cb_SlVal2_i(Fl_Counter*, void*);
  static void cb_SlVal2(Fl_Counter*, void*);
public:
  Fl_Box *DInfoq;
  Fl_Counter *SlVelo;
private:
  inline void cb_SlVelo_i(Fl_Counter*, void*);
  static void cb_SlVelo(Fl_Counter*, void*);
public:
  Fl_Check_Button *presvelo;
  Fl_Check_Button *preslength;
  Fl_Counter *SlLength;
private:
  inline void cb_SlLength_i(Fl_Counter*, void*);
  static void cb_SlLength(Fl_Counter*, void*);
public:
  void editaevento(int evento);
  void GuardaPrefs();
};
#endif
