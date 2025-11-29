@class AWEHomepageChannelPerfMetricsMonitorPrePlugin, NSMutableDictionary, AWEHomepageChannelPerfMetricsMonitorPostPlugin, NSString, AWEHomePagePerfMetricsMonitorConfig;

@interface AWEHomePagePerfMetricsMonitor : NSObject <AWEHomepagePerfMetricsMonitorDelegate, AWEHomePagePerfMetricsMonitorProtocol>

@property (retain, nonatomic) NSMutableDictionary *eventModelDic;
@property (retain, nonatomic) NSMutableDictionary *touchTimeDic;
@property (nonatomic) double appLaunchTime;
@property (retain, nonatomic) AWEHomePagePerfMetricsMonitorConfig *config;
@property (retain, nonatomic) AWEHomepageChannelPerfMetricsMonitorPostPlugin *channelPostPlugin;
@property (retain, nonatomic) AWEHomepageChannelPerfMetricsMonitorPrePlugin *channelPrePlugin;
@property (nonatomic) BOOL channelChangeMonitorEnable;
@property (nonatomic) BOOL channelEnterMonitorEnable;
@property (nonatomic) BOOL channelPreloadMonitorEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)channelPostPluginController;
- (id)channelPrePluginController;
- (BOOL)channelChangePerfMetricsMonitorEnable;
- (void)beginSessionPerfMetricsMonitorWithParams:(id)a0;
- (void)endSessionPerfMetricsMonitorWithParams:(id)a0;
- (BOOL)channelEnterPerfMetricsMonitorEnable;
- (void)updateTouchTime:(double)a0 touchScene:(id)a1;
- (void)beginScenePerfMetricsMonitorWithParams:(id)a0;
- (void)endScenePerfMetricsMonitorWithParams:(id)a0;
- (double)getCurrentTimeSinceAppLaunch;
- (void)p_endScenePerfMetricsMonitorWithParams:(id)a0;
- (void)monitorSessionPerfMetricsMonitorWithParams:(id)a0;
- (void)cancelScenePerfMetricsMonitorWithParams:(id)a0;
- (double)getTouchTimeByTouchScene:(id)a0;
- (BOOL)channelLifeCyclePerfMetricsMonitorEnable;
- (BOOL)channelPreloadPerfMetricsMonitorEnable;
- (void)clearChannelPreloadInfoWhenEnter:(id)a0;
- (void)p_initAppLaunchTime;
- (void)p_initConfig;
- (void)p_channelColdLaunchMonitorIfNeed;
- (void)p_initWithPlugin;
- (BOOL)p_checkLimitEnable:(id)a0;
- (void)p_beginScenePerfMetricsMonitorWithParams:(id)a0;
- (BOOL)p_enableSceneMonitorWithParams:(id)a0;
- (id)p_newMonitorModelWithEvent:(id)a0;
- (void)p_cancelScenePerfMetricsMonitorWithParams:(id)a0;
- (double)p_getSceneDelayTimeWithParams:(id)a0;
- (void)p_beginSessionPerfMetricsMonitorWithParams:(id)a0;
- (void)p_endSessionPerfMetricsMonitorWithParams:(id)a0;
- (double)currentMonitorTime;
- (id)eventModelRegisterDic;
- (BOOL)channelFinishLoadPerfMetricsMonitorEnable;
- (id)generatePreloadKeyWithType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
