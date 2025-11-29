@class NSObject, IESLiveGCDTimer;
@protocol OS_dispatch_queue;

@interface IESLiveGameOpenPlatformNotificationDisplayTimer : NSObject

@property (retain, nonatomic) IESLiveGCDTimer *minDisplayTimer;
@property (retain, nonatomic) IESLiveGCDTimer *maxDisplayTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *noticeQueue;
@property (nonatomic) double minDisplayTime;
@property (nonatomic) double maxDisplayTime;
@property (copy, nonatomic) id /* block */ onMinDisplayTimerFiredBlock;
@property (copy, nonatomic) id /* block */ onMaxDisplayTimerFiredBlock;

+ (id)defaultTimer;
+ (id)timerWithMinDisplayTime:(double)a0 maxDisplayTime:(double)a1;

- (void)onMaxDisplayTimeFired:(id /* block */)a0;
- (void)onMinDisplayTimeFired:(id /* block */)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (void)schedule;

@end
