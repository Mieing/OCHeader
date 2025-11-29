@class NSString, HTSLiveImage;

@interface BattleCloudCollaborateThroneFightInfo_UserInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *roomId;
@property (retain, nonatomic) HTSLiveImage *avatar;
@property (nonatomic) BOOL hasAvatar;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *score;
@property (retain, nonatomic) HTSLiveImage *crownIcon;
@property (nonatomic) BOOL hasCrownIcon;
@property (copy, nonatomic) NSString *successTimesDesc;

+ (id)descriptor;

@end
