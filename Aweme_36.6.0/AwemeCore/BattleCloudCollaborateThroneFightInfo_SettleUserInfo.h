@class NSString, HTSLiveImage;

@interface BattleCloudCollaborateThroneFightInfo_SettleUserInfo : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *avatar;
@property (nonatomic) BOOL hasAvatar;
@property (retain, nonatomic) HTSLiveImage *crownIcon;
@property (nonatomic) BOOL hasCrownIcon;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *userId;

+ (id)descriptor;

@end
