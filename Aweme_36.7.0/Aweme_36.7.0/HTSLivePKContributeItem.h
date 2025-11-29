@class BattleArmy_RankUser;

@interface HTSLivePKContributeItem : IESLiveDynamicModel

@property (nonatomic) long long index;
@property (retain, nonatomic) BattleArmy_RankUser *contributor;

- (BOOL)isEqual:(id)a0;

@end
