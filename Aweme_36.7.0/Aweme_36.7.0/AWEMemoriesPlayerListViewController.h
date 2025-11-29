@class AWEMemoriesPlayerControlManager, AWEMemoriesPlayerDataController, AWEMemoriesPlayerConfigManager, AWEMemoriesPlayerContext, NSString, AWEBaseListSectionController;
@protocol AWEMemoriesPlayerSectionControllerProtocol;

@interface AWEMemoriesPlayerListViewController : AWEBaseListViewController <UIScrollViewDelegate>

@property (weak, nonatomic) AWEBaseListSectionController<AWEMemoriesPlayerSectionControllerProtocol> *currentSectionController;
@property (copy, nonatomic) id /* block */ dataSourceBlock;
@property (nonatomic) BOOL hasIgnoreFirstTime;
@property (nonatomic) BOOL isFirstLoaded;
@property (weak, nonatomic) AWEMemoriesPlayerDataController *dataController;
@property (retain, nonatomic) AWEMemoriesPlayerContext *playerContext;
@property (retain, nonatomic) AWEMemoriesPlayerControlManager *playerControlManager;
@property (retain, nonatomic) AWEMemoriesPlayerConfigManager *playerConfigManager;
@property (copy, nonatomic) id /* block */ firstFrameBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)listDidReloadDataWithCollectionView:(id)a0;
- (id)layoutForCollectionView;
- (id)sectionControllerClassArray;
- (void)playNextItem;
- (void)pauseByManual:(BOOL)a0;
- (void)playByManual:(BOOL)a0;
- (void)playNextSection;
- (void)scrollToIndex:(unsigned long long)a0 animation:(BOOL)a1;
- (void)playWhenDidBecomeActive;
- (void)pauseWhenWillResignActive;
- (void)fetchCurrentSectionControllerAndPlayIfNeeded;
- (void)playByManual:(BOOL)a0 isChangeSection:(BOOL)a1;
- (id)fetchCurrentSectionController;
- (void)trackAutoPlay;
- (void)trackMemoriesVVWithSectionController:(id)a0;
- (void)preloadMoreDataIfNeeded;
- (void)preloadNeighborItems;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setupDataSource;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupCollectionView:(id)a0;

@end
