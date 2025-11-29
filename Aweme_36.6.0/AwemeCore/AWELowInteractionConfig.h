@interface AWELowInteractionConfig : NSObject

@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (nonatomic) double idleDuration;
@property (nonatomic) long long maxScreenOffCount;

- (id)initWithConfig:(id)a0;

@end
