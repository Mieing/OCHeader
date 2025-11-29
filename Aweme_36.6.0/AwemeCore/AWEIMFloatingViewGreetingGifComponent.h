@class AWEIMGreetingMessage, NSString, AWEIMGreetingContentView, NSMutableSet, UIView;

@interface AWEIMFloatingViewGreetingGifComponent : AWEIMComponentBase <AWEIMMessageListInputModuleAction, AWEIMMessageListBottomFloatingViewProtocol, AWELocoalGifMessageDismissable, AWEIMMessageListDataAction>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWEIMGreetingContentView *greetingContentView;
@property (nonatomic) BOOL isDisplaying;
@property (nonatomic) BOOL doneFirstShow;
@property (retain, nonatomic) AWEIMGreetingMessage *displayMessage;
@property (nonatomic) BOOL sendFromMeDetect;
@property (retain, nonatomic) NSMutableSet *displayedSet;
@property (nonatomic) BOOL dismissOpt;
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

- (void)closeButtonClicked;
- (void)hideViewIfNeed;
- (void)showViewIfNeed;
- (id)shouldContinueForPriorityObject:(id)a0;
- (id)shouldRemoveForPriorityObject:(id)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)didReceiveNewMessage:(id)a0 reason:(long long)a1;
- (void)beforeAsync_didFetchMsgWithMessageGroupArray:(id)a0 hasMore:(BOOL)a1 direction:(unsigned long long)a2 shouldAutoLoadMore:(BOOL)a3 isFirstLoad:(BOOL)a4;
- (void)willFilterMessage:(id)a0;
- (id)viewToDisplayInBottomContainer;
- (BOOL)canShowBarWhenInputTypeChangedTo:(long long)a0;
- (void)dismissGreetingGifMessage:(id)a0;
- (void)didUpdateInputVCFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inputViewType:(long long)a1 oldInputViewType:(long long)a2;
- (void)dismissIfNeeded;
- (id)messageViewController;
- (BOOL)canShowBirthdayGreetingSticker;
- (void)tryShowBirtydayGreetingSticker;
- (void)tryShowMateHelloSticker;
- (void)setupDisplayMessageIfNeeded:(id)a0;
- (void)autoShowGreetingGifViewIfNeeded;
- (BOOL)canShowMateHelloSticker;
- (void)p_autoLayoutActionBarShow:(BOOL)a0;
- (void)p_afterShowGreetingView;
- (void)sendSelectEmojiWithGreetingEmoticon:(id)a0 andShowedIndex:(long long)a1;
- (void)p_updateBirthdayGreetingDismissDateIfNeed;
- (id)p_showIdsWithShowedIndex:(long long)a0;
- (void)p_showGreetingGifView;
- (void)setupDisplayBirthdayMessageIfNeeded:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)conversation;
- (void)dealloc;
- (void)deleteMessage;

@end
