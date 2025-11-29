@class NSTimer;

@interface AWEUGCampaignMemoryMonitor : NSObject

@property (nonatomic) double monitorTimeInterval;
@property (retain, nonatomic) NSTimer *timer;

+ (id)sharedManager;

- (void)startMemoryMonitor;
- (void)stopMemoryMonitor;
- (void)timerCallBackWithTimer:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
