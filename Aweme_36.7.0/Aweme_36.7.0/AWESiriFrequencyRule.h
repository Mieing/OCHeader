@interface AWESiriFrequencyRule : NSObject

@property (nonatomic) long long frequencyLimit;
@property (nonatomic) long long currentCount;

+ (id)ruleForFrequencyLimit:(long long)a0;

- (BOOL)shouldDonate;

@end
