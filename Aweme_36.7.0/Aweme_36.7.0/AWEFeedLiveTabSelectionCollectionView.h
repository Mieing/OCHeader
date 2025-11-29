@interface AWEFeedLiveTabSelectionCollectionView : UICollectionView

@property (copy, nonatomic) id /* block */ contentSizeDidChangeBlock;
@property (nonatomic) struct CGSize { double width; double height; } previousContentSize;
@property (nonatomic) long long selectedIndex;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1;

@end
