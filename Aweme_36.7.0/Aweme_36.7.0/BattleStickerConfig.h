@interface BattleStickerConfig : IESLivePBBaseMessage

@property (nonatomic) int liveInfoInterval;
@property (nonatomic) int gameEquipInterval;
@property (nonatomic) int gameMoneyInterval;

+ (id)descriptor;

@end
