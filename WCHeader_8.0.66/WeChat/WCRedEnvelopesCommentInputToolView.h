@class NSString, UIImageView, MMGrowTextView, UIButton;
@protocol WCRedEnvelopesCommentInputToolViewDelegate;

@interface WCRedEnvelopesCommentInputToolView : MMUIView <MMGrowTextViewDelegate> {
    long long _keyboardHeight;
    UIImageView *_toolView;
    MMGrowTextView *_textView;
    unsigned long long _positionMode;
    UIButton *_sendButton;
    struct CGPoint { double x; double y; } fPreToolViewOrigin;
    double _fKeyboardAnimationDuration;
    long long _iKeyboardAnimationCurve;
}

@property (weak, nonatomic) id<WCRedEnvelopesCommentInputToolViewDelegate> m_delegate;
@property (weak, nonatomic) NSString *text;
@property (nonatomic) BOOL m_bPositioning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initSubview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)insertString:(id)a0;
- (id)getText;
- (double)getToolViewHeight;
- (void)dealloc;
- (void)NotifyViewControllerPostionChanged:(BOOL)a0 Animated:(BOOL)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)TextViewHeightDidChanged:(id)a0;
- (void)TextViewDidEnter:(id)a0;
- (void)TextDidChanged:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)keyboardWillShow:(double)a0;
- (void)keyboardWillHideInter:(double)a0;
- (void)keyboardWillHide:(BOOL)a0;
- (BOOL)MMGrowTextView:(id)a0 shouldPasteImage:(id)a1;
- (void)MMGrowTextView:(id)a0 pasteImage:(id)a1;
- (void)setKeyboardAnimationDuration:(double)a0;
- (void)setKeyboardAnimationCurve:(long long)a0;
- (BOOL)TextViewDidDelete;
- (void)keyboardDidShow:(double)a0;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)isFirstResponder;
- (void)onTextView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)onTextViewDidChange:(id)a0;
- (void).cxx_destruct;

@end
