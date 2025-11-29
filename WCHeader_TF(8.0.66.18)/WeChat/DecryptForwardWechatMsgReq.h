@class BaseRequest, NSData;

@interface DecryptForwardWechatMsgReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSData *msgPackBuff;

+ (void)initialize;

@end
