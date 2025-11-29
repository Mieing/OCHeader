@class NSString, NSMutableDictionary;

@interface AnnieX.SLJSExceptionEventInfo : NSObject {
    void /* unknown type, empty encoding */ native_info;
    void /* unknown type, empty encoding */ js_info;
    void /* unknown type, empty encoding */ __rts_error_ts;
    void /* function */ root_cause;
}

@property (nonatomic) long long error_ts;
@property (nonatomic, copy) NSString *root_cause;
@property (nonatomic, retain) NSMutableDictionary *context;

- (void).cxx_destruct;
- (id)init;

@end
