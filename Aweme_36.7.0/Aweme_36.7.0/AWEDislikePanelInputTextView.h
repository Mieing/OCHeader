@class AWEDislikeLimitTipView, AWEGrowingTextView;
@protocol AWEDislikePanelInputViewDelegate;

@interface AWEDislikePanelInputTextView : UIView <AWEGrowingTextViewDelegate>

@property (retain, nonatomic) AWEGrowingTextView *textView;
@property (retain, nonatomic) AWEDislikeLimitTipView *tipView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (nonatomic) BOOL isShowingKeyboard;
@property (weak, nonatomic) id<AWEDislikePanelInputViewDelegate> delegate;

- (void)growingTextViewDidChange:(id)a0;
- (void)growingTextView:(id)a0 didChangeHeight:(float)a1;
- (void)growingTextView:(id)a0 willChangeHeight:(float)a1;
- (BOOL)growingTextViewShouldBeginEditing:(id)a0;
- (BOOL)growingTextView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (id)placeHolderText;
- (void)addNotifications;
- (void)configSubviews;
- (void)triggerToSelectView;
- (long long)maxCountForInput;
- (BOOL)isContainsEmoji:(id)a0;
- (id)disable_emoji:(id)a0;
- (BOOL)shouldRevertDeleteChange;
- (BOOL)isContainsSpecialCharacters:(id)a0;
- (id)filterCharacters:(id)a0;
- (long long)asciiTextLength:(id)a0;
- (long long)getValidIndex:(id)a0 maxAsciiLength:(long long)a1;
- (void)startKeyboardShowAnimWithDuration:(double)a0 curve:(long long)a1 animation:(id /* block */)a2 completion:(id /* block */)a3;
- (void)startKeyboardDismissAnimWithDuration:(double)a0 curve:(long long)a1 animation:(id /* block */)a2 completion:(id /* block */)a3;
- (id)maxCountForInputStr;
- (void).cxx_destruct;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)keyboardWillChangeFrame:(id)a0;

@end
