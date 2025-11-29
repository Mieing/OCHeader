@class EmoticonBoardCrossCollectionEmoticonHeaderView, UIView, NSIndexPath, UILongPressGestureRecognizer, NSArray, EmoticonLoadMoreFooterView, NSString, EmoticonBoardCrossCollectionEmoticonHeaderModel, NSMutableArray, MMUIActivityIndicatorView;
@protocol EmoticonBoardCrossCollectionEmoticonPageDelegate;

@interface EmoticonBoardCrossCollectionEmoticonPageCell : EmoticonBoardCrossCollectionBasePageCell <UICollectionViewDataSource, IStoreEmotionDesignerReddotMgrExt, MMLoadMoreCollectionViewDelegate>

@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (retain, nonatomic) EmoticonBoardCrossCollectionEmoticonHeaderModel *headerViewModel;
@property (retain, nonatomic) EmoticonBoardCrossCollectionEmoticonHeaderModel *headerRecentUseModel;
@property (weak, nonatomic) EmoticonBoardCrossCollectionEmoticonHeaderView *headerView;
@property (retain, nonatomic) EmoticonLoadMoreFooterView *footerView;
@property (retain, nonatomic) UIView *packSyncTip;
@property (retain, nonatomic) MMUIActivityIndicatorView *packSyncIndicator;
@property (retain, nonatomic) NSMutableArray *recnetUseWraps;
@property (weak, nonatomic) id<EmoticonBoardCrossCollectionEmoticonPageDelegate> delegate;
@property (nonatomic) BOOL hasDescription;
@property (weak, nonatomic) NSArray *emoticonList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)configCollectionViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configGestureRecognizer;
- (void)initPackSyncTipWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)refreshEmoticonForPid:(id)a0;
- (void)refreshWithLoadDone:(BOOL)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (unsigned long long)maximumNumberOfItemsInRow;
- (void)setSectionInfo:(id)a0;
- (BOOL)isCellFullyVisibleAtIndexPath:(id)a0;
- (void)checkFullyVisibleCells;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)onLongPressToPreview:(id)a0;
- (BOOL)isCustomPid:(id)a0;
- (BOOL)isCameraPid:(id)a0;
- (BOOL)isCustomOrCameraPid:(id)a0;
- (BOOL)needEnableLoadMore;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)adjustPreviewComponetColorIfNeed:(id)a0 emoticonWrap:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)bindRecentUseHeaderView:(id)a0;
- (void)configHeaderRecentUseModel;
- (void)bindHeaderView:(id)a0;
- (void)configHeaderModel;
- (void)configHeaderModelUpdateLogic;
- (void)reloadHeader;
- (void)OnEmoticonStoreItemChanged:(id)a0;
- (void)onDesigner:(id)a0 changReddotStatus:(BOOL)a1 newReddotPids:(id)a2;
- (void)onDesignerPersonalInfoUpdated:(id)a0;
- (void)scrollViewWillBeginDecelerating:(id)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)onLoadMore;
- (void)onLoadDone;
- (void).cxx_destruct;

@end
