@class FinderLiveLotteryClaimMethod, FinderLiveMilestoneLotteryInfo_ClaimInfo, BaseResponse;

@interface FinderLiveLotteryFillClaimInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderLiveLotteryClaimMethod *afterStatus;
@property (retain, nonatomic) FinderLiveMilestoneLotteryInfo_ClaimInfo *milestoneAfterStatus;

+ (void)initialize;

@end
