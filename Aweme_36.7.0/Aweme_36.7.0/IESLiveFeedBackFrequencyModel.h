@interface IESLiveFeedBackFrequencyModel : NSObject <NSCoding>

@property (nonatomic) long long ignoreCountThreshold;
@property (nonatomic) long long forbidShowDays;
@property (nonatomic) long long noOperationCount;
@property (nonatomic) double expireTimeInterval;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
