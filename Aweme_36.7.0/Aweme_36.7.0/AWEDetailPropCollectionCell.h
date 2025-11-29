@class UIImageView, UIView;

@interface AWEDetailPropCollectionCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIView *selectedIndicatorView;

- (void)showSelectedIndicatorView:(BOOL)a0 animate:(BOOL)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end
