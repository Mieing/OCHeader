@class NSString, NSMutableArray, NSMutableDictionary;

@interface AnnieX.SLResInfo : NSObject {
    void /* unknown type, empty encoding */ __rts_res_src;
    void /* unknown type, empty encoding */ res_version;
    void /* unknown type, empty encoding */ __rts_res_id;
    void /* function */ res_type;
    void /* unknown type, empty encoding */ res_size;
    void /* unknown type, empty encoding */ __rts_res_from;
    void /* unknown type, empty encoding */ __rts_res_scene;
    void /* unknown type, empty encoding */ __rts_res_state;
    void /* function */ res_trace_id;
    void /* unknown type, empty encoding */ enable_request_reuse;
    void /* unknown type, empty encoding */ is_memory;
    void /* unknown type, empty encoding */ is_preloaded;
    void /* unknown type, empty encoding */ is_request_reuse;
    void /* unknown type, empty encoding */ is_cdn_cache_negotiation;
    void /* unknown type, empty encoding */ is_stream_loaded;
    void /* unknown type, empty encoding */ is_post_processed;
    void /* function */ gecko_channel;
    void /* function */ gecko_bundle;
    void /* function */ gecko_access_key;
    void /* unknown type, empty encoding */ gecko_sync_update;
    void /* function */ gecko_config_from;
    void /* unknown type, empty encoding */ cdn_cache_enable;
    void /* function */ cdn_request_method;
    void /* function */ cdn_response_header_logid;
    void /* function */ cdn_response_header_trace_host;
    void /* function */ cdn_response_header_trace_id;
    void /* function */ cdn_dispatch_action;
    void /* function */ cdn_dispatch_target_host;
    void /* function */ post_processor;
}

@property (nonatomic, copy) NSString *res_src;
@property (nonatomic, copy) NSString *res_id;
@property (nonatomic, copy) NSString *res_type;
@property (nonatomic, copy) NSString *res_from;
@property (nonatomic, copy) NSString *res_scene;
@property (nonatomic, copy) NSString *res_state;
@property (nonatomic, copy) NSString *res_trace_id;
@property (nonatomic, retain) NSMutableArray *fetch_list;
@property (nonatomic, copy) NSString *gecko_channel;
@property (nonatomic, copy) NSString *gecko_bundle;
@property (nonatomic, copy) NSString *gecko_access_key;
@property (nonatomic, copy) NSString *gecko_config_from;
@property (nonatomic, copy) NSString *cdn_request_method;
@property (nonatomic, copy) NSString *cdn_response_header_logid;
@property (nonatomic, copy) NSString *cdn_response_header_trace_host;
@property (nonatomic, copy) NSString *cdn_response_header_trace_id;
@property (nonatomic, copy) NSString *cdn_dispatch_action;
@property (nonatomic, copy) NSString *cdn_dispatch_target_host;
@property (nonatomic, copy) NSString *post_processor;
@property (nonatomic, retain) NSMutableDictionary *extra;

- (void).cxx_destruct;
- (id)init;

@end
