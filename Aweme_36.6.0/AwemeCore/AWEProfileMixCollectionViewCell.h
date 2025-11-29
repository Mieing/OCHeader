@class AWEProfileMixViewController;

@interface AWEProfileMixCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) AWEProfileMixViewController *mixViewController;

+ (struct CGSize { double x0; double x1; })itemSizeWithCollectionView:(id)a0;
+ (struct CGSize { double x0; double x1; })itemSizeWithCollectionView:(id)a0 mixDataSource:(id)a1;
+ (id)identifier;

- (void)config:(id)a0;
- (void).cxx_destruct;
- (void)refresh;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
