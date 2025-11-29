@class AWEHomePageChannelPreloadPerfMetricsMonitorSceneParams;

@interface AWEHomepageChannelPreloadPerfMetricsMonitorSceneModel : NSObject

@property (nonatomic) long long preTriggerCount;
@property (nonatomic) BOOL isEnd;
@property (retain, nonatomic) AWEHomePageChannelPreloadPerfMetricsMonitorSceneParams *sceneParams;

- (id)initWithParams:(id)a0 preTriggerCount:(long long)a1;
- (void)endMonitor:(id)a0 time:(double)a1;
- (void)p_trackEventWithParams:(id)a0 time:(double)a1;
- (void).cxx_destruct;

@end
