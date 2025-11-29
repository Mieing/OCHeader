@class AWEIMMessageBaseViewController, NSString, AWEIMInterEmojiMatcherController, NSNumber;
@protocol AWEIMMessageListDataInterface;

@interface AWEIMInteractiveEmojiInteractor : AWEIMComponentBase <AWEIMMessageListDataAction, IESIMCellRealDisplayProxyAction, AWEIMInteractiveEmojiInteractorInterface>

@property (readonly, weak, nonatomic) AWEIMMessageBaseViewController *messageViewController;
@property (retain, nonatomic) AWEIMInterEmojiMatcherController *matcher;
@property (nonatomic) BOOL isChatNotOnScreen;
@property (nonatomic) BOOL isFirstScreenShowed;
@property (retain, nonatomic) NSNumber *maxMatchIndex;
@property (nonatomic) BOOL didLoadFirstPage;
@property (weak, nonatomic) id<AWEIMMessageListDataInterface> messageListData;
@property (nonatomic) BOOL isCoveredByOtherVC;
@property (nonatomic) BOOL isCoveredByPresentingVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)clearInteractiveEmojiGlobalIndexForConversation:(id)a0;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)hostVC_viewDidAppearAndRender;
- (void)didFetchMsgWithMessageGroupArray:(id)a0 hasMore:(BOOL)a1 direction:(unsigned long long)a2 shouldAutoLoadMore:(BOOL)a3 isFirstLoad:(BOOL)a4;
- (void)hostVC_viewWillDisappear;
- (void)tableView:(id)a0 awe_partDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)p_appDidBecomeActive:(id)a0;
- (void)p_keyboardWillShow:(id)a0;
- (void)p_viewDidAppear;
- (id)listViewModel;
- (void)tryShowAnimationOnScreenInConversation:(id)a0 withListViewModel:(id)a1;
- (void)tryShowAnimation:(id)a0 inConversation:(id)a1 withListViewModel:(id)a2 force:(BOOL)a3;
- (void)setEmojiMaxIndex:(long long)a0 forConversation:(id)a1;
- (long long)emojiMaxIndex:(id)a0;
- (void)p_keyboardWillHide:(id)a0;
- (BOOL)isSyncExtMatchEnableWithMessage:(id)a0;
- (void)p_setFormatMsgEmojiMaxIndex:(id)a0 index:(long long)a1 conversationID:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;

@end
