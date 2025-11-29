@class NSString;

@interface AnnieX.SLMonitorJSBParams : NSObject {
    void /* unknown type, empty encoding */ __rts_method;
    void /* unknown type, empty encoding */ __rts_protocolVersion;
    void /* unknown type, empty encoding */ __rts_input;
    void /* unknown type, empty encoding */ __rts_output;
    void /* unknown type, empty encoding */ __rts_duration;
    void /* unknown type, empty encoding */ __rts_timestamp;
    void /* unknown type, empty encoding */ __rts_code;
    void /* unknown type, empty encoding */ __rts_msg;
    void /* unknown type, empty encoding */ __rts_jsbCallSuccess;
}

@property (nonatomic, copy) NSString *method;
@property (nonatomic) long long protocolVersion;
@property (nonatomic, copy) id input;
@property (nonatomic, copy) id output;
@property (nonatomic) long long duration;
@property (nonatomic) long long timestamp;
@property (nonatomic) long long code;
@property (nonatomic, copy) NSString *msg;
@property (nonatomic) BOOL jsbCallSuccess;

- (void).cxx_destruct;
- (id)init;

@end
