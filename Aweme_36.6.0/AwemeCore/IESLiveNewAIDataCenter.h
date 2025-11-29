@class NSHashTable, IESLiveFeatureOuterAdapter, NSString, NSMutableDictionary, NSObject, IESLiveFeatureSkipAdapter, NSMutableArray, IESLiveFeatureInstance, IESLiveFeatureInnerAdapter;
@protocol OS_dispatch_queue, IESLiveClientAIInjector;

@interface IESLiveNewAIDataCenter : NSObject <IESLiveStrategyRoomTrackerCharacterCollector, IESLiveTrackerDelegate>

@property (retain, nonatomic) id<IESLiveClientAIInjector> clientAIInjector;
@property (retain, nonatomic) NSMutableArray *innerInstanceArray;
@property (retain, nonatomic) IESLiveFeatureInstance *currentRoomInnerInstance;
@property (retain, nonatomic) NSMutableArray *outerInstanceArray;
@property (retain, nonatomic) NSMutableArray *skipInnerInstanceArray;
@property (retain, nonatomic) NSMutableDictionary *innerInstanceDic;
@property (retain, nonatomic) NSMutableDictionary *outerInstanceDic;
@property (retain, nonatomic) IESLiveFeatureInnerAdapter *innerAdapter;
@property (retain, nonatomic) IESLiveFeatureOuterAdapter *outerAdapter;
@property (retain, nonatomic) IESLiveFeatureSkipAdapter *skipAdapter;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *logQueue;
@property (retain, nonatomic) NSHashTable *observers;
@property (nonatomic) BOOL stallOptimize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)didSetAttachingDIContext;
- (id)userService;
- (void)willCommitTrackEvent:(id)a0 params:(id)a1;
- (id)getInnerFeature;
- (id)getIndexInnerFeature;
- (id)getOuterFeature:(id)a0;
- (id)getIndexOuterFeature:(id)a0;
- (id)getInnerSkipFeature;
- (id)getOuterSkipFeature:(id)a0;
- (id)getIndexInnerFeatureWithEnterFromMerge:(id)a0 enterMethod:(id)a1;
- (void)outerLeave:(id)a0;
- (void)previewIsNoStream:(id /* block */)a0;
- (void)previewDownLoadSpeed:(id /* block */)a0;
- (id)currentAudienceVCRoomModel;
- (id)findOuterInstance:(id)a0;
- (id)findInstance:(id)a0;
- (id)roomId:(id)a0;
- (id)creatInstance:(id)a0;
- (void)skipLive:(id)a0 instance:(id)a1;
- (void)addOuterInstance:(id)a0;
- (id)creatOuterInstance:(id)a0;
- (void)trackEventInnerFeatures:(id)a0 params:(id)a1;
- (void)trackEventOuterFeatures:(id)a0 params:(id)a1;
- (void)addTrackerCharacterObserver:(id)a0;
- (void)removeTrackerCharacterObserver:(id)a0;
- (id)findNoEndInstance:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addInstance:(id)a0;

@end
