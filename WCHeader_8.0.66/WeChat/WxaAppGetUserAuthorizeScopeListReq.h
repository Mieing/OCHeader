@class BaseRequest;

@interface WxaAppGetUserAuthorizeScopeListReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int lastUpdateTime;
@property (nonatomic) unsigned int wxaItemCount;

+ (void)initialize;

@end
