@class BaseRequest, NSString;

@interface OauthAuthorizeReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *oauthUrl;
@property (retain, nonatomic) NSString *bizUsername;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int autoOauth;
@property (nonatomic) unsigned int subscene;
@property (retain, nonatomic) NSString *referer;

+ (void)initialize;

@end
