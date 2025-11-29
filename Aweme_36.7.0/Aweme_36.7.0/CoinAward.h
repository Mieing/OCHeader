@class NSString;

@interface CoinAward : IESLivePBBaseMessage

@property (nonatomic) int amount;
@property (copy, nonatomic) NSString *unit;
@property (copy, nonatomic) NSString *icon;

+ (id)descriptor;

@end
