@class NSString, NSMutableArray, AWEHomepageChannelEnterPerfMetricsMonitorEventConfig;
@protocol AWEHomepagePerfMetricsMonitorDelegate;

@interface AWEHomepageChannelEnterPerfMetricsMonitorEventModel : NSObject <AWEHomepagePerfMetricsMonitorEventModelProtocol>

@property (nonatomic) double appLaunchTime;
@property (retain, nonatomic) NSMutableArray *sceneModelArray;
@property (retain, nonatomic) AWEHomepageChannelEnterPerfMetricsMonitorEventConfig *eventConfig;
@property (weak, nonatomic) id<AWEHomepagePerfMetricsMonitorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)beginSessionPerfMetricsMonitorWithParams:(id)a0;
- (void)endSessionPerfMetricsMonitorWithParams:(id)a0;
- (void)beginScenePerfMetricsMonitorWithParams:(id)a0;
- (void)monitorSessionPerfMetricsMonitorWithParams:(id)a0;
- (id)initWithAppLaunchTime:(double)a0 withConfigData:(id)a1 withDelegate:(id)a2;
- (void)endScenePerfMetricsMonitorWithParams:(id)a0 withDelayTime:(double)a1;
- (void)cancelScenePerfMetricsMonitorWithParams:(id)a0;
- (void)finishChannelPreloadInfoWhenEnter:(id)a0;
- (id)p_getNoEndSceneModelWithParams:(id)a0;
- (double)p_getRepeatCallSceneDuration;
- (double)p_getTouchTime:(id)a0;
- (void)p_endScenePerfMetricsMonitorWithParams:(id)a0 sceneModel:(id)a1;
- (void).cxx_destruct;

@end
