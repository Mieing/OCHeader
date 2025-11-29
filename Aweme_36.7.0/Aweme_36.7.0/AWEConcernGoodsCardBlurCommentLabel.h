@class UIColor, AWEBlurGradientView, AWEConcernGoodsCardInsetsLabel;

@interface AWEConcernGoodsCardBlurCommentLabel : UIView

@property (retain, nonatomic) AWEConcernGoodsCardInsetsLabel *commentLabel;
@property (retain, nonatomic) AWEBlurGradientView *backgroundView;
@property (retain, nonatomic) UIColor *leftColor;
@property (retain, nonatomic) UIColor *rightColor;

- (void)__setupUI;
- (void)__buildUI;
- (void)configWithComment:(id)a0 andColors:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
