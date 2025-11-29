@class UITextView, ACCTextStickerEditInputHandler, NSString, ACCTextTemplateStickerInputView, AWEModernTextToolBar, NSNumber, UIView;
@protocol ACCTextStickerEditWrapedToobarContainerDelegate;

@interface ACCTextStickerEditWrapedToobarContainer : UIView <UITextViewDelegate>

@property (retain, nonatomic) NSNumber *currentToobarTypeValue;
@property (retain, nonatomic) ACCTextTemplateStickerInputView *textContainerView;
@property (nonatomic) BOOL showNormalBarSimultaneously;
@property (retain, nonatomic) ACCTextStickerEditInputHandler *inputHelper;
@property (readonly, weak, nonatomic) UITextView *textViewForInput;
@property (readonly, nonatomic) AWEModernTextToolBar *normalToolBar;
@property (readonly, nonatomic) UIView *socialToolBar;
@property (weak, nonatomic) id<ACCTextStickerEditWrapedToobarContainerDelegate> delegate;
@property (weak, nonatomic) UITextView *editingTextView;
@property (weak, nonatomic) UITextView *backgroundEditingTextView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setup;
- (void)confirmBtnClick:(id)a0;
- (double)calculateTextBgHeight:(id)a0;
- (void)refreshTextContainerViewHeight;
- (void)switchToToolbarType:(unsigned long long)a0;
- (void)resetCurrentContext;
- (unsigned long long)currentToobarType;
- (id)textViewWthBarType:(unsigned long long)a0;
- (BOOL)isCustomToolType:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 normalToolBar:(id)a1 socialToolBar:(id)a2 showNormalBarSimultaneously:(BOOL)a3;
- (void)updateBarHeight;
- (void)setTextViewForInputContent:(id)a0;
- (void)reloadToolBar;
- (void)p_updateToolbarShow;
- (void)updateToolbarPosition;
- (void)setToolBarHeight;
- (void)refreshTemplateTextInputContainerViewHeight;
- (void).cxx_destruct;
- (BOOL)resignFirstResponder;
- (id)attributes;
- (void)didMoveToWindow;
- (void)textViewDidChange:(id)a0;
- (void)textViewDidChangeSelection:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)setupTextView;

@end
