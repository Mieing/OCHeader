@class AdTimerHelper;

@interface AdExposureTimerHelper : NSObject

@property (retain, nonatomic) AdTimerHelper *timerHelper;
@property (nonatomic) unsigned long long totalExposureTime;
@property (nonatomic) BOOL isStart;
@property (nonatomic) unsigned long long disappearTime;
@property (nonatomic) unsigned long long disappearDuration;

- (id)init;
- (void)start;
- (void)stop;
- (void)beginDisappear;
- (void)endDisappear;
- (unsigned long long)fetchExposureTime;
- (void)reset;
- (void).cxx_destruct;

@end
