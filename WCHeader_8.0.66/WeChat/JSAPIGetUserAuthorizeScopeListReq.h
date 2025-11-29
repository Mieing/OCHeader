@class BaseRequest;

@interface JSAPIGetUserAuthorizeScopeListReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int lastUpdateTime;
@property (nonatomic) unsigned int bizItemCount;

+ (void)initialize;

@end
