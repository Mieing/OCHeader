@class NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue, CdnRenderStatsDelegate;

@interface CdnRenderStats : NSObject

@property (nonatomic) long long frameCount;
@property (nonatomic) unsigned long long renderStartTime;
@property (nonatomic) unsigned long long lastRenderTime;
@property (nonatomic) unsigned long long lastFeelingRenderTime;
@property (nonatomic) long long fps;
@property (nonatomic) unsigned long long lastBlockTime;
@property (nonatomic) unsigned long long renderFpsStatCnt;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *monitorTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *monitorQueue;
@property unsigned long long lastRenderTimeForMonitor;
@property (copy) id /* block */ fpsReport;
@property (weak, nonatomic) id<CdnRenderStatsDelegate> delegate;
@property (nonatomic) long long blockThreshold;
@property BOOL printRenderFPS;
@property (nonatomic) long long monitorInterval;

+ (id /* block */)createReportTimer:(long long)a0 block:(id /* block */)a1;

- (id)init;
- (void)updateRenderStats:(id /* block */)a0;
- (void)resetPeriodStatistics;
- (void)pauseMonitor;
- (void)resumeMonitor;
- (void)appLeaveForeground;
- (void)appEnterForeground;
- (BOOL)isTooFrequentToRender;
- (unsigned long long)getLastRenderTime;
- (unsigned long long)getCurrRenderTime;
- (id /* block */)createFpsReporter;
- (void)dealloc;
- (void)increaseRenderFpsStatCnt;
- (void)logForRenderStatIfNeed;
- (void)updateFps:(int)a0;
- (void).cxx_destruct;

@end
