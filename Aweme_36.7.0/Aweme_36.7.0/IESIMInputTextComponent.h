@class IESIMGrowingTextView, NSString;

@interface IESIMInputTextComponent : AWEIMComponentBase <IESIMInputTextComponentInterface, IESIMGrowingTextViewDelegate, IESIMInputEmotionComponentAction, IESIMInputThemeChangedAction, IESIMInputStateChangedActionProtocol, IESIMInputLayoutAction>

@property (nonatomic) long long maxLength;
@property (retain, nonatomic) IESIMGrowingTextView *textView;
@property (nonatomic) BOOL needSkipChangeTypeToText;
@property (retain, nonatomic) NSString *customPlaceHolder;
@property (nonatomic) BOOL inputStateChanged;
@property (nonatomic) long long currentInputViewTextLength;
@property (nonatomic) long long characterChangedCountBeforeSend;
@property (retain, nonatomic) IESIMGrowingTextView *growingTextView;
@property (nonatomic) BOOL didPastedBeforeSend;
@property (nonatomic) BOOL isResignFirstResponder;
@property (nonatomic) BOOL isTextViewRefreshingHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)growingTextViewDidChange:(id)a0;
- (void)growingTextViewDidEndEditing:(id)a0;
- (void)growingTextViewDidChangeSelection:(id)a0;
- (void)growingTextView:(id)a0 willChangeHeight:(float)a1;
- (id)growingTextView:(id)a0 itemsForDrag:(id)a1;
- (BOOL)growingTextView:(id)a0 shouldInteractWithTextAttachment:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (BOOL)growingTextViewShouldEndEditing:(id)a0;
- (BOOL)growingTextView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)emoticonViewDidSelectDelete:(id)a0;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (id)customPlaceholderColor;
- (void)inputViewControllerDidChangeHeight;
- (void)invoke_growingTextView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)p_inputViewController:(id)a0 growingTextViewDidChange:(id)a1;
- (id)getCurrentTextColor;
- (long long)pp_fontSize;
- (void)resetTypingAttributes:(id)a0;
- (BOOL)pp_successRefreshTextViewUI;
- (BOOL)shouldCreateNewAttributedStringInstance;
- (void)reHighlightAtText;
- (void)lineFeedItemClicked:(id)a0;
- (BOOL)checkTextViewTextMessageLength;
- (void)updateCustomPlaceHolder:(id)a0;
- (void)updateComponentFromState:(long long)a0 toState:(long long)a1;
- (void)inputThemeChangedWithThemeStyle:(long long)a0;
- (void)refreshBackgroundWithBackGroundImage:(BOOL)a0;
- (void)triggerLayoutAfterButtonAdjustWithWidth:(double)a0 left:(double)a1 leftButtons:(id)a2 rightButtons:(id)a3;
- (void).cxx_destruct;
- (id)placeholder;
- (BOOL)hasTextContent;

@end
