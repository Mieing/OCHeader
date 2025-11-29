@class BaseRequest, NSData, NSString;

@interface ConsumeWecoinRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSData *ctxBuff;
@property (retain, nonatomic) NSData *sign;
@property (retain, nonatomic) NSString *reportSessionId;

+ (void)initialize;

@end
