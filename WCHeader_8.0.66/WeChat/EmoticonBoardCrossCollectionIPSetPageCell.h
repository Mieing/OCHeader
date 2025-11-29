@class UILongPressGestureRecognizer, NSArray, NSMutableDictionary, EmoticonBoardCrossCollectionEmoticonHeaderModel, NSString, NSMutableArray, NSIndexPath;
@protocol EmoticonBoardCrossCollectionIPSetPageDelegate;

@interface EmoticonBoardCrossCollectionIPSetPageCell : EmoticonBoardCrossCollectionBasePageCell <UICollectionViewDataSource, EmoticonBoardCrossCollectionStoreGridCellDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) NSMutableDictionary *emoticonListDict;
@property (retain, nonatomic) NSMutableDictionary *packDownloadStatusDict;
@property (retain, nonatomic) NSMutableDictionary *emoticonListCountDict;
@property (retain, nonatomic) NSMutableArray *pidList;
@property (retain, nonatomic) NSMutableArray *needReloadPids;
@property (retain, nonatomic) NSArray *packedIPArray;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (retain, nonatomic) EmoticonBoardCrossCollectionEmoticonHeaderModel *headerViewModel;
@property (nonatomic) BOOL isReloadingSections;
@property (weak, nonatomic) id<EmoticonBoardCrossCollectionIPSetPageDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)configCollectionViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)collectionViewLayout;
- (void)configGestureRecognizer;
- (void)refreshEmoticonForPid:(id)a0;
- (void)setSectionInfo:(id)a0;
- (unsigned long long)maximumNumberOfItemsInRow;
- (id)emoticonListForWrap:(id)a0;
- (unsigned long long)emoticonCountForWrap:(id)a0;
- (BOOL)hasDescForPid:(id)a0;
- (BOOL)isPackDownloadedForPid:(id)a0;
- (id)genHeadViewModel;
- (void)reloadHeader;
- (BOOL)sectionVisibleForPid:(id)a0;
- (void)reloadSectionForPid:(id)a0;
- (void)tryReloadNextPid;
- (void)loopReloadSections;
- (void)doReloadNextPid;
- (void)adjustPreviewComponetColorIfNeed:(id)a0 emoticonWrap:(id)a1;
- (void)onLongPressToPreview:(id)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)onTapEmoticonWrap:(id)a0 atIndex:(long long)a1 withPid:(id)a2;
- (void)shouldShowEmoticonPreviewForWrap:(id)a0 atIndex:(long long)a1 withGridOffset:(struct CGPoint { double x0; double x1; })a2 description:(id)a3 sender:(id)a4;
- (void)shouldHideEmoticonPreview;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (void)OnEmoticonStoreItemChanged:(id)a0;
- (void)onDesigner:(id)a0 changReddotStatus:(BOOL)a1 newReddotPids:(id)a2;
- (void)onDesignerPersonalInfoUpdated:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;

@end
