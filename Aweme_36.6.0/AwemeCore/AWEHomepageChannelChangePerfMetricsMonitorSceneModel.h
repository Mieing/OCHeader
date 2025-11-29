@class NSMutableDictionary, AWEPerfFPSScene, AWEHomePagePerfMetricsMonitorSceneBaseParams, AWEHomepageChannelChangePerfMetricsMonitorEventConfig, NSMutableArray;

@interface AWEHomepageChannelChangePerfMetricsMonitorSceneModel : NSObject

@property (retain, nonatomic) AWEHomePagePerfMetricsMonitorSceneBaseParams *sceneParams;
@property (retain, nonatomic) AWEHomepageChannelChangePerfMetricsMonitorEventConfig *config;
@property (nonatomic) double appLaunchTime;
@property (nonatomic) double sceneBeginTime;
@property (retain, nonatomic) AWEPerfFPSScene *scenePerfFPS;
@property (retain, nonatomic) NSMutableArray *otherSceneArray;
@property (retain, nonatomic) NSMutableDictionary *baseSessionDic;
@property (retain, nonatomic) NSMutableArray *repeatSessionArray;

- (void)beginOtherSceneMonitorWithParams:(id)a0 withTimeInterval:(double)a1;
- (id)sceneBaseInfo;
- (id)initWithParams:(id)a0 withConfig:(id)a1 withTimeInterval:(double)a2 withAppLaunchTime:(double)a3;
- (void)initCurrentOtherSceneMonitor:(id)a0;
- (void)endSelfSceneMonitorWithTimeInterval:(double)a0;
- (void)endOtherSceneMonitorWithParams:(id)a0 withTimeInterval:(double)a1;
- (void)cancelSelfSceneMonitorWithTimeInterval:(double)a0;
- (void)cancelOtherSceneMonitorWithParams:(id)a0 withTimeInterval:(double)a1;
- (void)beginSessionPerfMetricsMonitorWithParams:(id)a0 withTimeInterval:(double)a1;
- (void)endSessionPerfMetricsMonitorWithParams:(id)a0 withTimeInterval:(double)a1;
- (void)monitorSessionPerfMetricsMonitorWithParams:(id)a0;
- (void)p_beginFPSMonitorIfNeed;
- (void)p_cancelScenePerfFPSMonitorIfNeed;
- (double)p_getTimeSinceSceneBegin:(double)a0;
- (void)p_trackEventWithInterval:(double)a0 withFPSRepresentation:(id)a1;
- (id)p_initSessionBaseInfoWithSession:(id)a0 withTimeInterval:(double)a1 identification:(id)a2;
- (id)p_scenePerfFPSMonitorKey;
- (id)p_getScenePropertyDictionaryWithFPSRepresentation:(id)a0;
- (void).cxx_destruct;

@end
