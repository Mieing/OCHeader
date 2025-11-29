@interface BDALogHelper : NSObject

+ (void)alog_set_detail_callback:(void /* function */ *)a0;
+ (void /* function */ *)alog_get_log_detail_callback;
+ (void)alog_add_global_log_detail_callback:(void /* function */ *)a0;
+ (void)alog_set_oslog_detail_callback:(void /* function */ *)a0;
+ (void /* function */ *)alog_get_oslog_detail_callback;
+ (BOOL)alog_get_is_console_output;

@end
