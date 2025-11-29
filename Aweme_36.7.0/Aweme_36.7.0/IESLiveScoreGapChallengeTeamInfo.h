@class NSString;

@interface IESLiveScoreGapChallengeTeamInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *teamIdStr;
@property (nonatomic) long long score;
@property (copy, nonatomic) NSString *ownerId;

+ (id)descriptor;

@end
