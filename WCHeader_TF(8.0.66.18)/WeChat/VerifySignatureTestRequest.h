@class BaseRequest, NSData;

@interface VerifySignatureTestRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSData *signData;
@property (retain, nonatomic) NSData *sign;

+ (void)initialize;

@end
