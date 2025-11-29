@class FinderFeedEcProductCard, EcsFinderFeedSingleProductViewModel, UINavigationController;

@interface EcsFinderFeedSingleProductBaseView : UIView

@property (nonatomic) struct CGSize { double width; double height; } viewSize;
@property (retain, nonatomic) EcsFinderFeedSingleProductViewModel *dataVM;
@property (readonly, nonatomic) FinderFeedEcProductCard *productCard;
@property (readonly, nonatomic) UINavigationController *finderNavigationController;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;
- (void)onViewSizeChanged;
- (void).cxx_destruct;

@end
