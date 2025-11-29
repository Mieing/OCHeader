@class BaseRequest, NSString, NSMutableArray;

@interface OauthAuthorizeConfirmReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *oauthUrl;
@property (nonatomic) unsigned int opt;
@property (retain, nonatomic) NSMutableArray *scope;
@property (nonatomic) unsigned int avatarId;
@property (retain, nonatomic) NSString *referer;

+ (void)initialize;

@end
