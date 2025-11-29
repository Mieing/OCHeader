@interface BattleAuxiliaryConfig : IESLivePBBaseMessage

@property (nonatomic) long long operateType;
@property (nonatomic) long long giftId;
@property (nonatomic) int suffixNumberMode;
@property (nonatomic) long long fixedNumber;
@property (nonatomic) long long index;

+ (id)descriptor;

@end
