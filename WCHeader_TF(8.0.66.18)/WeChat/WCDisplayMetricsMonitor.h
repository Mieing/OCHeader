@class NSArray, CADisplayLink, WCDisplayMetrics, NSMutableArray;
@protocol WCDisplayMetricsMonitorDelegate;

@interface WCDisplayMetricsMonitor : NSObject {
    CADisplayLink *_displayLink;
    NSMutableArray *_metricsRecords;
}

@property (weak, nonatomic) id<WCDisplayMetricsMonitorDelegate> delegate;
@property (nonatomic) long long preferredFramesPerSecond;
@property (nonatomic) double durationPerCollectionCycle;
@property (readonly, nonatomic) WCDisplayMetrics *currentMetrics;
@property (nonatomic) unsigned long long metricsRecordsMaximumCapacity;
@property (readonly, nonatomic) NSArray *metricsRecords;
@property (readonly, nonatomic) BOOL isMonitoring;

- (id)init;
- (void)startMonitoring;
- (void)stopMonitoring;
- (void)pauseMonitoring;
- (void)resumeMonitoring;
- (void)handleScreenUpdate:(id)a0;
- (void)makeMetricsCompleted:(id)a0;
- (void).cxx_destruct;

@end
