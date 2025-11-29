@class NSString, HTSLiveImage;

@interface HTSLiveEffectChestCard_User : IESLivePBBaseMessage

@property (nonatomic) long long userId;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) HTSLiveImage *avatarThumb;
@property (nonatomic) BOOL hasAvatarThumb;
@property (copy, nonatomic) NSString *userOpenId;

+ (id)descriptor;

@end
