@class NSMutableDictionary, AWEHomepageChannelPreloadPerfMetricsMonitorEventConfig, NSString, NSMutableArray;
@protocol AWEHomepagePerfMetricsMonitorDelegate;

@interface AWEHomepageChannelPreloadPerfMetricsMonitorEventModel : NSObject <AWEHomepagePerfMetricsMonitorEventModelProtocol>

@property (nonatomic) double appLaunchTime;
@property (weak, nonatomic) id<AWEHomepagePerfMetricsMonitorDelegate> delegate;
@property (retain, nonatomic) NSMutableDictionary *channelPreloadInfos;
@property (retain, nonatomic) NSMutableArray *sceneModels;
@property (retain, nonatomic) AWEHomepageChannelPreloadPerfMetricsMonitorEventConfig *eventConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)beginScenePerfMetricsMonitorWithParams:(id)a0;
- (id)initWithAppLaunchTime:(double)a0 withConfigData:(id)a1 withDelegate:(id)a2;
- (void)endScenePerfMetricsMonitorWithParams:(id)a0 withDelayTime:(double)a1;
- (double)p_getMonitorTimeOut:(id)a0;
- (id)getChannelPreloadInfo:(id)a0;
- (void).cxx_destruct;

@end
