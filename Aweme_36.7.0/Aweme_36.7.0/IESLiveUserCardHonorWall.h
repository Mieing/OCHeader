@class NSArray, IESLiveUserCardHonorWallCellModel;

@interface IESLiveUserCardHonorWall : IESLiveUserCardHonorWallContainer

@property (retain, nonatomic) NSArray *itemList;
@property (nonatomic) double viewHeight;
@property (retain, nonatomic) IESLiveUserCardHonorWallCellModel *honorItemModel;

- (double)getViewHeight;
- (id)getHonorViewDecoration;
- (void)generateItemModels;
- (double)getMaxViewHeight;
- (void).cxx_destruct;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)setupUI;

@end
