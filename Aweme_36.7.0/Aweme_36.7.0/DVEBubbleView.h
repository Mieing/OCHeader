@class UILabel, CAShapeLayer;

@interface DVEBubbleView : UIView

@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (nonatomic) double arrowHeight;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) double cornerRadius;

- (id)createArrowPath:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
