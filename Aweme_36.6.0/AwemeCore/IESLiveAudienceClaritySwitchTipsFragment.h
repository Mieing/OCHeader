@class IESLiveAudienceClarityDegradeTipsStore, IESLiveAudienceClaritySwitchTipsStore, NSString, HTSLiveStreamUrl_LiveCoreSDKData_PullData_Options_Quality, IESLiveAudienceClarityDegradeTipsView, IESLiveAudienceClaritySwitchTipsView;

@interface IESLiveAudienceClaritySwitchTipsFragment : IESLiveRoomComponent <HTSLiveStreamPlayerAction, IESLiveAudienceClaritySwitchTipsReactions, IESLiveAutoRotateAction, IESLiveGameAudienceClarityDegradeRouter, IESLivePaidStreamAction>

@property (nonatomic) long long orientation;
@property (nonatomic) BOOL isShowingDegradeTips;
@property (retain, nonatomic) IESLiveAudienceClarityDegradeTipsStore *degradeTipsStore;
@property (retain, nonatomic) IESLiveAudienceClarityDegradeTipsView *portraitDegradeTipsView;
@property (retain, nonatomic) IESLiveAudienceClarityDegradeTipsView *landscapeDegradeTipsView;
@property (retain, nonatomic) HTSLiveStreamUrl_LiveCoreSDKData_PullData_Options_Quality *degradeQuality;
@property (retain, nonatomic) IESLiveAudienceClaritySwitchTipsStore *switchTipsStore;
@property (retain, nonatomic) IESLiveAudienceClaritySwitchTipsView *switchTipsView;
@property (nonatomic) BOOL alreadyHandledEnterAction;
@property (nonatomic) BOOL firstFrameLoaded;
@property (nonatomic) BOOL allComponentLoadFinish;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentUnmount;
- (void)componentDestroy;
- (void)componentOrientationTransitionBegin:(long long)a0;
- (void)componentOrientationChanged:(long long)a0;
- (void)didAutoRotateToOrientation:(long long)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)appearDidFinishForLevel:(long long)a0;
- (void)paidStreamTrialDidStart:(long long)a0;
- (void)streamPlayerDidReadyToRender;
- (void)_onclickDegradeButtonAction;
- (void)_removePortraitHintView;
- (double)_getBottomPaddingWithLandscapesComponentsHidden:(BOOL)a0;
- (void)_removeLandscapeHintView;
- (BOOL)disableShowClarityViewInPayCamera;
- (BOOL)shouldContinueCheckStall;
- (void)showClarityDegradeTipsWith:(id)a0;
- (void)hideDegradeTips;
- (BOOL)_enableSwitchTips;
- (BOOL)_enableDegradeTips;
- (void)_hideClarityDegradeTips;
- (void)_switchTipsHandleNetworkChangedTriggerAction;
- (void)_switchTipsHandleEnterTriggerAction;
- (void)_switchTipsUpdatedConstraintWithOrientation:(long long)a0;
- (void)_degradeTipsUpdatedWithOrientation:(long long)a0;
- (BOOL)disableShowClarityViewInMultiLink;
- (void)_showClarityDegradeTips:(BOOL)a0;
- (void)_setupPortraitDegradeTipsViewIfNeeded;
- (void)_setupLandscapeDegradeTipsViewIfNeeded;
- (void)_onclickExitDegradeButtonAction;
- (void)_showPortraitClarityDegradeTipsIfNeeded;
- (void)_showLandscapeClarityDegradeTipsIfNeeded;
- (void)switchTipsWith:(id)a0;
- (void)hiddenTipsWith:(id)a0;
- (void).cxx_destruct;
- (void)_handleReachabilityChangedNotification:(id)a0;

@end
