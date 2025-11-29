@class BattleMode_StealTowerData;

@interface BattleMode : IESLivePBBaseMessage

@property (nonatomic) int mode;
@property (retain, nonatomic) BattleMode_StealTowerData *stealTowerData;
@property (nonatomic) BOOL hasStealTowerData;

+ (id)descriptor;

@end
