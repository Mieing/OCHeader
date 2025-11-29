@class NSString, FinderWindowProductInfo_SkuAttrInfoList, MMFinderLiveGoodsSKUSelectViewTail, UICollectionView;
@protocol MMFinderLiveGoodsSKUSelectViewDelegate;

@interface MMFinderLiveGoodsSKUSelectView : UIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>

@property (retain, nonatomic) MMFinderLiveGoodsSKUSelectViewTail *tail;
@property (retain, nonatomic) UICollectionView *skuCollectionView;
@property (nonatomic) BOOL shouldShowImages;
@property (nonatomic) unsigned long long labelsMaxLine;
@property (nonatomic) struct CGSize { double width; double height; } cellSizeWithImage;
@property (retain, nonatomic) FinderWindowProductInfo_SkuAttrInfoList *skus;
@property (weak, nonatomic) id<MMFinderLiveGoodsSKUSelectViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightFor:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (void)fillWithSkuList:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)onTailTapped;
- (void)prepareForReuse;
- (void).cxx_destruct;

@end
