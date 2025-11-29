@class UIImageView, UILabel, UIView;

@interface BrandCustomSharePanelCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *iconContainerView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *actionNameLabel;
@property (nonatomic) BOOL actionDisabled;

+ (id)reuseIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)setHighlighted:(BOOL)a0;
- (void)prepareForReuse;
- (void)updateWithAction:(id)a0;
- (void).cxx_destruct;

@end
