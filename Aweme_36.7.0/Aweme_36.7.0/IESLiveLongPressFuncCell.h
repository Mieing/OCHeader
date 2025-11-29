@class UIImageView, CAShapeLayer, UILabel, UIView;

@interface IESLiveLongPressFuncCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (retain, nonatomic) UIView *containerView;

- (void)updateCellCorner:(BOOL)a0 cornerPosition:(unsigned long long)a1 topPadding:(double)a2 bottomPadding:(double)a3 showLine:(BOOL)a4;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
