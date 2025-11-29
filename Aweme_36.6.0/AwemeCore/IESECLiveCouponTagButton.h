@class UIColor, NSString, CAShapeLayer, IESECGoodsPaddingLabel;

@interface IESECLiveCouponTagButton : IESECButton

@property (retain, nonatomic) IESECGoodsPaddingLabel *tagLabel;
@property (retain, nonatomic) CAShapeLayer *dashline;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) UIColor *themeColor;
@property (copy, nonatomic) NSString *tagHeader;
@property (copy, nonatomic) NSString *tagContent;

- (id)tagFont;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })tagEdgeInsets;
- (double)tagTextPadding;
- (double)tagFullHeight;
- (void).cxx_destruct;
- (void)updateContent;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)tagBackgroundColor;

@end
