@class FansclubMeResult_CheckInNodeGuidance, FansclubMeResult_FansClubCheckInDetail;

@interface FansclubMeResult_ClubCheckInTask : IESLivePBBaseMessage

@property (retain, nonatomic) FansclubMeResult_CheckInNodeGuidance *guidance;
@property (nonatomic) BOOL hasGuidance;
@property (retain, nonatomic) FansclubMeResult_FansClubCheckInDetail *checkInDetail;
@property (nonatomic) BOOL hasCheckInDetail;
@property (nonatomic) int checkInMode;

+ (id)descriptor;

@end
