@class BaseRequest, NSString;

@interface GetMsgSessionInfoReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *fromUsername;
@property (retain, nonatomic) NSString *toUsername;
@property (retain, nonatomic) NSString *msgSessionId;

+ (void)initialize;

@end
