@class UIView;

@interface AWEDiscoverDHorizontalPlaceholderCell : UICollectionViewCell

@property (retain, nonatomic) UIView *mainPlaceholderView;
@property (retain, nonatomic) UIView *titlePlaceholderView;
@property (retain, nonatomic) UIView *descPlaceholderView;

+ (id)reuseIdentifier;

- (void)configureUI;
- (id)cellController;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
