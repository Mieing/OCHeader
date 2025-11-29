@class NSString;

@interface AnnieX.SLLynxJSExceptionParams : NSObject {
    void /* unknown type, empty encoding */ __rts_errorMsg;
    void /* unknown type, empty encoding */ __rts_errorCode;
}

@property (nonatomic, copy) NSString *errorMsg;
@property (nonatomic) long long errorCode;

- (id)init:(id)a0 :(long long)a1;
- (void).cxx_destruct;
- (id)init;

@end
