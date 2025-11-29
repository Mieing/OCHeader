@class BaseRequest, NSString;

@interface CheckFansMsgReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *biz;
@property (retain, nonatomic) NSString *openid;

+ (void)initialize;

@end
