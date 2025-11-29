@class UILabel, NSString, UIView;

@interface AWEMerchandiseComponentTabBarCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *indicatorView;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) UIView *redPointView;

- (void)autoLayoutSubviews;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
