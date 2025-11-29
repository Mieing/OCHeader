@class CAKAlbumCollectionSectionModel, NSString, UICollectionView, DUXBaseLabel;
@protocol CAKAlbumInsightCollectSectionCellDelegate;

@interface CAKAlbumInsightCollectSectionCell : UICollectionViewCell <UICollectionViewDataSource, UICollectionViewDelegate>

@property (retain, nonatomic) DUXBaseLabel *titleLabel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) CAKAlbumCollectionSectionModel *model;
@property (weak, nonatomic) id<CAKAlbumInsightCollectSectionCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)collectionSectionViewHeight;

- (void)configWithModel:(id)a0;
- (void)reloadCollectionItem:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
