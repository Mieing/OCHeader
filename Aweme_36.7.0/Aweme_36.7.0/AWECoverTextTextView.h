@class UITextView;

@interface AWECoverTextTextView : UITextView

@property (nonatomic) BOOL needsUpdateFont;
@property (retain, nonatomic) UITextView *placeholderView;

- (void)p_updatePlaceholderTextView;
- (void).cxx_destruct;
- (void)setTextAlignment:(long long)a0;
- (BOOL)resignFirstResponder;
- (void)setFont:(id)a0;
- (BOOL)becomeFirstResponder;
- (void)setTextContainerInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)setText:(id)a0;
- (void)setAttributedText:(id)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
