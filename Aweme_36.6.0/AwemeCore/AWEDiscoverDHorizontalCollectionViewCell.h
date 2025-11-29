@class UIViewController;
@protocol AWEDiscoverDHorizontalCellController;

@interface AWEDiscoverDHorizontalCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIViewController<AWEDiscoverDHorizontalCellController> *cellController;
@property (copy, nonatomic) id /* block */ didSelectWithCellBlock;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)singleTap;

@end
