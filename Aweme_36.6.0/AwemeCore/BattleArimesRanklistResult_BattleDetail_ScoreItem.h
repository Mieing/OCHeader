@class NSString;

@interface BattleArimesRanklistResult_BattleDetail_ScoreItem : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *labelText;
@property (copy, nonatomic) NSString *detailText;

+ (id)descriptor;

@end
