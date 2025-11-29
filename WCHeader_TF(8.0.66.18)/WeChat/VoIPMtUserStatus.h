@class VoIPMtUserInfo;

@interface VoIPMtUserStatus : WXPBGeneratedMessage

@property (retain, nonatomic) VoIPMtUserInfo *userInfo;
@property (nonatomic) unsigned int status;

+ (void)initialize;

@end
