@class NSString, UICollectionView, NSMutableSet, NSMutableDictionary, NSMutableArray;

@interface CAKAlbumSelectedAssetsView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, CAKReorderableForCollectionViewDelegateFlowLayout, CAKReorderableForCollectionViewDataSource, CAKSelectedAssetsViewProtocol>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) long long draggingIndex;
@property (copy, nonatomic) NSString *draggingAssetType;
@property (nonatomic) long long highlightIndex;
@property (nonatomic) BOOL checkMaterialRepeatSelect;
@property (nonatomic) BOOL fromBottomView;
@property (retain, nonatomic) NSMutableSet *requestIdsSet;
@property (retain, nonatomic) NSMutableDictionary *imageDict;
@property (retain, nonatomic) NSMutableArray *assetModelArray;
@property (copy, nonatomic) id /* block */ deleteAssetModelBlock;
@property (copy, nonatomic) id /* block */ changeOrderBlock;
@property (copy, nonatomic) id /* block */ touchAssetModelBlock;
@property (nonatomic) long long sourceType;
@property (nonatomic) BOOL shouldAdjustPreviewPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL disableDraggingItem;
@property (nonatomic) BOOL shouldHideDeleteButton;
@property (copy, nonatomic) id /* block */ updateAssetsBlock;
@property (copy, nonatomic) id /* block */ updateCurrentInsertIndexBlock;
@property (copy, nonatomic) id /* block */ updateNilIndexArrayBlock;
@property (nonatomic) BOOL isVideoAndPicMixed;

- (void)cakReorderableCollectionView:(id)a0 itemAtIndexPath:(id)a1 didMoveToIndexPath:(id)a2;
- (void)reloadSelectView;
- (long long)currentSelectViewHighlightIndex;
- (void)assetSelected:(id)a0 fromViewModel:(id)a1 resourceType:(unsigned long long)a2;
- (void)assetUnSelected:(id)a0 fromViewModel:(id)a1 resourceType:(unsigned long long)a2;
- (void)updateSelectedAssets:(id)a0 fromViewModel:(id)a1 resourceType:(unsigned long long)a2;
- (id)currentAssetModelArray;
- (void)scrollToNextSelectCell;
- (void)updateSelectViewHighlightIndex:(long long)a0;
- (void)updateCheckMaterialRepeatSelect:(BOOL)a0;
- (void)updateSelectViewFromBottomView:(BOOL)a0;
- (void)enableDrageToMoveAssets:(BOOL)a0;
- (void)reseteSelectedAssetCellBorder;
- (void)updateSelectedAssetCellBorderWithIndexPath:(id)a0;
- (void)cakReorderableCollectionView:(id)a0 layout:(id)a1 willBeginDraggingItemAtIndexPath:(id)a2;
- (void)cakReorderableCollectionView:(id)a0 layout:(id)a1 didBeginDraggingItemAtIndexPath:(id)a2;
- (void)cakReorderableCollectionView:(id)a0 layout:(id)a1 willEndDraggingItemAtIndexPath:(id)a2;
- (void)cakReorderableCollectionView:(id)a0 layout:(id)a1 didEndDraggingItemAtIndexPath:(id)a2;
- (void)cakReorderableCollectionView:(id)a0 itemAtIndexPath:(id)a1 willMoveToIndexPath:(id)a2;
- (BOOL)cakReorderableCollectionView:(id)a0 canMoveItemAtIndexPath:(id)a1;
- (BOOL)cakReorderableCollectionView:(id)a0 itemAtIndexPath:(id)a1 canMoveToIndexPath:(id)a2;
- (void)p_updateCachedImagesIfNeeded:(id)a0;
- (void)onDelete:(id)a0;
- (void).cxx_destruct;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
