@interface FansclubMeResult_CheckInNodeGuidance_ClubTaskCheckInData : IESLivePBBaseMessage

@property (nonatomic) long long finishUserCount;
@property (nonatomic) long long maxFinishUserCount;
@property (nonatomic) long long finishUserCntLastday;

+ (id)descriptor;

@end
