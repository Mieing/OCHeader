@class NSString, AWEIMFriendWidgetGuideResource, AWEIMWidgetGuideDemoteHelper;

@interface AWEIMWidgetGuideComponent : AWEIMComponentBase <AWEIMInteractiveEmojiAnimationObservable, AWEIMInteractiveEmojiAction, AWEIMWidgetGuideComponentService>

@property (retain, nonatomic) AWEIMFriendWidgetGuideResource *resource;
@property (retain, nonatomic) AWEIMWidgetGuideDemoteHelper *demoteHelper;
@property (nonatomic) BOOL interactiveEmojiAnimationFlag;
@property (nonatomic) BOOL didTryShowPopup;
@property (nonatomic) BOOL needTryShowWhenViewDidAppear;
@property (nonatomic) long long popupViewStatus;
@property (copy, nonatomic) id /* block */ onClose;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (id)alertIDForEvent:(id)a0;
- (long long)alertPriorityForEvent:(id)a0;
- (BOOL)canShowWithContext:(id)a0;
- (BOOL)shouldCancelAllOtherPendingAlertsWhenShowedWithContext:(id)a0;
- (void)showWithCloseCallback:(id /* block */)a0;
- (void)willPlayAnimation:(id)a0 fromMessages:(id)a1;
- (void)didEndPlayAnimation:(id)a0 fromMessages:(id)a1 isPlayFinished:(BOOL)a2 isPlaySuccess:(BOOL)a3;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (long long)messageListPopupViewStatus;
- (void)messageListPopupViewShow;
- (void)asyncGetMessageListPopupViewStatus:(id /* block */)a0;
- (void)p_canShowWidgetGuideViewWithCompletion:(id /* block */)a0;
- (void)p_maybeShowStreakPetElfWidgetWithCompletion:(id /* block */)a0;
- (void)showGuidePopupView;
- (void)p_tryShowPopup;
- (void).cxx_destruct;
- (id)init;

@end
