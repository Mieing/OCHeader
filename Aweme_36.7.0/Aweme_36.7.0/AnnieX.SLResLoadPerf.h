@interface AnnieX.SLResLoadPerf : NSObject {
    void /* unknown type, empty encoding */ __rts_res_load_start;
    void /* unknown type, empty encoding */ __rts_res_load_finish;
    void /* unknown type, empty encoding */ res_load_internal_start;
    void /* unknown type, empty encoding */ res_load_internal_finish;
    void /* unknown type, empty encoding */ res_callback_switch_thread_start;
    void /* unknown type, empty encoding */ res_callback_switch_thread_finish;
    void /* unknown type, empty encoding */ res_callback_execute_start;
    void /* unknown type, empty encoding */ res_callback_execute_finish;
    void /* unknown type, empty encoding */ init_start;
    void /* unknown type, empty encoding */ init_finish;
    void /* unknown type, empty encoding */ memory_start;
    void /* unknown type, empty encoding */ memory_finish;
    void /* unknown type, empty encoding */ gecko_total_start;
    void /* unknown type, empty encoding */ gecko_total_finish;
    void /* unknown type, empty encoding */ gecko_start;
    void /* unknown type, empty encoding */ gecko_finish;
    void /* unknown type, empty encoding */ gecko_update_start;
    void /* unknown type, empty encoding */ gecko_update_finish;
    void /* unknown type, empty encoding */ cdn_total_start;
    void /* unknown type, empty encoding */ cdn_total_finish;
    void /* unknown type, empty encoding */ cdn_cache_start;
    void /* unknown type, empty encoding */ cdn_cache_finish;
    void /* unknown type, empty encoding */ cdn_start;
    void /* unknown type, empty encoding */ cdn_finish;
    void /* unknown type, empty encoding */ cdn_detail_proxy;
    void /* unknown type, empty encoding */ cdn_detail_dns;
    void /* unknown type, empty encoding */ cdn_detail_tcp;
    void /* unknown type, empty encoding */ cdn_detail_ssl;
    void /* unknown type, empty encoding */ cdn_detail_send;
    void /* unknown type, empty encoding */ cdn_detail_ttfb;
    void /* unknown type, empty encoding */ cdn_switch_thread_start;
    void /* unknown type, empty encoding */ cdn_switch_thread_finish;
    void /* unknown type, empty encoding */ builtin_start;
    void /* unknown type, empty encoding */ builtin_finish;
    void /* unknown type, empty encoding */ post_process_start;
    void /* unknown type, empty encoding */ post_process_finish;
}

@property (nonatomic) long long res_load_start;
@property (nonatomic) long long res_load_finish;

- (id)init;

@end
