@class EquipState, MoneyCount;

@interface StickerBattleInfo : IESLivePBBaseMessage

@property (retain, nonatomic) EquipState *equipState;
@property (nonatomic) BOOL hasEquipState;
@property (retain, nonatomic) MoneyCount *moneyCount;
@property (nonatomic) BOOL hasMoneyCount;
@property (nonatomic) int camp;
@property (nonatomic) int heroConfigId;

+ (id)descriptor;

@end
