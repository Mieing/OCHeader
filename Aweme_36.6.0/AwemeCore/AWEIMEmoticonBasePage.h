@class AWEIMEmoticonCollectionListModel, NSString, AWEIMEmoticonPanelPerformanceTracker, AWEIMEmoticonLayoutCache, NSMutableSet, NSObject, AWEIMEmoticonThemeModel, UICollectionViewCell, AWEIMEmoticonPanelContext;
@protocol AWEIMEmoticonInfoModelProtocol, AWEIMEmoticonPanelSyncComponent, AWEIMEmoticonPanelPageCollectionViewCell, AWEIMEmoticonTrackComponent;

@interface AWEIMEmoticonBasePage : NSObject <UICollectionViewDataSource, UICollectionViewDelegate>

@property (weak, nonatomic) id<AWEIMEmoticonTrackComponent> trackComponent;
@property (weak, nonatomic) id<AWEIMEmoticonPanelSyncComponent> syncComponent;
@property (retain, nonatomic) NSMutableSet *trackedEmoticonShowedIDs;
@property (retain, nonatomic) AWEIMEmoticonPanelPerformanceTracker *performanceTracker;
@property (weak, nonatomic) AWEIMEmoticonPanelContext *context;
@property (readonly, nonatomic) unsigned long long pageType;
@property (nonatomic) unsigned long long pageState;
@property (retain, nonatomic) NSObject<AWEIMEmoticonInfoModelProtocol> *emoticonInfoModel;
@property (weak, nonatomic) UICollectionViewCell<AWEIMEmoticonPanelPageCollectionViewCell> *panelCell;
@property (nonatomic) struct CGPoint { double x; double y; } contentOffset;
@property (nonatomic) BOOL userSelected;
@property (nonatomic) BOOL didDisplayed;
@property (retain, nonatomic) AWEIMEmoticonLayoutCache *layoutCache;
@property (nonatomic) BOOL needsReloadViewModel;
@property (retain, nonatomic) AWEIMEmoticonCollectionListModel *listModel;
@property (retain, nonatomic) AWEIMEmoticonThemeModel *themeModel;
@property (copy, nonatomic) id /* block */ imageDidLoadBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)configPanelCollectionViewCell:(id)a0 page:(id)a1 layoutCache:(id)a2;
+ (id)funcViewModelWithThemeModel:(id)a0;
+ (void)pageStateUpdateWithPage:(id)a0 hasData:(BOOL)a1;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2 listModel:(id)a3;

- (void)configTabCollectionViewCell:(id)a0;
- (void)configPanelCollectionViewCell:(id)a0;
- (void)panelCollectionViewReloadData;
- (id)viewModelWithEmoticonModel:(id)a0 themeModel:(id)a1 placeholder:(id)a2;
- (id)tabCellReuseIdentifier;
- (void)registerTabCollectionView:(id)a0;
- (void)didSelectedTab;
- (id)panelCellReuseIdentifier;
- (void)registerPanelCollectionView:(id)a0;
- (void)setNeedsReloadViewModel;
- (void)reloadViewModelIfNeeded;
- (BOOL)canBePreloaded;
- (void)trackPageDidSelectedWithEnterMethod:(id)a0;
- (void)didReportPanelFirstFrame;
- (void)willDisplayPanelCell:(id)a0;
- (void)didEndDisplayingPanelCell:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1 emoticonViewModel:(id)a2;
- (void)initialCreateListModel;
- (void).cxx_destruct;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)requestData;

@end
