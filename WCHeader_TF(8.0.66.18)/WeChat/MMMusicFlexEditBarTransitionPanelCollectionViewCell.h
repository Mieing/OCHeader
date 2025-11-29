@class UIImageView, MMUILabel, CAShapeLayer;

@interface MMMusicFlexEditBarTransitionPanelCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) CAShapeLayer *selectedBorderLayer;

+ (id)reuseIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)internalInit;
- (void)layoutSubviews;
- (void)updateModel:(id)a0;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;

@end
