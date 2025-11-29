@class NSString, HTSLiveImage, HTSLiveUser_AuthenticationInfo;

@interface HTSLiveComment_User : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *id_p;
@property (nonatomic) long long shortId;
@property (copy, nonatomic) NSString *nickname;
@property (retain, nonatomic) HTSLiveImage *avatarThumb;
@property (nonatomic) BOOL hasAvatarThumb;
@property (retain, nonatomic) HTSLiveUser_AuthenticationInfo *authenticationInfo;
@property (nonatomic) BOOL hasAuthenticationInfo;

+ (id)descriptor;

@end
