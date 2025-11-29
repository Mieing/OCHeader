@class NSString;

@interface AnnieX.SLContainerErrorEventInfo : NSObject {
    void /* unknown type, empty encoding */ __rts_container_error_code;
    void /* unknown type, empty encoding */ __rts_container_error_msg;
}

@property (nonatomic) long long container_error_code;
@property (nonatomic, copy) NSString *container_error_msg;

- (void).cxx_destruct;
- (id)init;

@end
