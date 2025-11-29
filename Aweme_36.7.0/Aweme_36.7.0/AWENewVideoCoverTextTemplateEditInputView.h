@class UIView, NSString, AWENewVideoCoverTextInputQuickView, UITextView, CAShapeLayer, UIButton, AWEVideoCoverTextTabContext, UILabel;
@protocol AWENewVideoCoverTextTemplateEditInputViewDelegate, AWEVideoCoverTextStyleDelegate, AWEVideoCoverRecommendTextViewDelegate;

@interface AWENewVideoCoverTextTemplateEditInputView : UIView <UITextViewDelegate, AWEVideoCoverRecommendTextViewDelegate>

@property (retain, nonatomic) UIView *inputBGView;
@property (retain, nonatomic) UITextView *textView;
@property (retain, nonatomic) UILabel *placeholder;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UILabel *countLabel;
@property (nonatomic) double keyboardHeight;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (nonatomic) long long maxInputCount;
@property (retain, nonatomic) AWENewVideoCoverTextInputQuickView *textInputQuickView;
@property (weak, nonatomic) id<AWENewVideoCoverTextTemplateEditInputViewDelegate> delegate;
@property (weak, nonatomic) id<AWEVideoCoverTextStyleDelegate> styleDelegate;
@property (weak, nonatomic) id<AWEVideoCoverRecommendTextViewDelegate> recommendTextDelegate;
@property (retain, nonatomic) AWEVideoCoverTextTabContext *tabContext;
@property (weak, nonatomic) UITextView *editingTextView;
@property (weak, nonatomic) UITextView *backgroundEditingTextView;
@property (copy, nonatomic) NSString *ignoreText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleKeyboardChangeFrameNoti:(id)a0;
- (void)handleKeyboardWillHideNoti:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })selectedRangeInTextView:(id)a0;
- (void)updateForKeyboard:(id)a0 completion:(id /* block */)a1;
- (void)recommendTextView:(id)a0 didSelectItem:(id)a1;
- (void)showInput:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1 styleDelegate:(id)a2 recommendTextDelegate:(id)a3 tabContext:(id)a4;
- (void)recommendTextView:(id)a0 didTextDataLoaderState:(long long)a1;
- (BOOL)videoCoverTextTabStyleCombined;
- (double)quickViewHeight;
- (void)updateTextViewRelatedUI;
- (double)selfHeight;
- (void).cxx_destruct;
- (void)dealloc;
- (void)textViewDidChange:(id)a0;
- (void)textViewDidChangeSelection:(id)a0;
- (void)setupUI;
- (void)hideAction;
- (void)addObservers;
- (void)p_updateFrame;

@end
