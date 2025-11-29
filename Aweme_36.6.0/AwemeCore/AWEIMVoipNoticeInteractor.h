@class NSString, AWEIMVoipNoticeInteractorContext, NSArray, AWEIMVoipNoticeIconView, AWEIMVoipNoticeView, AWEIMVoipNoticeViewModel;
@protocol AWEIMMessageListTopFloatingInterface, AWEIMVoipNoticeInteractorDelegate;

@interface AWEIMVoipNoticeInteractor : AWEIMComponentBase <AWEIMVoipNoticeViewDelegate, AWEIMChatMessageTransferUtilityMessage, AWEIMMessageBaseVCLayoutAction, AWEIMVoipNoticeInteractorInterface>

@property (retain, nonatomic) AWEIMVoipNoticeView *noticeView;
@property (copy, nonatomic) NSString *roomID;
@property (retain, nonatomic) AWEIMVoipNoticeInteractorContext *voipContext;
@property (retain, nonatomic) NSArray *userIDs;
@property (nonatomic) long long rtvType;
@property (retain, nonatomic) AWEIMVoipNoticeViewModel *noticeViewModel;
@property (nonatomic) BOOL didDealWithAutoJoin;
@property (nonatomic) BOOL observeCallbackHasCalled;
@property (weak, nonatomic) id<AWEIMMessageListTopFloatingInterface> floatingService;
@property (retain, nonatomic) AWEIMVoipNoticeIconView *noticeIconView;
@property (readonly, nonatomic) BOOL isShowing;
@property (weak, nonatomic) id<AWEIMVoipNoticeInteractorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL showInFloatMode;
@property (copy, nonatomic) id /* block */ continueBlock;
@property (copy, nonatomic) id /* block */ removeBlock;
@property (nonatomic) BOOL invalid;
@property (nonatomic) unsigned long long priorityValue;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)renderModel:(id)a0 context:(id)a1;
- (void)hideViewIfNeed;
- (void)showViewIfNeed;
- (id)shouldContinueForPriorityObject:(id)a0;
- (id)shouldRemoveForPriorityObject:(id)a0;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)hostVC_viewDidAppearAndRender;
- (void)viewDidChangeBackgroundImage:(BOOL)a0;
- (void)__dismiss;
- (void)p_viewDidAppear;
- (void)__showToast:(id)a0;
- (id)vcParent;
- (void)transferToAlreadyExistingChatPageWithCid:(id)a0 params:(id)a1;
- (void)dismissIfNeeded;
- (void)__show;
- (void)showIfNeeded;
- (void)p_roomIDDidChange:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })__noticeViewFrame;
- (void)__checkAndAutoJoinIfNeedWithParams:(id)a0;
- (long long)__maxVoipParticipantCountWithSessionContext:(id)a0;
- (void)__unObserveRoom:(id)a0;
- (void)__observeRoom:(id)a0;
- (void)didClickBanner;
- (BOOL)__isUserInVoipWithUserSecIMID:(id)a0 voipUserSecIMIDs:(id)a1;
- (BOOL)__canShowNoticeView;
- (void)voipNoticeView:(id)a0 didClickJoinButton:(id)a1;
- (id)parent;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
