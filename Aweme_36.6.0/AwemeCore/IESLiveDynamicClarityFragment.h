@class NSString, IESLiveClarityChooseView, HTSLiveToolbarItem, IESLivePopupItem, IESLiveResolutionApi, NSDictionary;
@protocol IESLiveAnchorDynamicClarityPreferenceService, IESLiveVideoEffectProcessing;

@interface IESLiveDynamicClarityFragment : IESLiveRoomComponent <IESliveDynamicClarityRouter, IESLiveClarityChooseViewDelegate, HTSLiveToolbarActions, IESLiveRevenueInteractAction, IESLiveSocialInteractAction>

@property (retain, nonatomic) id<IESLiveAnchorDynamicClarityPreferenceService> clarityPreference;
@property (retain, nonatomic) id<IESLiveVideoEffectProcessing> videoEffectProcessProvider;
@property (retain, nonatomic) IESLiveClarityChooseView *chooseView;
@property (retain, nonatomic) IESLivePopupItem *popupItem;
@property (retain, nonatomic) HTSLiveToolbarItem *clarityItem;
@property (weak, nonatomic) id alertVc;
@property (nonatomic) unsigned long long qualityCount;
@property (nonatomic) double alertFactoryTimeInterval;
@property (nonatomic) BOOL sdkparamsDidUpdate;
@property (nonatomic) BOOL inBackground;
@property (retain, nonatomic) IESLiveResolutionApi *resolutionApi;
@property (copy, nonatomic) NSDictionary *streamSDKParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentMount;
- (void)endRevenueInteractWithScene:(unsigned long long)a0;
- (void)onAppWillResignActive;
- (void)onAppBecomeActive;
- (void)setupNotification;
- (BOOL)isInteractRunning;
- (void)onToolbar:(id)a0 sizeChanged:(struct CGSize { double x0; double x1; })a1;
- (void)onExpandGroupShow:(BOOL)a0;
- (BOOL)isEnableDynamicClarity;
- (void)toggleChooseClarity;
- (void)updatePushStreamConfig:(id)a0 type:(id)a1;
- (void)resetPushStreamConfig;
- (void)resetCameraOutputSize;
- (void)resetPushStreamAndCaptureConfig;
- (void)showResolutionDowngradePush;
- (void)updateRecommendResolution:(id)a0;
- (void)interactionModeEndedWithLayout:(id)a0;
- (void)showClarifySheet;
- (void)hideClarityChooseSheet;
- (void)clarityChooseView:(id)a0 didSelectItems:(id)a1;
- (BOOL)disableClarity;
- (void)praseUpstreamParams;
- (void)setupDisposable;
- (void)addDynamicClarityItem;
- (BOOL)currentLiveIsSupportVR;
- (BOOL)isXPlayInteractRunning;
- (id)getCurrentRatioStr;
- (void)observerNetworkQuality;
- (id)clarityImageNamed;
- (void)setupHorizontalConfig;
- (void)setupOriginalConfig;
- (void)trackperFormance:(id)a0;
- (void)clearExtraStreamMemResource;
- (void)resetCapturePreset:(id)a0;
- (void)willStartNormalStreaming:(id)a0;
- (void)updatePushStreamVRConfig:(id)a0 type:(id)a1;
- (void)clarityItemShowRedDot:(BOOL)a0;
- (void)showAlertFactory;
- (void)updateBestPushStreamConfig:(id)a0 resolutionKey:(id)a1;
- (void)requestRecommendResolution:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
