@class BaseRequest, NSString, SKBuiltinBuffer_t;

@interface AppleIdAuthReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *userId;
@property (retain, nonatomic) NSString *identityToken;
@property (retain, nonatomic) SKBuiltinBuffer_t *randomEncryKey;

+ (void)initialize;

@end
