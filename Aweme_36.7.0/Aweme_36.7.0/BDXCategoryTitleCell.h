@class CALayer, UILabel, NSLayoutConstraint;

@interface BDXCategoryTitleCell : BDXCategoryIndicatorCell

@property (retain, nonatomic) CALayer *titleMaskLayer;
@property (retain, nonatomic) CALayer *maskTitleMaskLayer;
@property (retain, nonatomic) NSLayoutConstraint *maskTitleLabelCenterY;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *maskTitleLabel;
@property (retain, nonatomic) NSLayoutConstraint *titleLabelCenterX;
@property (retain, nonatomic) NSLayoutConstraint *titleLabelCenterY;
@property (retain, nonatomic) NSLayoutConstraint *maskTitleLabelCenterX;

- (id /* block */)preferredTitleZoomAnimationBlock:(id)a0 baseScale:(double)a1;
- (id /* block */)preferredTitleStrokeWidthAnimationBlock:(id)a0 attributedString:(id)a1;
- (id /* block */)preferredTitleColorAnimationBlock:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)reloadData:(id)a0;
- (void)initializeViews;

@end
