@interface IESLiveServerTimestamp : NSObject

@property (nonatomic) double serverStartTimestamp;
@property (nonatomic) double localStartTimestamp;

+ (double)currentCpuTime;

- (id)initWithServerTimestamp:(double)a0;
- (double)currentTimestamp;

@end
