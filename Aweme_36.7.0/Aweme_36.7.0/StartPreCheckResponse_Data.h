@class NSString, ChallengeRankResp;

@interface StartPreCheckResponse_Data : IESLivePBBaseMessage

@property (nonatomic) BOOL pass;
@property (copy, nonatomic) NSString *notPassReason;
@property (retain, nonatomic) ChallengeRankResp *challengeRankResp;
@property (nonatomic) BOOL hasChallengeRankResp;

+ (id)descriptor;

@end
