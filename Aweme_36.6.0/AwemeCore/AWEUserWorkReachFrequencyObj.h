@interface AWEUserWorkReachFrequencyObj : NSObject

@property (nonatomic) BOOL ignore;
@property (nonatomic) long long count;
@property (nonatomic) long long selectedCount;
@property (nonatomic) double firstShowTimeInterval;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
