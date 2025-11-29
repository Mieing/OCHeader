@class BaseRequest, NSString;

@interface ReadFansMsgReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *biz;
@property (retain, nonatomic) NSString *openid;

+ (void)initialize;

@end
