@class UIColor, NSString, UIFont, UILabel, NSAttributedString;

@interface AWEPOIContentLabel : UIView

@property (nonatomic) BOOL autoZeroContentIfFirstLetterClipped;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) NSAttributedString *attributedText;
@property (retain, nonatomic) UILabel *label;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
