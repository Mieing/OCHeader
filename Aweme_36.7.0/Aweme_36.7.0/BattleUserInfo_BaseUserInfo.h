@class NSString, HTSLiveImage;

@interface BattleUserInfo_BaseUserInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *nickName;
@property (retain, nonatomic) HTSLiveImage *avatarThumb;
@property (nonatomic) BOOL hasAvatarThumb;
@property (nonatomic) int gender;
@property (copy, nonatomic) NSString *userIdStr;
@property (copy, nonatomic) NSString *userOpenIdStr;

+ (id)descriptor;

@end
