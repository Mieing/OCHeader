@interface BDReaderReporter : NSObject

+ (void)readerEvent:(id)a0 params:(id)a1;
+ (void)report_enter_bookmark:(id)a0 num:(unsigned long long)a1 bookType:(id)a2;
+ (void)report_click_reader:(id)a0 content:(id)a1 result:(id)a2 bookType:(id)a3;
+ (void)report_click_reader:(id)a0 content:(id)a1 bookType:(id)a2;
+ (void)report_click_reader_config:(id)a0 content:(id)a1 select_mode:(long long)a2;
+ (void)report_font_config:(id)a0;
+ (void)report_line_space_config:(id)a0 bookType:(id)a1 bookId:(id)a2;
+ (void)report_click_reader_more_config:(id)a0 result:(id)a1;
+ (void)report_upload_parse_status:(id)a0 filename:(id)a1 format:(id)a2 error_type:(id)a3;
+ (void)report_click_menu_hierarchy:(id)a0 num:(int)a1 clicked_content:(int)a2 type:(id)a3 book_type:(id)a4;
+ (void)report_show_menu_hierarchy:(id)a0 num:(int)a1 book_type:(id)a2;
+ (void)report_show_reader_config:(id)a0 page:(id)a1;
+ (void)report_click_reader:(id)a0 clicked_content:(id)a1 result:(id)a2 page:(id)a3;
+ (void)report_click_reader_catalog:(id)a0 clicked_content:(id)a1 result:(id)a2 page:(id)a3 pre_group_id:(id)a4 after_group_id:(id)a5;
+ (void)report_auto_turn_result:(id)a0 speed:(unsigned long long)a1 stay_time:(unsigned long long)a2;

@end
