@class NSString;

@interface AnnieX.SLNativeErrorEventInfo : NSObject {
    void /* unknown type, empty encoding */ __rts_error_code;
    void /* unknown type, empty encoding */ __rts_error_msg;
    void /* unknown type, empty encoding */ __rts_scene;
    void /* function */ root_cause;
}

@property (nonatomic) long long error_code;
@property (nonatomic, copy) NSString *error_msg;
@property (nonatomic, copy) NSString *scene;
@property (nonatomic, copy) NSString *root_cause;

- (void).cxx_destruct;
- (id)init;

@end
