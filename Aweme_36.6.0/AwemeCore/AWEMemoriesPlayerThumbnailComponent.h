@class AWEMemoriesPlayerDataController, NSString, AWEMemoriesPlayerThumbnailCollectionView, UIView, AWEMemoriesPlayerThumbnailViewModel, NSMutableArray;
@protocol AWEMemoriesPlayerBottomBarService, AWEMemoriesPlayerCoreService;

@interface AWEMemoriesPlayerThumbnailComponent : AWEMemoriesPlayerBaseComponent <UICollectionViewDelegate, UICollectionViewDataSource, AWEMemoriesPlayerThumbnailLayoutService>

@property (retain, nonatomic) AWEMemoriesPlayerThumbnailViewModel *viewModel;
@property (weak, nonatomic) id<AWEMemoriesPlayerCoreService> playerCoreService;
@property (weak, nonatomic) id<AWEMemoriesPlayerBottomBarService> bottomBarService;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWEMemoriesPlayerThumbnailCollectionView *thumbnailCollectionView;
@property (weak, nonatomic) AWEMemoriesPlayerDataController *dataController;
@property (retain, nonatomic) NSMutableArray *tileModelsArray;
@property (retain, nonatomic) UIView *selectedStatusView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)serviceBinding;
- (void)bindObserver;
- (void)componentDidLoad;
- (void)generateImpactFeedback;
- (void)setupWithMemoriesDataController:(id)a0;
- (id)calculateFocusedIndexAndUpdateMaskViewVisibility;
- (double)editEntranceBottomOffset;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)setupUI;

@end
