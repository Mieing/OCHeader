@class IESLiveUserCardStore, NSString, UICollectionView, IESLiveUserCardHonorWallItemContainer, IESLiveUserCardBigGiftExhibitionView, IESLiveUserCardFansGroupOrVIPView;

@interface IESLiveUserCardHonorWallContainer : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) IESLiveUserCardHonorWallItemContainer *itemContainer;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IESLiveUserCardFansGroupOrVIPView *fansGroupView;
@property (retain, nonatomic) IESLiveUserCardBigGiftExhibitionView *bigGiftExhibitionView;
@property (retain, nonatomic) IESLiveUserCardStore *store;
@property (nonatomic) BOOL landscapeMode;
@property (nonatomic) BOOL canExpand;
@property (retain, nonatomic) NSString *cellID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)getViewHeight;
- (void)usercardOpenFinished;
- (id)createUICollectionView;
- (id)initWithStore:(id)a0 landscape:(BOOL)a1;
- (BOOL)threeBottomOperatingAreasMode;
- (BOOL)twoBottomOperatingAreasMode;
- (id)getHonorViewDecoration;
- (BOOL)newShowFansGroupOrVIPModeWithIndexPath:(id)a0;
- (BOOL)needShowBigGiftExhibitionWithIndexPath:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)setupUI;

@end
