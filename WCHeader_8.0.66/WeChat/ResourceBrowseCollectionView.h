@class NSMutableDictionary, UICollectionView, WCFilterView, NSString, NSMutableArray, StorageFilterView;
@protocol ResourceBrowseCollectionViewDelegate;

@interface ResourceBrowseCollectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, WCResourceCollectionViewCellDelegate, WCResourceHeaderViewDelegate, WCFilterViewDelegate, StorageFilterViewDelegate>

@property (retain, nonatomic) NSMutableArray *allMsgInfos;
@property (retain, nonatomic) NSMutableArray *selectedMsgInfos;
@property (retain, nonatomic) NSMutableDictionary *sectionTimeTitleInfo;
@property (retain, nonatomic) NSMutableArray *sectionTitleArray;
@property (retain, nonatomic) NSMutableDictionary *sectionMsgInfos;
@property (retain, nonatomic) NSMutableDictionary *sectionSelectedMsgInfos;
@property (retain, nonatomic) UICollectionView *dataCollectionView;
@property (nonatomic) struct CGSize { double width; double height; } resourceThumbSize;
@property (nonatomic) struct CGSize { double width; double height; } resourceHeaderSize;
@property (nonatomic) double itemMargin;
@property (nonatomic) unsigned long long eCollectonViewOrder;
@property (retain, nonatomic) WCFilterView *filterView;
@property (retain, nonatomic) StorageFilterView *filterView2;
@property (nonatomic) BOOL inAllActionProgress;
@property (weak, nonatomic) id<ResourceBrowseCollectionViewDelegate> delegate;
@property (nonatomic) BOOL showFilter;
@property (retain, nonatomic) NSMutableArray *lastSelectChatLogInfo;
@property (nonatomic) BOOL bAllSelect;
@property (nonatomic) int filterReportScene;
@property (retain, nonatomic) NSString *filterReportSession;
@property (retain, nonatomic) NSString *filterReportSortSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initFilterWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)p_getFilterSection;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andShowFilter:(BOOL)a1;
- (BOOL)isCurrentBrowseViewInShowTimeMode;
- (void)sortMsgInfos;
- (void)updateMsgInfos:(id)a0;
- (void)updateMsgInfos:(id)a0 withSortType:(unsigned long long)a1;
- (id)getSelectedMsgInfos;
- (void)willMoveToParentViewController;
- (void)onSelectionPanelDismissed:(id)a0;
- (id)getCurrentViewController;
- (void)onFilterUpdate:(id)a0;
- (void)onFilterShownOrHidden:(int)a0 isSort:(BOOL)a1 selected:(id)a2;
- (BOOL)isDataEmpty;
- (BOOL)isAllSelected;
- (unsigned long long)getSelectedSize;
- (void)deselectAll;
- (void)selectAll;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (BOOL)isResourceHeaderViewCellAllClick:(id)a0;
- (void)onSelectResourceHeader:(id)a0;
- (void)onUnselectResourceHeader:(id)a0;
- (BOOL)isCellBeSelected:(id)a0;
- (void)onSelectCell:(id)a0;
- (void)onUnselectCell:(id)a0;
- (void)onClickCell:(id)a0;
- (void)p_handleChatLogInfo:(id)a0 cellFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
