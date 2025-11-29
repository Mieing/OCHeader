@class BaseRequest;

@interface DelAvatarReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int avatarId;

+ (void)initialize;

@end
