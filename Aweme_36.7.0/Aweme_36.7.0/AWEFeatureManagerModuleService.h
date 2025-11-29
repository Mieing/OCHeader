@class NSString, NSMutableDictionary, NSMutableArray, ByteBenchStrategyOC;

@interface AWEFeatureManagerModuleService : HTSService <AWEFeatureManagerModuleService, AWEGokuPluginTargetProtocol>

@property (retain, nonatomic) NSMutableDictionary *sequenceFeatureItemDict;
@property (retain, nonatomic) NSMutableArray *itemIDArray;
@property (copy, nonatomic) NSString *firstItemIDWhenEnterForeground;
@property (retain, nonatomic) NSMutableArray *featureProviders;
@property (nonatomic) long long commentIndexInSession;
@property (retain, nonatomic) ByteBenchStrategyOC *benchStrategy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)addFeedFeatureProvider:(id)a0;
- (void)removeFeedFeatureProvider:(id)a0;
- (void)onAppWillEnterForeground;
- (id)getLastResult;
- (void)didChangePlaybackStateWithAction:(id)a0;
- (void)awemePlayerWillLoopPlayingWith:(id)a0;
- (void)logUserActionEvent:(unsigned long long)a0 withModel:(id)a1 from:(id)a2;
- (void)logFeatureFromTrackEvent:(id)a0 params:(id)a1;
- (void)onAwemeItemEndDisplayWithModel:(id)a0;
- (void)onAwemeItemDeletedWithItemID:(id)a0;
- (id)sequenceFeatureUploadByRequest;
- (id)singleFeatureUploadByRequest:(BOOL)a0;
- (BOOL)enableUploadSequenceFeatures;
- (BOOL)enableUploadSingleFeatures;
- (id)singleFeatures;
- (id)p_getOrCreateItemFeatureWithModel:(id)a0;
- (void)p_uploadLiveFeatureWithModel:(id)a0;
- (id)p_getItemFeatureWithItemID:(id)a0;
- (id)sequenceFeatureList;
- (void)p_addCustomFeatureWithItemID:(id)a0 featureDict:(id)a1;
- (id)p_createItemFeatureWithModel:(id)a0;
- (id)currentSingleFeatures;
- (id)harInfo;
- (BOOL)batteryIsCharing;
- (BOOL)shouldUploadSingleFeatureKey:(id)a0 featureValue:(id)a1 isFirstRequest:(BOOL)a2;
- (long long)sequenceFeatureLength;
- (void)limitFeatureDictWithWhitelist:(id)a0;
- (BOOL)shouldUploadSequenceFeatureKey:(id)a0 featureValue:(id)a1;
- (id)singleFeatureList:(BOOL)a0;
- (void)updatePlayerInfoWithContext:(id)a0;
- (id)furionSingleFeaturesWithKeys:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)moduleNames;
- (void)dealloc;
- (double)volume;
- (double)overallScore;
- (BOOL)isMute;

@end
