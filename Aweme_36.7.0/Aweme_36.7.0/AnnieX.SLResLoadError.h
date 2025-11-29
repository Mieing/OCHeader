@class NSString;

@interface AnnieX.SLResLoadError : NSObject {
    void /* unknown type, empty encoding */ res_loader_error_code;
    void /* unknown type, empty encoding */ __rts_res_error_msg;
    void /* unknown type, empty encoding */ net_library_error_code;
    void /* unknown type, empty encoding */ http_status_code;
    void /* unknown type, empty encoding */ gecko_library_read_error_code;
    void /* function */ gecko_library_read_error_msg;
    void /* unknown type, empty encoding */ gecko_library_update_error_code;
    void /* function */ gecko_library_update_error_msg;
    void /* unknown type, empty encoding */ gecko_error_code;
    void /* function */ gecko_error_msg;
    void /* function */ gecko_config_error_msg;
    void /* function */ cdn_cache_error_msg;
    void /* function */ cdn_error_msg;
    void /* function */ builtin_error_msg;
    void /* function */ post_process_error_msg;
}

@property (nonatomic, copy) NSString *res_error_msg;
@property (nonatomic, copy) NSString *gecko_library_read_error_msg;
@property (nonatomic, copy) NSString *gecko_library_update_error_msg;
@property (nonatomic, copy) NSString *gecko_error_msg;
@property (nonatomic, copy) NSString *gecko_config_error_msg;
@property (nonatomic, copy) NSString *cdn_cache_error_msg;
@property (nonatomic, copy) NSString *cdn_error_msg;
@property (nonatomic, copy) NSString *builtin_error_msg;
@property (nonatomic, copy) NSString *post_process_error_msg;

- (void).cxx_destruct;
- (id)init;

@end
