@class NSString;

@interface AnnieX.SLEndToEndEventInfo : NSObject {
    void /* unknown type, empty encoding */ __rts_stage;
    void /* unknown type, empty encoding */ __rts_status;
    void /* unknown type, empty encoding */ __rts_duration;
    void /* unknown type, empty encoding */ error_code;
    void /* function */ error_msg;
}

@property (nonatomic, copy) NSString *stage;
@property (nonatomic, copy) NSString *status;
@property (nonatomic) long long duration;
@property (nonatomic, copy) NSString *error_msg;

- (void).cxx_destruct;
- (id)init;

@end
