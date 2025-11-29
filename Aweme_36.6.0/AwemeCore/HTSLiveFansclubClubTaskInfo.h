@class HTSLiveGrowthTask, HTSLiveFansclubClubTaskInfo_GiftInfo, HTSLiveClubTaskUserInfo;

@interface HTSLiveFansclubClubTaskInfo : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveFansclubClubTaskInfo_GiftInfo *startGift;
@property (nonatomic) BOOL hasStartGift;
@property (retain, nonatomic) HTSLiveFansclubClubTaskInfo_GiftInfo *cheerGift;
@property (nonatomic) BOOL hasCheerGift;
@property (retain, nonatomic) HTSLiveClubTaskUserInfo *sponsor;
@property (nonatomic) BOOL hasSponsor;
@property (nonatomic) int stage;
@property (retain, nonatomic) HTSLiveGrowthTask *task;
@property (nonatomic) BOOL hasTask;
@property (nonatomic) long long remainIntimacy;

+ (id)descriptor;

@end
