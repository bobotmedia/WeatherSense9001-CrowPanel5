// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 8.3.11
// Project name: WeatheratorCrow

#include "ui.h"

void ui_MainScreen_screen_init(void)
{
    ui_MainScreen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_MainScreen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_img_src(ui_MainScreen, &ui_img_bluehexbg_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel1 = lv_obj_create(ui_MainScreen);
    lv_obj_set_width(ui_Panel1, 234);
    lv_obj_set_height(ui_Panel1, 427);
    lv_obj_set_x(ui_Panel1, 0);
    lv_obj_set_y(ui_Panel1, 15);
    lv_obj_set_align(ui_Panel1, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Panel1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_img_src(ui_Panel1, &ui_img_bluehexbg_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Temp1 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_Temp1, 198);
    lv_obj_set_height(ui_Temp1, 104);
    lv_obj_set_x(ui_Temp1, -1);
    lv_obj_set_y(ui_Temp1, -138);
    lv_obj_set_align(ui_Temp1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Temp1, "100.0°");
    lv_obj_set_style_text_color(ui_Temp1, lv_color_hex(0xBDBEBD), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Temp1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Temp1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Temp1, &ui_font_MontserratMedium60, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Temp1, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Temp1, lv_color_hex(0x540592), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Temp1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Temp1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Temp1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Temp1, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Temp1, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Temp1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Temp1, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Temp1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Hum1 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_Hum1, 198);
    lv_obj_set_height(ui_Hum1, 104);
    lv_obj_set_x(ui_Hum1, -1);
    lv_obj_set_y(ui_Hum1, -27);
    lv_obj_set_align(ui_Hum1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Hum1, "100%");
    lv_obj_set_style_text_color(ui_Hum1, lv_color_hex(0xBDBEBD), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Hum1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Hum1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Hum1, &ui_font_MontserratMedium60, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Hum1, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Hum1, lv_color_hex(0x1F3FC2), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Hum1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Hum1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Hum1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Hum1, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Hum1, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Hum1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Hum1, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Hum1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Batt1 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_Batt1, 198);
    lv_obj_set_height(ui_Batt1, 54);
    lv_obj_set_x(ui_Batt1, -1);
    lv_obj_set_y(ui_Batt1, 59);
    lv_obj_set_align(ui_Batt1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Batt1, "3.5v");
    lv_obj_set_style_text_color(ui_Batt1, lv_color_hex(0xBDBEBD), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Batt1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Batt1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Batt1, &lv_font_montserrat_28, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Batt1, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Batt1, lv_color_hex(0xC52A92), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Batt1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Batt1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Batt1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Batt1, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Batt1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Batt1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Batt1, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Batt1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Upd1 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_Upd1, 198);
    lv_obj_set_height(ui_Upd1, 54);
    lv_obj_set_x(ui_Upd1, -1);
    lv_obj_set_y(ui_Upd1, 120);
    lv_obj_set_align(ui_Upd1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Upd1, "23:48  12/25");
    lv_obj_set_style_text_color(ui_Upd1, lv_color_hex(0xBDBEBD), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Upd1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Upd1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Upd1, &lv_font_montserrat_28, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Upd1, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Upd1, lv_color_hex(0x0A5345), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Upd1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Upd1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Upd1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Upd1, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Upd1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Upd1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Upd1, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Upd1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Wifi1 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_Wifi1, 198);
    lv_obj_set_height(ui_Wifi1, 54);
    lv_obj_set_x(ui_Wifi1, -1);
    lv_obj_set_y(ui_Wifi1, 181);
    lv_obj_set_align(ui_Wifi1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Wifi1, "-43.5db");
    lv_obj_set_style_text_color(ui_Wifi1, lv_color_hex(0xBDBEBD), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Wifi1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Wifi1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Wifi1, &lv_font_montserrat_28, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Wifi1, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Wifi1, lv_color_hex(0x2B1D1D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Wifi1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Wifi1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Wifi1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Wifi1, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Wifi1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Wifi1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Wifi1, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Wifi1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Desc1 = lv_label_create(ui_MainScreen);
    lv_obj_set_width(ui_Desc1, 160);
    lv_obj_set_height(ui_Desc1, 33);
    lv_obj_set_x(ui_Desc1, -1);
    lv_obj_set_y(ui_Desc1, -224);
    lv_obj_set_align(ui_Desc1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Desc1, "Desc1");
    lv_obj_set_style_text_color(ui_Desc1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Desc1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Desc1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Desc1, &lv_font_montserrat_28, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Desc1, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Desc1, lv_color_hex(0x7C7C7C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Desc1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Desc1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Desc1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Desc1, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Desc1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Desc1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Desc1, -1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Desc1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Status1 = lv_label_create(ui_MainScreen);
    lv_obj_set_width(ui_Status1, 600);
    lv_obj_set_height(ui_Status1, 34);
    lv_obj_set_x(ui_Status1, -1);
    lv_obj_set_y(ui_Status1, 223);
    lv_obj_set_align(ui_Status1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Status1, "Status");
    lv_obj_set_style_text_color(ui_Status1, lv_color_hex(0x25302A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Status1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Status1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Status1, &lv_font_montserrat_28, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Status1, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Status1, lv_color_hex(0x0A8421), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Status1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Status1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Status1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Status1, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Status1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Status1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Status1, -2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Status1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel2 = lv_obj_create(ui_MainScreen);
    lv_obj_set_width(ui_Panel2, 234);
    lv_obj_set_height(ui_Panel2, 427);
    lv_obj_set_x(ui_Panel2, -255);
    lv_obj_set_y(ui_Panel2, 15);
    lv_obj_set_align(ui_Panel2, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Panel2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_img_src(ui_Panel2, &ui_img_bluehexbg_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Temp2 = lv_label_create(ui_Panel2);
    lv_obj_set_width(ui_Temp2, 198);
    lv_obj_set_height(ui_Temp2, 104);
    lv_obj_set_x(ui_Temp2, -1);
    lv_obj_set_y(ui_Temp2, -138);
    lv_obj_set_align(ui_Temp2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Temp2, "100.0°");
    lv_obj_set_style_text_color(ui_Temp2, lv_color_hex(0xBDBEBD), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Temp2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Temp2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Temp2, &ui_font_MontserratMedium60, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Temp2, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Temp2, lv_color_hex(0x540592), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Temp2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Temp2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Temp2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Temp2, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Temp2, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Temp2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Temp2, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Temp2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Hum2 = lv_label_create(ui_Panel2);
    lv_obj_set_width(ui_Hum2, 198);
    lv_obj_set_height(ui_Hum2, 104);
    lv_obj_set_x(ui_Hum2, -1);
    lv_obj_set_y(ui_Hum2, -27);
    lv_obj_set_align(ui_Hum2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Hum2, "100%");
    lv_obj_set_style_text_color(ui_Hum2, lv_color_hex(0xBDBEBD), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Hum2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Hum2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Hum2, &ui_font_MontserratMedium60, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Hum2, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Hum2, lv_color_hex(0x1F3FC2), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Hum2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Hum2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Hum2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Hum2, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Hum2, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Hum2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Hum2, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Hum2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Batt2 = lv_label_create(ui_Panel2);
    lv_obj_set_width(ui_Batt2, 198);
    lv_obj_set_height(ui_Batt2, 54);
    lv_obj_set_x(ui_Batt2, -1);
    lv_obj_set_y(ui_Batt2, 59);
    lv_obj_set_align(ui_Batt2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Batt2, "3.5v");
    lv_obj_set_style_text_color(ui_Batt2, lv_color_hex(0xBDBEBD), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Batt2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Batt2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Batt2, &lv_font_montserrat_28, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Batt2, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Batt2, lv_color_hex(0xC52A92), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Batt2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Batt2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Batt2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Batt2, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Batt2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Batt2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Batt2, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Batt2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Upd2 = lv_label_create(ui_Panel2);
    lv_obj_set_width(ui_Upd2, 198);
    lv_obj_set_height(ui_Upd2, 54);
    lv_obj_set_x(ui_Upd2, -1);
    lv_obj_set_y(ui_Upd2, 120);
    lv_obj_set_align(ui_Upd2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Upd2, "23:48  12/25");
    lv_obj_set_style_text_color(ui_Upd2, lv_color_hex(0xBDBEBD), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Upd2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Upd2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Upd2, &lv_font_montserrat_28, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Upd2, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Upd2, lv_color_hex(0x0A5345), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Upd2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Upd2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Upd2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Upd2, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Upd2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Upd2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Upd2, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Upd2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Wifi2 = lv_label_create(ui_Panel2);
    lv_obj_set_width(ui_Wifi2, 198);
    lv_obj_set_height(ui_Wifi2, 54);
    lv_obj_set_x(ui_Wifi2, -1);
    lv_obj_set_y(ui_Wifi2, 181);
    lv_obj_set_align(ui_Wifi2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Wifi2, "-43.5db");
    lv_obj_set_style_text_color(ui_Wifi2, lv_color_hex(0xBDBEBD), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Wifi2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Wifi2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Wifi2, &lv_font_montserrat_28, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Wifi2, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Wifi2, lv_color_hex(0x2B1D1D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Wifi2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Wifi2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Wifi2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Wifi2, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Wifi2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Wifi2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Wifi2, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Wifi2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Desc2 = lv_label_create(ui_MainScreen);
    lv_obj_set_width(ui_Desc2, 160);
    lv_obj_set_height(ui_Desc2, 33);
    lv_obj_set_x(ui_Desc2, -255);
    lv_obj_set_y(ui_Desc2, -224);
    lv_obj_set_align(ui_Desc2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Desc2, "Desc2");
    lv_obj_set_style_text_color(ui_Desc2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Desc2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Desc2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Desc2, &lv_font_montserrat_28, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Desc2, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Desc2, lv_color_hex(0x7C7C7C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Desc2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Desc2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Desc2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Desc2, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Desc2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Desc2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Desc2, -1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Desc2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel3 = lv_obj_create(ui_MainScreen);
    lv_obj_set_width(ui_Panel3, 234);
    lv_obj_set_height(ui_Panel3, 427);
    lv_obj_set_x(ui_Panel3, 255);
    lv_obj_set_y(ui_Panel3, 15);
    lv_obj_set_align(ui_Panel3, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Panel3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_img_src(ui_Panel3, &ui_img_bluehexbg_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Temp3 = lv_label_create(ui_Panel3);
    lv_obj_set_width(ui_Temp3, 198);
    lv_obj_set_height(ui_Temp3, 104);
    lv_obj_set_x(ui_Temp3, -1);
    lv_obj_set_y(ui_Temp3, -138);
    lv_obj_set_align(ui_Temp3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Temp3, "100.0°");
    lv_obj_set_style_text_color(ui_Temp3, lv_color_hex(0xBDBEBD), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Temp3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Temp3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Temp3, &ui_font_MontserratMedium60, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Temp3, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Temp3, lv_color_hex(0x540592), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Temp3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Temp3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Temp3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Temp3, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Temp3, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Temp3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Temp3, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Temp3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Hum3 = lv_label_create(ui_Panel3);
    lv_obj_set_width(ui_Hum3, 198);
    lv_obj_set_height(ui_Hum3, 104);
    lv_obj_set_x(ui_Hum3, -1);
    lv_obj_set_y(ui_Hum3, -27);
    lv_obj_set_align(ui_Hum3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Hum3, "100%");
    lv_obj_set_style_text_color(ui_Hum3, lv_color_hex(0xBDBEBD), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Hum3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Hum3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Hum3, &ui_font_MontserratMedium60, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Hum3, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Hum3, lv_color_hex(0x1F3FC2), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Hum3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Hum3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Hum3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Hum3, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Hum3, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Hum3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Hum3, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Hum3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Batt3 = lv_label_create(ui_Panel3);
    lv_obj_set_width(ui_Batt3, 198);
    lv_obj_set_height(ui_Batt3, 54);
    lv_obj_set_x(ui_Batt3, -1);
    lv_obj_set_y(ui_Batt3, 59);
    lv_obj_set_align(ui_Batt3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Batt3, "3.5v");
    lv_obj_set_style_text_color(ui_Batt3, lv_color_hex(0xBDBEBD), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Batt3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Batt3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Batt3, &lv_font_montserrat_28, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Batt3, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Batt3, lv_color_hex(0xC52A92), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Batt3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Batt3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Batt3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Batt3, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Batt3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Batt3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Batt3, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Batt3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Upd3 = lv_label_create(ui_Panel3);
    lv_obj_set_width(ui_Upd3, 198);
    lv_obj_set_height(ui_Upd3, 54);
    lv_obj_set_x(ui_Upd3, -1);
    lv_obj_set_y(ui_Upd3, 120);
    lv_obj_set_align(ui_Upd3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Upd3, "23:48  12/25");
    lv_obj_set_style_text_color(ui_Upd3, lv_color_hex(0xBDBEBD), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Upd3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Upd3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Upd3, &lv_font_montserrat_28, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Upd3, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Upd3, lv_color_hex(0x0A5345), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Upd3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Upd3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Upd3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Upd3, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Upd3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Upd3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Upd3, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Upd3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Wifi3 = lv_label_create(ui_Panel3);
    lv_obj_set_width(ui_Wifi3, 198);
    lv_obj_set_height(ui_Wifi3, 54);
    lv_obj_set_x(ui_Wifi3, -1);
    lv_obj_set_y(ui_Wifi3, 181);
    lv_obj_set_align(ui_Wifi3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Wifi3, "-43.5db");
    lv_obj_set_style_text_color(ui_Wifi3, lv_color_hex(0xBDBEBD), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Wifi3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Wifi3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Wifi3, &lv_font_montserrat_28, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Wifi3, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Wifi3, lv_color_hex(0x2B1D1D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Wifi3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Wifi3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Wifi3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Wifi3, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Wifi3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Wifi3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Wifi3, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Wifi3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Desc3 = lv_label_create(ui_MainScreen);
    lv_obj_set_width(ui_Desc3, 160);
    lv_obj_set_height(ui_Desc3, 33);
    lv_obj_set_x(ui_Desc3, 255);
    lv_obj_set_y(ui_Desc3, -224);
    lv_obj_set_align(ui_Desc3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Desc3, "Desc3\n");
    lv_obj_set_style_text_color(ui_Desc3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Desc3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Desc3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Desc3, &lv_font_montserrat_28, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Desc3, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Desc3, lv_color_hex(0x7C7C7C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Desc3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Desc3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Desc3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Desc3, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Desc3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Desc3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Desc3, -1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Desc3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TSStatus = lv_label_create(ui_MainScreen);
    lv_obj_set_width(ui_TSStatus, 50);
    lv_obj_set_height(ui_TSStatus, 34);
    lv_obj_set_x(ui_TSStatus, 349);
    lv_obj_set_y(ui_TSStatus, 223);
    lv_obj_set_align(ui_TSStatus, LV_ALIGN_CENTER);
    lv_label_set_text(ui_TSStatus, "TS");
    lv_obj_set_style_text_color(ui_TSStatus, lv_color_hex(0x25302A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TSStatus, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_TSStatus, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_TSStatus, &lv_font_montserrat_28, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_TSStatus, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_TSStatus, lv_color_hex(0x0A8421), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_TSStatus, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_TSStatus, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_TSStatus, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_TSStatus, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_TSStatus, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_TSStatus, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_TSStatus, -2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_TSStatus, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_MainScreen, ui_event_MainScreen, LV_EVENT_ALL, NULL);

}
