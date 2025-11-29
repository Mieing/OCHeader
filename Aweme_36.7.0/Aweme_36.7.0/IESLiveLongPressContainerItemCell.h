@class UIImageView, UILabel, UIView;

@interface IESLiveLongPressContainerItemCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIView *redDot;

- (void)updateWithFuncModel:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
