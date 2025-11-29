@class NSString, AWEIMFansCouponTopEntryView;
@protocol AWEIMMessageFansCouponEntryInteractorInterface, AWEIMMessageListTopFloatingInterface;

@interface AWEIMMessageListCouponTopFloatingComponent : AWEIMComponentBase <AWEIMFloatingViewDispatchProtocol, AWEIMConversationInfoOtherSubscriberProtocol, AWEIMMessageListBackgroundAction>

@property (nonatomic) long long lastReadIndexForCouponCollect;
@property (retain, nonatomic) AWEIMFansCouponTopEntryView *topEntryView;
@property (weak, nonatomic) id<AWEIMMessageFansCouponEntryInteractorInterface> couponInteractor;
@property (weak, nonatomic) id<AWEIMMessageListTopFloatingInterface> floatingService;
@property (nonatomic) long long topEntryCouponCount;
@property (nonatomic) BOOL showInFloatMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ continueBlock;
@property (copy, nonatomic) id /* block */ removeBlock;
@property (nonatomic) BOOL invalid;
@property (nonatomic) unsigned long long priorityValue;

+ (BOOL)enableFansCouponTopEntryBySetting;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hideViewIfNeed;
- (void)showViewIfNeed;
- (id)shouldContinueForPriorityObject:(id)a0;
- (id)shouldRemoveForPriorityObject:(id)a0;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (id)conversationInfoOtherRequestParams;
- (void)updateConversationInfoOtherData:(id)a0 source:(id)a1;
- (void)messageListBackgroundImageDidUpdated:(id)a0;
- (BOOL)isTopEntryViewShowing;
- (void)dismissTopEntryView;
- (void)p_showFansCouponTopEntryWithCount:(long long)a0;
- (void)topEntryBtnClicked:(id)a0;
- (void)topCloseBtnClicked:(id)a0;
- (void)dismissTopEntryView:(BOOL)a0;
- (void).cxx_destruct;

@end
