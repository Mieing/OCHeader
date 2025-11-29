@interface IESLiveStaticPerformanceMonitor : NSObject

@property (nonatomic) long long slowSession;
@property (nonatomic) double sampleRate;

- (id)toDic;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
