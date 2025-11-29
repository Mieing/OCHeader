@class AWEIMRemindFriendOpenPushBannerView, UIViewController, NSString;
@protocol AWEIMRemindFriendOpenPushInteractorDelegate, IESIMSheetVCProtocol, IESIMConversationDeleteMessageAfterDisplayInterface;

@interface AWEIMRemindFriendOpenPushInteractor : AWEIMComponentBase <IESIMSheetVCDelegate, AWEIMMessageBaseVCLayoutAction, AWEIMMessageListDataAction, AWEIMRemindFriendOpenPushInteractorInterface>

@property (retain, nonatomic) AWEIMRemindFriendOpenPushBannerView *bannerView;
@property (retain, nonatomic) UIViewController<IESIMSheetVCProtocol> *popUpSheet;
@property (nonatomic) BOOL hasGotoSystemSetting;
@property (weak, nonatomic) id<IESIMConversationDeleteMessageAfterDisplayInterface> deleteMessageService;
@property (weak, nonatomic) id<AWEIMRemindFriendOpenPushInteractorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL showInFloatMode;
@property (copy, nonatomic) id /* block */ continueBlock;
@property (copy, nonatomic) id /* block */ removeBlock;
@property (nonatomic) BOOL invalid;
@property (nonatomic) unsigned long long priorityValue;

+ (id)remindFriendOpenPushReceiverTextConfig;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)sheetDidClickMaskArea:(id)a0;
- (void)sheetDidClickCloseButton:(id)a0;
- (void)sheetDidDismiss:(id)a0;
- (void)hideViewIfNeed;
- (void)showViewIfNeed;
- (id)shouldContinueForPriorityObject:(id)a0;
- (id)shouldRemoveForPriorityObject:(id)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)didReceiveNewMessage:(id)a0 reason:(long long)a1;
- (void)beforeAsync_didFetchMsgWithMessageGroupArray:(id)a0 hasMore:(BOOL)a1 direction:(unsigned long long)a2 shouldAutoLoadMore:(BOOL)a3 isFirstLoad:(BOOL)a4;
- (void)viewDidChangeBackgroundImage:(BOOL)a0;
- (id)conversationInfoOtherRequestParams;
- (void)updateConversationInfoOtherData:(id)a0 source:(id)a1;
- (id)fetchInfoOtherWithOtherParams;
- (void)openAction;
- (id)vcParent;
- (void)p_openReceivePushOnlyFromFrends;
- (void)p_changeSettingWithField:(id)a0 value:(id)a1 completion:(id /* block */)a2;
- (void)p_openSystemSetting;
- (void)showRemindPushGuideWithMessageGroupArray:(id)a0;
- (void)showRemindPushGuideWithMessage:(id)a0;
- (void)p_sendResponseMessage;
- (BOOL)p_showPushGuide;
- (void)p_dismissBannerView;
- (void)p_displayPushGuideBannerView;
- (void)p_sendRemindMessage;
- (void)p_postMessageWithParams:(id)a0 complete:(id /* block */)a1;
- (id)p_remindMessageWithMessageGruopArray:(id)a0;
- (void)p_showBottomRemindOpenPushViewWithMessage:(id)a0;
- (id)p_trackDisplayBottomRemindViewParamsWithEventType:(id)a0;
- (void)p_trackUnDisplayBottomRemindViewWithReason:(id)a0;
- (double)p_bottomGuideViewContentHeight;
- (void)p_trackDisplayBottomRemindViewWithEventType:(id)a0;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (void)closeAction;
- (id)init;
- (void)dealloc;
- (BOOL)isDisplaying;

@end
