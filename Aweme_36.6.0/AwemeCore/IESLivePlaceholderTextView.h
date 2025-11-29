@class NSString, UIColor;

@interface IESLivePlaceholderTextView : UITextView

@property (copy, nonatomic) NSString *placeholder;
@property (retain, nonatomic) UIColor *placeholderTextColor;
@property (nonatomic) double placeholderTopPadding;
@property (nonatomic) BOOL isTextAlignCenter;

- (void)textDidChanged:(id)a0;
- (void)setPlaceHolderTextColor:(id)a0;
- (void).cxx_destruct;
- (void)setText:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setPlaceHolder:(id)a0;

@end
