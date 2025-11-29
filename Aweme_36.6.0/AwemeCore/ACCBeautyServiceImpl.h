@class ACCCameraSubscription, AWEStudioRecorderFeatureBeautyConfig, ACCBeautyPanelViewModel, AWEComposerBeautyEffectWrapper, AWEComposerBeautyEffectViewModel, NSString;
@protocol ACCBeautyComponentConfigProtocol, ACCCameraService;

@interface ACCBeautyServiceImpl : ACCRecorderViewModel <ACCBeautyService>

@property (retain, nonatomic) AWEStudioRecorderFeatureBeautyConfig *featureConfig;
@property (retain, nonatomic) ACCBeautyPanelViewModel *beautyPanelViewModel;
@property (retain, nonatomic) AWEComposerBeautyEffectViewModel *effectViewModel;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCBeautyComponentConfigProtocol> beautyComponentConfig;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (nonatomic) BOOL beautyOn;
@property (retain, nonatomic) AWEComposerBeautyEffectWrapper *currentBeauty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isUsingBeauty;
- (void)cacheSelectedFilter:(id)a0 withCameraPosition:(long long)a1;
- (void)updateAppliedFilter:(id)a0;
- (void)syncFrontAndRearFilterId:(id)a0;
- (void)clearAllComposerBeautyEffects;
- (void)updateAvailabilityForEffectsInCategories:(id)a0;
- (void)applyComposerBeautyEffects:(id)a0;
- (void)clearComposerBeautyEffects:(id)a0;
- (BOOL)isUsingLocalBeautyResource;
- (void)addAlgorithmCallbackForBeauty:(id)a0;
- (void)replaceComposerBeautyWithNewEffects:(id)a0 oldEffects:(id)a1;
- (void)applyComposerBeautyNodes:(id)a0;
- (void)replaceComposerBeautyNodes:(id)a0 oldBeautyNodes:(id)a1;
- (void)removeComposerBeautyNodes:(id)a0;
- (void)updateComposerBeautyNode:(id)a0 key:(id)a1 value:(double)a2;
- (id)initWithServiceProvider:(id)a0 featureConfig:(id)a1;
- (void)addSkeletonAlgorithmCallback;
- (id)p_toAppendNodesWithEffects:(id)a0;
- (id)p_toRemoveNodesWithEffects:(id)a0;
- (BOOL)availabilityForEffectWrapper:(id)a0 withCameraService:(id)a1;
- (void)p_setupBeautyDefaultSwitchStateToCache:(id)a0;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;

@end
