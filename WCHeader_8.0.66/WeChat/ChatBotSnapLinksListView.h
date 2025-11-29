@class MinimizeTaskData, UICollectionView, NSString, UICollectionViewFlowLayout, NSMutableArray;

@interface ChatBotSnapLinksListView : UIView <IMinimizeTaskDataChangeDelegateInterface, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, IMinimizeTaskDelegateInterface, MiniTaskCollectionCellDelegate, IMiniMizeUserdRecordUpdateExt>

@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) MinimizeTaskData *currOpenTaskData;
@property (retain, nonatomic) NSMutableArray *snapLinksCellDataArray;
@property (nonatomic) BOOL isShowPhoto;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isShowPotho:(BOOL)a1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)layoutCollectionView;
- (void)resetData;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })snapshotImagePreferredSize;
- (unsigned long long)currentCellCount;
- (void)onMiniTaskCollectionCellDelete:(id)a0 isFromMenu:(BOOL)a1;
- (void)jumpMsgSession:(id)a0;
- (void)jumpStarWithMIniTaskData:(id)a0 cell:(id)a1;
- (void)onMiniTaskCollectionCellFavorite:(id)a0 isFromMenu:(BOOL)a1;
- (void)onMiniTaskCollectionCellAddRemind:(id)a0;
- (void)onMiniTaskCollectionCellRemoveRemind:(id)a0;
- (void)removeMemoryListInfoForCell:(id)a0;
- (void)onRemoveMinimizedTaskData:(id)a0;
- (void).cxx_destruct;

@end
