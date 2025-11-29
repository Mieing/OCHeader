@class NSString, NSDictionary, AWEIMStreakPendantView, UIView;

@interface AWEIMStreakGroupPetSpacePendantComponent : AWEIMComponentBase <AWEIMMessageListLayotAction, AWEIMMessageListDataAction, AWEIMStreakPendantViewDelegate, AWEIMStreakPendantInterface, AWEIMInputVIewControllerAction, AWEIMMultiSelectedAction>

@property (retain, nonatomic) AWEIMStreakPendantView *pendantContainerView;
@property (nonatomic) BOOL hostVCDidAppear;
@property (nonatomic) BOOL hasGetAchievePageData;
@property (nonatomic) BOOL pendantIsShowing;
@property (copy, nonatomic) NSDictionary *serverDataUpdateInfo;
@property (nonatomic) BOOL hasTrackPendantShow;
@property (nonatomic) BOOL shouldTrackShowPendantTimeCost;
@property (nonatomic) double enterConversationTime;
@property (nonatomic) double initPendantContainerTime;
@property (nonatomic) double frontSendInitReadyTime;
@property (nonatomic) BOOL firstFrameOpt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *petElfView;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (id)componentContext;
- (void)onConversationDidUpdateWithConversation:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)hostVC_viewDidAppearAndRender;
- (void)inputViewTypeDidChange:(long long)a0 oldInputViewType:(long long)a1;
- (void)multiSelectedStateDidChanged:(BOOL)a0;
- (void)afterGetServerDataTryShowPendantWithRequestInfo:(id)a0;
- (id)trackCommonParams;
- (void)p_viewDidAppear;
- (void)setupPendantView;
- (void)pageLayoutCoordinateAnimationWithAnimated:(BOOL)a0 fromLayout:(id)a1 toLayot:(id)a2;
- (BOOL)shouldShowStreakPetSpacePendant;
- (id)getIMMessageConversation;
- (void)checkAndUpdatePendantStatusWithTriggerSource:(id)a0;
- (BOOL)canShowStreakPetSpacePendant;
- (void)trackPetSpacePendantShowWithUserSetHidePendant:(BOOL)a0;
- (void)trackPetSpacePendantCost;
- (id)getCurrentMessageListPageLayoutInfo;
- (id)bizClientData;
- (id)bizServerData;
- (void)trackLongPress;
- (void)petElfPendantSaveCurrentPositionWithDict:(id)a0;
- (void)petElfPendantHasGetFrontReadySignal;
- (void)petElfPendantHasShowSuccessSignal;
- (void)trackClickTipsToHideWidget;
- (void).cxx_destruct;

@end
