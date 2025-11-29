@class NSString, NSMutableDictionary;

@interface AnnieX.SLJSBErrorEventInfo : NSObject {
    void /* unknown type, empty encoding */ __rts_error_message;
    void /* unknown type, empty encoding */ __rts_error_ts;
    void /* unknown type, empty encoding */ __rts_bridge_name;
    void /* unknown type, empty encoding */ __rts_error_code;
    void /* function */ root_cause;
    void /* function */ jsb_params;
}

@property (nonatomic, copy) NSString *error_message;
@property (nonatomic) long long error_ts;
@property (nonatomic, copy) NSString *bridge_name;
@property (nonatomic) long long error_code;
@property (nonatomic, copy) NSString *root_cause;
@property (nonatomic, retain) NSMutableDictionary *extra;
@property (nonatomic, copy) NSString *jsb_params;

- (void).cxx_destruct;
- (id)init;

@end
