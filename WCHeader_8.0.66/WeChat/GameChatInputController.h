@class NSString;

@interface GameChatInputController : WCInputController <EmoticonSearchHalfScreenViewControllerDelegate>

@property (nonatomic) BOOL isShowingSearchView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)initNotification;
- (void)dealloc;
- (void)setFKeyboardHeight:(double)a0;
- (void)liveInputKeyboardDidShow:(id)a0;
- (void)notifyInputViewHeightChanged;
- (void)onSearchEmoticonViewControllerSendEmoticon:(id)a0;
- (void)onHalfScreenPageDidClose:(id)a0 action:(long long)a1;
- (void)onSearchViewHide;
- (void)showSearchEmoticonViewController;
- (BOOL)shouldInterceptExpressionPanelOnKeyboardChanged:(BOOL)a0;
- (id)getChatUsername;

@end
