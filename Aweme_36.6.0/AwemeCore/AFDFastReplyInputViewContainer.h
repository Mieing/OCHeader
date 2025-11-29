@class NSAttributedString, NSString, NSDictionary, AWEPageContext, AFDFastReplyInputViewMode, UIViewController;
@protocol AWEPlayInteractionContextProtocol, AWECommentInputViewManagerProtocol;

@interface AFDFastReplyInputViewContainer : NSObject <AFDFastReplyInputViewContainerProtocol>

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) AFDFastReplyInputViewMode *inputViewMode;
@property (retain, nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> *context;
@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) id<AWECommentInputViewManagerProtocol> commentInputViewManager;
@property (nonatomic) BOOL isShowingMessageInputView;
@property (copy, nonatomic) id /* block */ willHideKeyboard;
@property (copy, nonatomic) id /* block */ sendSuccessBlock;
@property (readonly, copy, nonatomic) NSAttributedString *mediaAdaptTextViewAttribute;
@property (retain, nonatomic) NSDictionary *trackerParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showInputView;
- (BOOL)isShowingInputView;
- (void)showCommentInputView;
- (void)showMessageInputView;
- (void)showMessageInputViewWithDefaultEmojiTab:(BOOL)a0;
- (void)sendComment:(id)a0;
- (void)showCommentPanelAndInputView;
- (void)setupCommentInputViewManager:(id)a0;
- (void)p_showMessageInputViewWithDefaultEmojiTab:(BOOL)a0 userModel:(id)a1;
- (void)p_checkToUserWithCompletion:(id /* block */)a0;
- (void)p_sendMessageWithShareModel:(id)a0 content:(id)a1;
- (void)p_checkToShareModelWithCompletion:(id /* block */)a0;
- (id)initWithInputViewMode:(id)a0 context:(id)a1 viewController:(id)a2;
- (void)showInputViewWithClickType:(unsigned long long)a0;
- (void)playEmojiAnimation:(id)a0 viewController:(id)a1;
- (void)sendMessage:(id)a0;
- (void).cxx_destruct;
- (void)sendContent:(id)a0;

@end
