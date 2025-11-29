@class AWEIMFriendWidgetGuideResource, AWEIMMessageConversation, NSString, AWEIMWidgetInfoResponseModel;
@protocol AWEIMMessageTabPopupViewInterface;

@interface AWEIMStreakMessageTabPetElfWidgetPopupGuideComponent : AWEIMComponentBase <AWEIMMessageTabPopupViewProtocol, AWEUGSceneDesktopChannelGuideEvadeProtocol, AWEUGDesktopChannelGuideInfoInjectProtocol, AWEIMStreakMessageTabPetElfWidgetPopupGuideMessage, AWEUGDesktopChannelGuideMessage, AWEUserMessage>

@property (weak, nonatomic) id<AWEIMMessageTabPopupViewInterface> messageTabPopupViewInterface;
@property (retain, nonatomic) AWEIMFriendWidgetGuideResource *resource;
@property (retain, nonatomic) AWEIMMessageConversation *triggerConversation;
@property (retain, nonatomic) AWEIMWidgetInfoResponseModel *currentWidgetInfo;
@property (nonatomic) BOOL needShow;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL canSkipIMAndUGCommonControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (id)alertIDForEvent:(id)a0;
- (long long)alertPriorityForEvent:(id)a0;
- (BOOL)canShowWithContext:(id)a0;
- (BOOL)shouldCancelAllOtherPendingAlertsWhenShowedWithContext:(id)a0;
- (void)showWithCloseCallback:(id /* block */)a0;
- (id)enterFrom;
- (BOOL)shouldDesktopChannelGuideEvadeWithScene:(id)a0 enterFrom:(id)a1;
- (void)desktopChannelGuideAlreadyShowWithScene:(id)a0 enterFrom:(id)a1 guideType:(id)a2 extraParams:(id)a3 config:(id)a4;
- (void)desktopChannelGuideShowFailedWithScene:(id)a0 enterFrom:(id)a1 guideType:(id)a2 error:(id)a3 extraParams:(id)a4;
- (void)desktopChannelGuideClickWithScene:(id)a0 enterFrom:(id)a1 guideType:(id)a2 clickTarget:(id)a3;
- (void)hostVC_viewDidDisappear;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)notifyMaybeStreakPetElfGuideNeedShow:(BOOL)a0 ByConversation:(id)a1;
- (void)p_resetData;
- (void)p_getWidgetInfoWithCompletion:(id /* block */)a0;
- (void)p_checkCanShowWithCompletion:(id /* block */)a0;
- (void)p_showPopupGuideWithCompletion:(id /* block */)a0;
- (BOOL)isDisplayingCurrentPopupView;
- (BOOL)canLimitShowWithinTime;
- (void)asyncShowPopupViewIfNeeded:(id /* block */)a0;
- (id)contentGuideImage:(id)a0;
- (void).cxx_destruct;
- (id)position;
- (id)init;
- (void)dealloc;
- (id)sceneType;
- (id)tabID;

@end
