@class LuckyBoxBonus_ConsumedGift, NSString;

@interface LuckyBoxBonus : IESLivePBBaseMessage

@property (retain, nonatomic) LuckyBoxBonus_ConsumedGift *consumedGift;
@property (nonatomic) BOOL hasConsumedGift;
@property (nonatomic) int openType;
@property (copy, nonatomic) NSString *boxIdStr;

+ (id)descriptor;

@end
