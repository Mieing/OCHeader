@class AWETeenAlbumDataController, NSString, AWETeenExtraParamModel, UILabel;

@interface AWETeenAlbumRecommendCollectionView : UICollectionView <UICollectionViewDelegate, UICollectionViewDataSource, AWETeenWaterfallCollectionViewLayoutDelegate>

@property (retain, nonatomic) AWETeenAlbumDataController *dataController;
@property (nonatomic) long long maximumLinesOfItemTitle;
@property (nonatomic) BOOL isScrollAtBottom;
@property (retain, nonatomic) UILabel *headerLabel;
@property (retain, nonatomic) UILabel *footerLabel;
@property (retain, nonatomic) AWETeenExtraParamModel *extra;
@property (nonatomic) BOOL shouldRespondToScroll;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)collectionView:(id)a0 layout:(id)a1 heightForHeaderInSection:(long long)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForHeaderInSection:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 heightForFooterInSection:(long long)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForFooterInSection:(long long)a2;
- (void)p_setupBind;
- (void)p_updateBottomMask;
- (id)initWithDataController:(id)a0 extra:(id)a1;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;

@end
