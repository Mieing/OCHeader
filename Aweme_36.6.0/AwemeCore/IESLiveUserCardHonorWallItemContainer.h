@class IESLiveProfileBusinessArea, IESLiveHonorWallV2, UICollectionView, NSString, IESLiveUserCardStore, NSMutableArray;

@interface IESLiveUserCardHonorWallItemContainer : UIView <UICollectionViewDataSource, UICollectionViewDelegate, IESLiveUserCardHonorWallViewProtocol>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) BOOL landscapeMode;
@property (retain, nonatomic) IESLiveHonorWallV2 *honorWallV2;
@property (retain, nonatomic) IESLiveProfileBusinessArea *honorWallV3;
@property (nonatomic) struct CGSize { double width; double height; } hornorViewSize;
@property (retain, nonatomic) NSString *cellID;
@property (retain, nonatomic) IESLiveUserCardStore *store;
@property (retain, nonatomic) NSMutableArray *itemList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)getViewHeight;
- (id)createUICollectionView;
- (id)initWithStore:(id)a0 landscape:(BOOL)a1;
- (id)getHonorViewDecoration;
- (id)fetchHonorViewDecoration;
- (void)createItemList;
- (id)itemClassRegister:(long long)a0;
- (BOOL)checkItem:(id)a0;
- (BOOL)twoElementsPerLine;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)setupUI;

@end
