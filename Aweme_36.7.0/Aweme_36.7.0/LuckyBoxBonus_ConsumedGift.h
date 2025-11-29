@class NSString;

@interface LuckyBoxBonus_ConsumedGift : IESLivePBBaseMessage

@property (nonatomic) long long id_p;
@property (nonatomic) long long diamondCount;
@property (copy, nonatomic) NSString *icon;
@property (nonatomic) long long count;
@property (copy, nonatomic) NSString *name;

+ (id)descriptor;

@end
