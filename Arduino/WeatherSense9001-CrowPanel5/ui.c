// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 8.3.11
// Project name: WeatheratorCrow

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////


// SCREEN: ui_MainScreen
void ui_MainScreen_screen_init(void);
void ui_event_MainScreen(lv_event_t * e);
lv_obj_t * ui_MainScreen;
lv_obj_t * ui_Panel1;
lv_obj_t * ui_Temp1;
lv_obj_t * ui_Hum1;
lv_obj_t * ui_Batt1;
lv_obj_t * ui_Upd1;
lv_obj_t * ui_Wifi1;
lv_obj_t * ui_Desc1;
lv_obj_t * ui_Status1;
lv_obj_t * ui_Panel2;
lv_obj_t * ui_Temp2;
lv_obj_t * ui_Hum2;
lv_obj_t * ui_Batt2;
lv_obj_t * ui_Upd2;
lv_obj_t * ui_Wifi2;
lv_obj_t * ui_Desc2;
lv_obj_t * ui_Panel3;
lv_obj_t * ui_Temp3;
lv_obj_t * ui_Hum3;
lv_obj_t * ui_Batt3;
lv_obj_t * ui_Upd3;
lv_obj_t * ui_Wifi3;
lv_obj_t * ui_Desc3;
lv_obj_t * ui_TSStatus;


// SCREEN: ui_PressureScreen
void ui_PressureScreen_screen_init(void);
void ui_event_PressureScreen(lv_event_t * e);
lv_obj_t * ui_PressureScreen;
lv_obj_t * ui_PressureChart;
lv_obj_t * ui_Pres1;
lv_obj_t * ui_TickLabel6hr;
lv_obj_t * ui_TickLabel12hr;
lv_obj_t * ui_TickLabel18hr;
lv_obj_t * ui_TickLabelNow;
lv_obj_t * ui_TickLabel3hr;
lv_obj_t * ui_TickLabel9hr3;
lv_obj_t * ui_TickLabel15hr;
lv_obj_t * ui____initial_actions0;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_MainScreen(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(&ui_PressureScreen, LV_SCR_LOAD_ANIM_MOVE_TOP, 500, 0, &ui_PressureScreen_screen_init);
        _ui_screen_delete(&ui_MainScreen);
    }
}
void ui_event_PressureScreen(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(&ui_MainScreen, LV_SCR_LOAD_ANIM_MOVE_BOTTOM, 500, 0, &ui_MainScreen_screen_init);
        _ui_screen_delete(&ui_PressureScreen);
    }
}

///////////////////// SCREENS ////////////////////

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_MainScreen_screen_init();
    ui_PressureScreen_screen_init();
    ui____initial_actions0 = lv_obj_create(NULL);
    lv_disp_load_scr(ui_MainScreen);
}
