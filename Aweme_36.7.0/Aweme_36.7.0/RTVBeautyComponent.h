@class AWEComposerBeautyCacheViewModel, AWEComposerBeautyViewController, NSArray, NSString, NSMutableDictionary, AWEComposerBeautyViewModel, RTVVoipTracker, ByteRTCVideoEffect, NSDictionary, RxScheduler, AWEComposerBeautyEffectViewModel;
@protocol RTVRTCEngineInterface, RTVStorageArea, RTVTrackerProtocol, RTVVoipSettingManagerInterface;

@interface RTVBeautyComponent : RTVComponentBase <AWEComposerBeautyDelegate, RTVVoipToolBarAction, RTVRTCEngineAction, RTVVoipViewControllerAction>

@property (weak, nonatomic) id<RTVRTCEngineInterface> engine;
@property (weak, nonatomic) ByteRTCVideoEffect *effectEngine;
@property (retain, nonatomic) AWEComposerBeautyViewModel *viewModel;
@property (retain, nonatomic) AWEComposerBeautyCacheViewModel *cacheModel;
@property (retain, nonatomic) AWEComposerBeautyEffectViewModel *aweEffectManager;
@property (retain, nonatomic) AWEComposerBeautyViewController *composerBeautyVC;
@property (nonatomic) long long currentGender;
@property (copy, nonatomic) NSDictionary *savedStrengthInfo;
@property (retain, nonatomic) id<RTVVoipSettingManagerInterface> settingsManager;
@property (readonly, nonatomic) id<RTVStorageArea> effectManagerStorage;
@property (readonly, nonatomic) RTVVoipTracker *voipTracker;
@property (readonly, nonatomic) id<RTVTrackerProtocol> tracker;
@property (readonly, nonatomic) RxScheduler *beautyOperationScheduler;
@property (readonly, nonatomic) NSMutableDictionary *recordedEffects;
@property (nonatomic) BOOL presenting;
@property (copy, nonatomic) NSArray *filteredCategories;
@property (copy, nonatomic) NSArray *allEffects;
@property (retain, nonatomic) NSMutableDictionary *userChangedEffects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)selectCategory:(id)a0;
- (void)reportAppliedBeautyEffects:(id)a0 gender:(long long)a1;
- (void)didClickToolBarAction:(id)a0;
- (void)xrEngine:(id)a0 videoCaptureStateChange:(unsigned long long)a1;
- (void)xrEngine:(id)a0 didRenderAndDisplayFirstLocalVideoFrame:(struct CGSize { double x0; double x1; })a1;
- (void)xrEngine:(id)a0 didRenderFirstLocalVideoFrame:(struct CGSize { double x0; double x1; })a1;
- (void)onVoipViewControllerViewDidLoad:(id)a0;
- (id)p_createBeautyViewModelIfNeeded;
- (id)p_createBeautyVCIfNeeded;
- (void)p_updateControlViewAlpha:(double)a0;
- (void)p_trackBeautyButtonClicked;
- (id)__updateCurrentCategory;
- (void)p_rtc_updateRatioInternal:(float)a0 forEffect:(id)a1;
- (void)p_trackEvent:(id)a0 params:(id)a1;
- (void)p_removeComposerBeautyEffect:(id)a0;
- (void)p_trackCategory:(id)a0;
- (void)p_updateBeautyEffectSavedStrengthInfo:(id)a0 forEffects:(id)a1;
- (void)p_reApplyCachedBeautyEffects;
- (void)p_afterFetchData:(id)a0;
- (void)p_afterEffectDownloadStatusChanged:(id)a0 downloadStatus:(long long)a1;
- (void)p_handleCategoriesLoaded:(id)a0;
- (void)__downloadAvailableEffectsFromCategories:(id)a0;
- (void)p_reloadController;
- (BOOL)p_shouldApplyEffect:(id)a0;
- (void)__appendComposerBeautyEffect:(id)a0 ratio:(float)a1 old:(id)a2;
- (id)__filterCategories:(id)a0 withGender:(long long)a1;
- (id)p_nodePaths:(id)a0;
- (void)p_rtc_setComposerBeautyEffectWithPaths:(id)a0;
- (void)p_doCreateBeautyVC;
- (long long)__rtvGenderFromAweGender:(long long)a0;
- (void)p_replaceComposerBeautyEffectInternal:(id)a0 old:(id)a1;
- (void)p_rtc_appendComposerBeautyEffectWithPaths:(id)a0;
- (void)p_rtc_removeComposerBeautyWithPaths:(id)a0;
- (long long)p_genderOfEffectItem:(id)a0;
- (void)applyComposerBeautyEffect:(id)a0 ratio:(float)a1;
- (void)selectComposerBeautyEffect:(id)a0 ratio:(float)a1 oldEffect:(id)a2;
- (void)deselectComposerBeautyEffect:(id)a0;
- (void)composerBeautyViewControllerDidReset;
- (void)composerBeautyDidClearRatioForCategory:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
