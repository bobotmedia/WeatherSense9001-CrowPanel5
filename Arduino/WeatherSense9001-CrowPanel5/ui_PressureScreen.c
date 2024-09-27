// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 8.3.11
// Project name: WeatheratorCrow

#include "ui.h"

lv_chart_series_t * ui_PressureChart_series_1 = NULL;

void ui_PressureScreen_screen_init(void)
{
    ui_PressureScreen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_PressureScreen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_PressureScreen, lv_color_hex(0x17084F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_PressureScreen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PressureChart = lv_chart_create(ui_PressureScreen);
    lv_obj_set_width(ui_PressureChart, 600);
    lv_obj_set_height(ui_PressureChart, 400);
    lv_obj_set_align(ui_PressureChart, LV_ALIGN_CENTER);
    lv_chart_set_type(ui_PressureChart, LV_CHART_TYPE_LINE);
    lv_chart_set_point_count(ui_PressureChart, 37);
    lv_chart_set_range(ui_PressureChart, LV_CHART_AXIS_PRIMARY_Y, 2900, 3050);
    lv_chart_set_range(ui_PressureChart, LV_CHART_AXIS_SECONDARY_Y, 2900, 3050);
    lv_chart_set_div_line_count(ui_PressureChart, 31, 19);
    lv_chart_set_axis_tick(ui_PressureChart, LV_CHART_AXIS_PRIMARY_X, 16, 8, 19, 2, false, 50);
    lv_chart_set_axis_tick(ui_PressureChart, LV_CHART_AXIS_PRIMARY_Y, 13, 8, 16, 2, true, 100);
    lv_chart_set_axis_tick(ui_PressureChart, LV_CHART_AXIS_SECONDARY_Y, 13, 5, 16, 2, true, 50);
    ui_PressureChart_series_1 = lv_chart_add_series(ui_PressureChart, lv_color_hex(0xF10B2E),
                                                                        LV_CHART_AXIS_PRIMARY_Y);
    static lv_coord_t ui_PressureChart_series_1_array[37] = { 0 };
    lv_chart_set_ext_y_array(ui_PressureChart, ui_PressureChart_series_1, ui_PressureChart_series_1_array);



    lv_obj_set_style_line_color(ui_PressureChart, lv_color_hex(0x4040FF), LV_PART_TICKS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui_PressureChart, 255, LV_PART_TICKS | LV_STATE_DEFAULT);

    ui_Pres1 = lv_label_create(ui_PressureScreen);
    lv_obj_set_width(ui_Pres1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Pres1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Pres1, 0);
    lv_obj_set_y(ui_Pres1, -221);
    lv_obj_set_align(ui_Pres1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Pres1, "Pressure");
    lv_obj_set_style_text_color(ui_Pres1, lv_color_hex(0xFE6B6F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Pres1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Pres1, &lv_font_montserrat_28, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TickLabel6hr = lv_label_create(ui_PressureScreen);
    lv_obj_set_width(ui_TickLabel6hr, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TickLabel6hr, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TickLabel6hr, 96);
    lv_obj_set_y(ui_TickLabel6hr, 225);
    lv_obj_set_align(ui_TickLabel6hr, LV_ALIGN_CENTER);
    lv_label_set_text(ui_TickLabel6hr, "-6 hr");
    lv_obj_set_style_text_color(ui_TickLabel6hr, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TickLabel6hr, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TickLabel12hr = lv_label_create(ui_PressureScreen);
    lv_obj_set_width(ui_TickLabel12hr, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TickLabel12hr, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TickLabel12hr, -96);
    lv_obj_set_y(ui_TickLabel12hr, 225);
    lv_obj_set_align(ui_TickLabel12hr, LV_ALIGN_CENTER);
    lv_label_set_text(ui_TickLabel12hr, "-12 hr");
    lv_obj_set_style_text_color(ui_TickLabel12hr, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TickLabel12hr, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TickLabel18hr = lv_label_create(ui_PressureScreen);
    lv_obj_set_width(ui_TickLabel18hr, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TickLabel18hr, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TickLabel18hr, -288);
    lv_obj_set_y(ui_TickLabel18hr, 225);
    lv_obj_set_align(ui_TickLabel18hr, LV_ALIGN_CENTER);
    lv_label_set_text(ui_TickLabel18hr, "-18 hr");
    lv_obj_set_style_text_color(ui_TickLabel18hr, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TickLabel18hr, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TickLabelNow = lv_label_create(ui_PressureScreen);
    lv_obj_set_width(ui_TickLabelNow, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TickLabelNow, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TickLabelNow, 288);
    lv_obj_set_y(ui_TickLabelNow, 225);
    lv_obj_set_align(ui_TickLabelNow, LV_ALIGN_CENTER);
    lv_label_set_text(ui_TickLabelNow, "now");
    lv_obj_set_style_text_color(ui_TickLabelNow, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TickLabelNow, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TickLabel3hr = lv_label_create(ui_PressureScreen);
    lv_obj_set_width(ui_TickLabel3hr, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TickLabel3hr, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TickLabel3hr, 192);
    lv_obj_set_y(ui_TickLabel3hr, 225);
    lv_obj_set_align(ui_TickLabel3hr, LV_ALIGN_CENTER);
    lv_label_set_text(ui_TickLabel3hr, "-3 hr");
    lv_obj_set_style_text_color(ui_TickLabel3hr, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TickLabel3hr, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TickLabel9hr3 = lv_label_create(ui_PressureScreen);
    lv_obj_set_width(ui_TickLabel9hr3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TickLabel9hr3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TickLabel9hr3, 1);
    lv_obj_set_y(ui_TickLabel9hr3, 225);
    lv_obj_set_align(ui_TickLabel9hr3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_TickLabel9hr3, "-9 hr");
    lv_obj_set_style_text_color(ui_TickLabel9hr3, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TickLabel9hr3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TickLabel15hr = lv_label_create(ui_PressureScreen);
    lv_obj_set_width(ui_TickLabel15hr, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TickLabel15hr, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TickLabel15hr, -192);
    lv_obj_set_y(ui_TickLabel15hr, 225);
    lv_obj_set_align(ui_TickLabel15hr, LV_ALIGN_CENTER);
    lv_label_set_text(ui_TickLabel15hr, "-15 hr");
    lv_obj_set_style_text_color(ui_TickLabel15hr, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TickLabel15hr, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_PressureScreen, ui_event_PressureScreen, LV_EVENT_ALL, NULL);

}
