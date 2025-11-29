@class NSString, IESLiveStrategyApi, IESLiveStrategyDataCenterV2, IESLivePTFeatureCenter, IESLiveStrategyConfig, IESLiveStrategyEngine, IESLiveStrategyDataCenter, IESLiveWatchDurationManager;

@interface IESLiveStrategyManager : NSObject <IESLiveStrategyService>

@property (retain, nonatomic) IESLiveStrategyEngine *engine;
@property (retain, nonatomic) IESLiveStrategyDataCenter *dataCenter;
@property (retain, nonatomic) IESLiveStrategyDataCenterV2 *dataCenterV2;
@property (retain, nonatomic) IESLivePTFeatureCenter *ptFeatureCenter;
@property (retain, nonatomic) IESLiveStrategyApi *strategyApi;
@property (retain, nonatomic) IESLiveWatchDurationManager *watchDurationCollector;
@property (retain, nonatomic) IESLiveStrategyConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)initEngine;
- (id)getLatestFactor:(id)a0 scene:(id)a1;
- (id)getLatestFactor:(id)a0 anchorId:(id)a1 scene:(id)a2;
- (id)getCloudFeatureForName:(id)a0;
- (id)getCloudFeatureForName:(id)a0 anchorId:(id)a1;
- (void)addStrategyObserver:(id)a0 InFactor:(id)a1 withInputValue:(id)a2;
- (void)addFactorChangeObserver:(id)a0 forFactor:(id)a1 withImmediateTrigger:(BOOL)a2;
- (void)removeStrategyObserver:(id)a0;
- (void)removeStrategyObserver:(id)a0 factor:(id)a1;
- (void)addTrackerDelegate;
- (void)removeTrackerDelegate;
- (unsigned long long)streamOrientation:(id)a0;
- (int)sceneForRoomlinkermap:(id)a0;
- (void)startAnchorFeatureCollector;
- (void)stopAnchorFeatureCollector;
- (void)updateAnchorId:(id)a0;
- (id)getLatestFactor:(id)a0;
- (id)getStrategyIdByFactor:(id)a0;
- (void)initApi;
- (void)localStrategyInfo;
- (void).cxx_destruct;
- (id)init;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;

@end
