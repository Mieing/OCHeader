@class NSString, UIFont, UIColor;

@interface AWEAICreatePlaceholdTextView : UITextView

@property (nonatomic) double placeholderTopPadding;
@property (copy, nonatomic) NSString *placeholder;
@property (retain, nonatomic) UIFont *placeholderFont;
@property (retain, nonatomic) UIColor *placeholderColor;

- (void)textDidChanged:(id)a0;
- (void).cxx_destruct;
- (void)setFont:(id)a0;
- (void)setText:(id)a0;
- (void)setAttributedText:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
