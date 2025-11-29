@class AWEHomePageChannelEnterPerfMetricsMonitorSceneParams, NSMutableDictionary, AWEHomepageChannelEnterPerfMetricsMonitorEventConfig, AWEPerfFPSScene, NSDictionary, NSMutableArray;

@interface AWEHomepageChannelEnterPerfMetricsMonitorSceneModel : NSObject

@property (retain, nonatomic) AWEHomePageChannelEnterPerfMetricsMonitorSceneParams *sceneParams;
@property (retain, nonatomic) AWEHomepageChannelEnterPerfMetricsMonitorEventConfig *config;
@property (nonatomic) double fpsBeginTime;
@property (nonatomic) double sceneBeginTime;
@property (retain, nonatomic) AWEPerfFPSScene *scenePerfFPS;
@property (retain, nonatomic) NSMutableArray *preloadInfos;
@property (retain, nonatomic) NSMutableArray *otherSceneArray;
@property (retain, nonatomic) NSMutableDictionary *baseSessionDic;
@property (retain, nonatomic) NSMutableArray *repeatSessionArray;
@property (nonatomic) double storeTime;
@property (retain, nonatomic) NSDictionary *storeFPSRepresentation;
@property (nonatomic) BOOL isEnd;

- (void)beginOtherSceneMonitorWithParams:(id)a0 withTimeInterval:(double)a1;
- (id)sceneBaseInfo;
- (void)initCurrentOtherSceneMonitor:(id)a0;
- (void)endOtherSceneMonitorWithParams:(id)a0 withTimeInterval:(double)a1;
- (void)cancelOtherSceneMonitorWithParams:(id)a0 withTimeInterval:(double)a1;
- (void)beginSessionPerfMetricsMonitorWithParams:(id)a0 withTimeInterval:(double)a1;
- (void)endSessionPerfMetricsMonitorWithParams:(id)a0 withTimeInterval:(double)a1;
- (void)monitorSessionPerfMetricsMonitorWithParams:(id)a0;
- (void)finishChannelPreloadInfoWhenEnter:(id)a0;
- (double)p_getTimeSinceSceneBegin:(double)a0;
- (id)p_scenePerfFPSMonitorKey;
- (id)p_getScenePropertyDictionaryWithFPSRepresentation:(id)a0;
- (id)initWithParams:(id)a0 withConfig:(id)a1 withTimeInterval:(double)a2 withTouchTime:(double)a3;
- (void)storeSelfSceneMonitorWithTimeInterval:(double)a0;
- (void)endSelfSceneMonitorWithParams:(id)a0 withTimeInterval:(double)a1;
- (void)cancelSelfSceneMonitorWithParams:(id)a0 withTimeInterval:(double)a1;
- (void)p_beginScenePerfFPSMonitor;
- (void)p_cancelScenePerfFPSMonitor;
- (void)p_trackEventWithParams:(id)a0 withFPSRepresentation:(id)a1 withTimeInterval:(double)a2;
- (id)p_initSessionBaseInfoWithParams:(id)a0 withBeginTimeInterval:(double)a1 identification:(id)a2;
- (id)p_getPropertyDictionaryWithFPSRepresentation:(id)a0 sessionKey:(id)a1;
- (id)p_getSessionPropertyDictionaryWithFPSRepresentation:(id)a0;
- (id)p_getSessionChannelLifeCyclePropertyDictionary:(id)a0;
- (void).cxx_destruct;

@end
