@class BaseRequest, NSString;

@interface ShareTransIdRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *openid;

+ (void)initialize;

@end
