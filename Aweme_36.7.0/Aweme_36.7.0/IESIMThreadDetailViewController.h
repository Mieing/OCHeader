@class AWEIMMessageViewModel, NSString, IESIMThreadDetailConfiguration, AWEIMMessageListContext, NSDictionary, UIViewController, AWEIMMessageConversation, AWEIMConversationContext;
@protocol AWEIMMessageTableViewAction, AWEIMInputViewControllerProtocol, AWEIMMessageListComponent, AWEIMMessageDataProtocol, IESIMMessageListViewControllerProtocol;

@interface IESIMThreadDetailViewController : AWEIMComponentViewController <AWEZoomTransitionOuterContextProvider, AWEIMMediaDetailTransitionOuterContextProvider, AWEIMInAppPushProtocol, AWEIMComponentManagerDependency, IESIMMessageContainerViewControllerProtocol, AWEIMMessageListViewControllerDelegate, AWEIMMessageListViewControllerDataSource>

@property (readonly, nonatomic) NSDictionary *zoomTransitionContext;
@property (retain, nonatomic) IESIMThreadDetailConfiguration *configuration;
@property (retain, nonatomic) AWEIMMessageViewModel *originalRootMessageViewModel;
@property (retain, nonatomic) AWEIMMessageConversation *parentConversation;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (nonatomic) BOOL isEnterFromReport;
@property (weak, nonatomic) id<AWEIMMessageTableViewAction> tableViewAction;
@property (retain, nonatomic) AWEIMConversationContext *componentContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEIMMessageListContext *context;
@property (retain, nonatomic) UIViewController<AWEIMInputViewControllerProtocol> *inputVC;
@property (retain, nonatomic) id<IESIMMessageListViewControllerProtocol> messageListVC;
@property (retain, nonatomic) id<AWEIMMessageDataProtocol, AWEIMMessageListComponent> messageDataController;
@property (retain, nonatomic) NSString *anchorMessageID;

- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (double)zoomTransitionTargetViewCornerRadius;
- (BOOL)zoomTransitionWantsFromViewDisappear;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })focusViewPlaceholderFrame;
- (BOOL)canShowInnerPush;
- (id)mediaDetailTransitionStartView;
- (id)componentsNameArrayWithContext:(id)a0;
- (id)lazyComponentsNameWithContext:(id)a0;
- (void)tableViewDidScroll:(id)a0;
- (void)tableViewDidEndScroll:(id)a0;
- (void)tableViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)tableViewDidEndDecelerating:(id)a0;
- (void)tableViewAllDidEndScroll:(id)a0;
- (void)inputViewControllerDidChangeHeight:(id)a0;
- (void)loadMessageDetailWithServerMessageID:(long long)a0 completion:(id /* block */)a1;
- (void)inputStateDidChange:(id)a0;
- (void)didUpdateInputVCFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inputViewType:(long long)a1 oldInputViewType:(long long)a2;
- (void)checkUserSendMessagePrivilegeWithCompletion:(id /* block */)a0 messageType:(long long)a1;
- (void)handelKeyboardShowNotiWhenInputVCTextIsNotFirstResponder:(id)a0;
- (void)handelKeyboardDidShowNotiWhenInputVCTextIsNotFirstResponder:(id)a0;
- (void)didHandleKeyboardHideNoti:(id)a0;
- (BOOL)hasQuickSelectedImage;
- (void)didSendAssets:(id)a0 withExchangePublishType:(unsigned long long)a1;
- (id)p_zoomTransitionService;
- (void)messageCell:(id)a0 longPressUserAvatar:(id)a1;
- (double)p_viewWidth;
- (double)p_messageListVCViewAvailableHeight;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })messageListVCAvailableFrame;
- (void)willResendMessage:(id)a0;
- (void)tableViewDidEndLoadFirstScreen:(id)a0;
- (void)p_configWithExtraParams:(id)a0;
- (double)p_getMessageListVCTop;
- (BOOL)isChatEnterFromReport;
- (id)getInputViewController;
- (void)sendMessage:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)loadView;

@end
