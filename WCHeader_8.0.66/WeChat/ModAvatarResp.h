@class OauthAvatarInfo, BaseResponse;

@interface ModAvatarResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) OauthAvatarInfo *avatarInfo;

+ (void)initialize;

@end
