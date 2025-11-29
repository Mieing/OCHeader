@class UITextView, NSString, IESLiveEmojiTextParser, IESLiveVSMessageBoardInputPanelConfig;
@protocol IESLiveVSMessageBoardInputDegelate;

@interface IESLiveVSMessageBoardInputView : UIView <UITextViewDelegate>

@property (retain, nonatomic) IESLiveVSMessageBoardInputPanelConfig *config;
@property (retain, nonatomic) UITextView *commentCopyTextView;
@property (nonatomic) long long limitCount;
@property (retain, nonatomic) UITextView *placeHolderLabel;
@property (retain, nonatomic) IESLiveEmojiTextParser *textParser;
@property (copy, nonatomic) NSString *currentText;
@property (weak, nonatomic) id<IESLiveVSMessageBoardInputDegelate> delegate;
@property (retain, nonatomic) UITextView *commentTextView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)disableLocalizations;
- (void)activateKeyboardMode:(BOOL)a0;
- (void)refreshPlaceHolderStr:(id)a0;
- (void)setupTextParser;
- (void)setupPlaceHoderLabel;
- (double)getCurrentTextViewLengthWithTexView:(id)a0 cutTextWhenBeyondLimit:(BOOL)a1;
- (BOOL)checkTextViewIfReachMaxLengthWithInsertText:(id)a0 replaceLength:(long long)a1;
- (void)replaceWithText:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })currentCursorRange;
- (void)replaceWithText:(id)a0;
- (id)commentEmojiResourceManager;
- (void)insertText:(id)a0 asGroup:(BOOL)a1;
- (void)updateBackgroundColorForUseSkin:(BOOL)a0;
- (void)checkShouldScrollWithWidth:(double)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithConfig:(id)a0;
- (BOOL)textViewShouldBeginEditing:(id)a0;
- (void)textViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)setupViews;
- (void)backspace;
- (void)setupTextView;

@end
