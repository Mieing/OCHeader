@class NSString, NSArray, AWEIMPlayEntryGuideAnimExitHelper, AWEIMCodeGenFeaturePanelSingleBaseConfigurationModel, AWEIMCodeGenFeaturePanelActiveAnimationModel, NSNumber, AWEIMPlayEntryViewController;

@interface AWEIMPlayEntryComponent : AWEIMComponentBase <AWEIMPlayEntryInterface, AWEIMMessageBaseVCLayoutAction, AWEIMHalfScreenContainerVCDelegate>

@property (retain, nonatomic) AWEIMCodeGenFeaturePanelSingleBaseConfigurationModel *baseModel;
@property (retain, nonatomic) NSArray *diffModels;
@property (retain, nonatomic) AWEIMCodeGenFeaturePanelActiveAnimationModel *breathModel;
@property (retain, nonatomic) NSArray *registryComponents;
@property (retain, nonatomic) AWEIMPlayEntryGuideAnimExitHelper *exitHelper;
@property (nonatomic) BOOL guideAnimating;
@property (retain, nonatomic) NSNumber *enableInputPlayEntryInternal;
@property (nonatomic) BOOL didTrackInputShow;
@property (weak, nonatomic) AWEIMPlayEntryViewController *presentingPlayEntryVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSocialGroupWithCon:(id)a0;
+ (BOOL)isPublicGroupWithCon:(id)a0;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)viewWillAnimateAlongsideTransitionToSizeWith:(struct CGSize { double x0; double x1; })a0;
- (void)hostVC_afterFirstRender;
- (id)p_dynamicModelCacheKey;
- (id)p_mergeWithItems:(id)a0 dynamicModel:(id)a1;
- (void)p_requestDynamicWithItems:(id)a0 completion:(id /* block */)a1;
- (void)p_trackWithEvent:(id)a0;
- (BOOL)enableInputPlayEntry;
- (void)clickPlayEntryWithContext:(id)a0;
- (void)fetchDynamicDataWithCacheCallback:(id /* block */)a0 completion:(id /* block */)a1;
- (void)onTapPlayEntryItemWithItem:(id)a0;
- (void)trackInputPlayEntryShowIfNeeded;
- (void)resetEnableInputPlayEntry;
- (id)resolveBreathConfig;
- (id)resolveBaseConfig;
- (id)resolveDiffConfig;
- (id)p_getItemsWithApplyDiff;
- (id)p_sortAndFilterItems:(id)a0;
- (void)p_onTapPlayEntryItemWithItem:(id)a0;
- (void)p_openSchemaWithItem:(id)a0;
- (id)p_registryWithKey:(id)a0;
- (id)p_sortItems:(id)a0;
- (BOOL)p_checkItemAvailability:(id)a0;
- (id)p_itemBlockList;
- (void)p_applyDiffWithItems:(id)a0 diff:(id)a1;
- (void)p_applyDiff:(id)a0 toItem:(id)a1;
- (id)p_resolvedExtraParams;
- (void).cxx_destruct;

@end
