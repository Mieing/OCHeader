@class NSString, AFDFrequencyCountRule, IESEffectModel, ACCSocialCameraAnimator;
@protocol ACCRecordSwitchModeService, _TtP9CameraKit28CameraSessionManagerProtocol_, ACCRecordPropService, ACCRecorderViewContainer, ACCModeCameraSessionService, ACCRecordSystemLivePhotoService, AWERecordBeautyService, ACCFilterService, ACCCameraService;

@interface ACCSocialCameraComponent : ACCFeatureComponent <ACCRecordSwitchModeServiceSubscriber, CameraKit.CameraSessionSwitchSubscription, UIViewControllerTransitioningDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (weak, nonatomic) id<ACCCameraService> cameraService;
@property (weak, nonatomic) id<ACCRecordPropService> propService;
@property (weak, nonatomic) id<_TtP9CameraKit28CameraSessionManagerProtocol_> cameraSessionManager;
@property (weak, nonatomic) id<ACCModeCameraSessionService> modeCameraSessionService;
@property (weak, nonatomic) id<ACCFilterService> filterService;
@property (weak, nonatomic) id<AWERecordBeautyService> beautyService;
@property (weak, nonatomic) id<ACCRecordSystemLivePhotoService> systemLivePhotoService;
@property (retain, nonatomic) AFDFrequencyCountRule *showBadgeRule;
@property (retain, nonatomic) ACCSocialCameraAnimator *animator;
@property (retain, nonatomic) IESEffectModel *needRecoverProp;
@property (retain, nonatomic) IESEffectModel *needRecoverFilter;
@property (nonatomic) BOOL needRecoverBeauty;
@property (nonatomic) BOOL needRecoverEffectWhenBackToCameraTab;
@property (nonatomic) BOOL hasShownBadge;
@property (nonatomic) BOOL isExitCreateScene;

- (void)componentDidAppear;
- (void)switchModeServiceWillChangeToMode:(id)a0 oldMode:(id)a1;
- (void)prepareDataForSwitchModeToMode:(id)a0 oldMode:(id)a1;
- (void)switchModeServiceDidChangeMode:(id)a0 oldMode:(id)a1;
- (void)cameraSessionDidRestoreConfig:(id)a0;
- (long long)fromRatio;
- (void)hideBadge;
- (void)bindServices:(id)a0;
- (long long)realModeIDForMode:(id)a0;
- (long long)targetRatio;
- (void)socialCameraWillClose:(id)a0;
- (void)showBadgeIfNeeded;
- (BOOL)hasEnteredStoryMode;
- (void)exitCreateScene;
- (id)animatorContextWithMode:(id)a0 oldMode:(id)a1;
- (void)transferToSocialCamera;
- (void)setHasEnteredStoryMode:(BOOL)a0;
- (void)p_recoverEffectAndLivePhotoOpenFlag;
- (void).cxx_destruct;
- (id)badgeView;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;

@end
