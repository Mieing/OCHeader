@class NSString;

@interface AnnieX.SLFetchErrorEventInfo : NSObject {
    void /* unknown type, empty encoding */ __rts_method;
    void /* unknown type, empty encoding */ __rts_url;
    void /* unknown type, empty encoding */ __rts_status_code;
    void /* unknown type, empty encoding */ __rts_request_error_code;
    void /* unknown type, empty encoding */ __rts_request_error_msg;
    void /* function */ log_id;
    void /* unknown type, empty encoding */ __rts_error_ts;
    void /* function */ root_cause;
}

@property (nonatomic, copy) NSString *method;
@property (nonatomic, copy) NSString *url;
@property (nonatomic) long long status_code;
@property (nonatomic) long long request_error_code;
@property (nonatomic, copy) NSString *request_error_msg;
@property (nonatomic, copy) NSString *log_id;
@property (nonatomic) long long error_ts;
@property (nonatomic, copy) NSString *root_cause;

- (void).cxx_destruct;
- (id)init;

@end
