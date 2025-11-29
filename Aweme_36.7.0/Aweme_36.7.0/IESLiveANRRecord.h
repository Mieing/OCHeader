@interface IESLiveANRRecord : NSObject

@property (nonatomic) long long count;
@property (nonatomic) double durationSum;
@property (nonatomic) double durationMax;
@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) double validTime;

- (id)initWithValidTime:(double)a0;
- (double)durationPer100Seconds;
- (float)countPer100Seconds;
- (BOOL)isValid;
- (double)activeTime;

@end
