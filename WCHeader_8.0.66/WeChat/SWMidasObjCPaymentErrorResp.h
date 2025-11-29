@class NSString, NSError;

@interface SWMidasObjCPaymentErrorResp : NSObject {
    void /* unknown type, empty encoding */ innerCode;
    void /* unknown type, empty encoding */ innerMsg;
    void /* unknown type, empty encoding */ innerError;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ errCode;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ step;
@property (nonatomic, readonly) NSString *innerCode;
@property (nonatomic, readonly) NSString *innerMsg;
@property (nonatomic, readonly) NSError *innerError;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;

@end
