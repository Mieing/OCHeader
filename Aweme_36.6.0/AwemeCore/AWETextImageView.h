@class UIColor, NSString, UIImageView, UIFont, UILabel, NSAttributedString, UIImage;

@interface AWETextImageView : UIView

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *textFont;
@property (copy, nonatomic) NSAttributedString *attrbutedText;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) unsigned long long direction;
@property (nonatomic) unsigned long long layout;
@property (nonatomic) unsigned long long alignment;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } textEdgeInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } imageEdgeInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } hitTestEdgeInsets;

- (struct CGSize { double x0; double x1; })p_imageContentSize;
- (struct CGSize { double x0; double x1; })p_textContentSize;
- (struct CGSize { double x0; double x1; })p_contentSize;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
