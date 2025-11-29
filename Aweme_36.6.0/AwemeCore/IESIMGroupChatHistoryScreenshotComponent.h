@class IESIMGroupChatScreenshotPopView, UIViewController, NSString;
@protocol AWEIMMessageTableViewInterface, AWEIMMessageVisibleCellInterface, AWEIMInputViewControllerProtocol, AWEIMEmoticonPanelBoxComponent;

@interface IESIMGroupChatHistoryScreenshotComponent : AWEIMComponentBase <groupChatScreenshotPopViewDelegate>

@property (weak, nonatomic) id<AWEIMMessageVisibleCellInterface> visibleCellService;
@property (weak, nonatomic) id<AWEIMMessageTableViewInterface> tableViewService;
@property (weak, nonatomic) IESIMGroupChatScreenshotPopView *popView;
@property (weak, nonatomic) UIViewController<AWEIMInputViewControllerProtocol> *inputVC;
@property (nonatomic) double keyboardHeight;
@property (nonatomic) BOOL isEmotionViewShow;
@property (weak, nonatomic) id<AWEIMEmoticonPanelBoxComponent> boxComponent;
@property (nonatomic) BOOL isAppearing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)p_enableAllowMemberInviteWithConversation:(id)a0;
+ (BOOL)p_enableInviteGroupCategoryWithConversation:(id)a0;
+ (BOOL)p_canShowPopViewWithContext:(id)a0 reason:(id *)a1;
+ (void)trackWithContext:(id)a0 event:(id)a1 reason:(id)a2;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_willDealloc;
- (void)hostVC_viewDidDisappear;
- (void)hostVC_viewWillAppear;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)handleScreenshot:(id)a0;
- (id)screenShotImage;
- (BOOL)p_isSupportCombineShareImportWithMessage:(id)a0;
- (BOOL)isEnableShareVisibleCellsMessage;
- (id)captureSpecificAreaOfMessageListVC:(id)a0;
- (void)trackPopviewShowEvent;
- (id)p_buildGroupChatDictionary;
- (void)didClickShare:(id)a0;
- (void)keyboardDidHide:(id)a0;
- (void).cxx_destruct;
- (void)trackEvent:(id)a0;
- (void)keyboardDidShow:(id)a0;

@end
