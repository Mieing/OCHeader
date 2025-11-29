@interface AFDFeedListPreloadRequestLimitModel : NSObject <NSCoding>

@property (nonatomic) double firstRequestTimeInterval;
@property (nonatomic) long long requestTimes;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
