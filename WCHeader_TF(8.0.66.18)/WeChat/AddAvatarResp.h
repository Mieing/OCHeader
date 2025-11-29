@class OauthAvatarInfo, BaseResponse;

@interface AddAvatarResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) OauthAvatarInfo *avatarInfo;

+ (void)initialize;

@end
