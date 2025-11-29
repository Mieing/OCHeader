@interface BDReaderMonitor : NSObject

+ (void)trackService:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
+ (id /* block */)bdreader_chapter_content_load_duration:(id)a0 chapterId:(id)a1 bookFmt:(unsigned long long)a2;
+ (void)bdreader_chapter_content_load_status:(int)a0 bookId:(id)a1 chapterId:(id)a2 bookFmt:(unsigned long long)a3;
+ (id /* block */)bdreader_book_file_parser_duration:(id)a0 bookFmt:(unsigned long long)a1;
+ (void)bdreader_book_file_parser_status:(int)a0 bookId:(id)a1 bookFmt:(unsigned long long)a2;
+ (id /* block */)bdreader_layout_engine_duration:(unsigned long long)a0 textLength:(unsigned long long)a1;
+ (id /* block */)bdreader_text_page_draw_duration:(unsigned long long)a0 textCount:(long long)a1 rowCount:(long long)a2;
+ (id /* block */)bdreader_chapter_content_layout_duration:(id)a0 chapterId:(id)a1 bookFmt:(unsigned long long)a2 composerType:(unsigned long long)a3 layoutEngine:(unsigned long long)a4 pageMode:(unsigned long long)a5;
+ (id /* block */)bdreader_chapter_content_parser_duration:(id)a0 chapterId:(id)a1 bookFmt:(unsigned long long)a2 composerType:(unsigned long long)a3 layoutEngine:(unsigned long long)a4;
+ (id /* block */)bdreader_chapter_content_pager_duration:(id)a0 chapterId:(id)a1 bookFmt:(unsigned long long)a2 composerType:(unsigned long long)a3 layoutEngine:(unsigned long long)a4;
+ (void)enterScence:(id)a0 sceneType:(unsigned long long)a1;
+ (void)leaveScence:(id)a0 sceneType:(unsigned long long)a1;
+ (void)reportReaderPerformance:(id)a0 category:(id)a1 extra:(id)a2;
+ (void)bdreader_curl_pager_cache_exception:(id)a0 pageContext:(id)a1 cacheCount:(int)a2;
+ (id /* block */)bdreader_text_page_render_duration:(id)a0 pageContext:(id)a1 bookFmt:(unsigned long long)a2 composerType:(unsigned long long)a3 layoutEngine:(unsigned long long)a4;
+ (void)bdreader_first_page_layout_duration:(id)a0 chapterId:(id)a1 bookFmt:(unsigned long long)a2 composerType:(unsigned long long)a3 duration:(double)a4 busiDuration:(double)a5 pageMode:(unsigned long long)a6;
+ (void)bdreader_page_change_fluency:(BOOL)a0 pageMode:(unsigned long long)a1;
+ (void)bdreader_chapter_change_fluency:(BOOL)a0;
+ (void)bdreader_layout_config_change_fluency:(BOOL)a0;
+ (void)bdreader_pagemode_change_fluency:(BOOL)a0;
+ (void)bdreader_theme_config_change_fluency:(BOOL)a0;
+ (void)bdreader_catalog_view_open_fluency:(BOOL)a0;
+ (void)bdreader_catalog_view_close_fluency:(BOOL)a0;
+ (void)bdreader_tool_view_open_fluency:(BOOL)a0;
+ (void)bdreader_tool_view_close_fluency:(BOOL)a0;
+ (void)bdreader_setting_view_open_fluency:(BOOL)a0;
+ (void)bdreader_setting_view_close_fluency:(BOOL)a0;
+ (void)reportReaderPerformanceForScroll:(id)a0 readerModel:(id)a1 isLastNormal:(BOOL)a2 isNextNormal:(BOOL)a3;
+ (void)reportReaderCurlCapture:(id)a0 metric:(id)a1 category:(id)a2;
+ (void)bdreader_stay_duration:(double)a0 bookFmt:(unsigned long long)a1;
+ (id /* block */)bdreader_first_enter_duration:(id)a0 bookFmt:(unsigned long long)a1;
+ (void)bdreader_sdk_launch:(id)a0 bookFmt:(unsigned long long)a1;
+ (void)bdreader_curl_pager_crash_exception:(id)a0 pageContext:(id)a1 dict:(id)a2;
+ (id /* block */)bdreader_book_info_load_duration:(id)a0 bookFmt:(unsigned long long)a1;
+ (void)bdreader_book_info_load_status:(int)a0 bookId:(id)a1 bookFmt:(unsigned long long)a2;
+ (void)bdreader_error_reason_exception:(unsigned long long)a0 bookFmt:(unsigned long long)a1;
+ (void)reportReaderPerformance:(id)a0 readerModel:(id)a1;
+ (void)bdreader_white_screen_check:(id)a0 detectView:(id)a1 pageCtx:(id)a2 configStr:(id)a3 rate:(float)a4 bookFmt:(unsigned long long)a5 composerType:(unsigned long long)a6;

@end
