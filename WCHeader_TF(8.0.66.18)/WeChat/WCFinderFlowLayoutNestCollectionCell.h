@class UICollectionView;
@protocol UICollectionViewDelegate, UICollectionViewDataSource;

@interface WCFinderFlowLayoutNestCollectionCell : UICollectionViewCell

@property (retain, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) id<UICollectionViewDelegate> delegate;
@property (weak, nonatomic) id<UICollectionViewDataSource> dataSource;
@property (retain, nonatomic) id attachObject;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reloadData;
- (void).cxx_destruct;

@end
