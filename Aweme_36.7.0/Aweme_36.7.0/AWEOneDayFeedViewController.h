@class NSString, UIImageView, AWEUILoadingView, UIView, NSIndexPath;
@protocol AWEOneDayFeedCollectionCellProtocol;

@interface AWEOneDayFeedViewController : AWEBaseListViewController <AWERouterViewControllerProtocol, UICollectionViewDelegate>

@property (retain, nonatomic) UIView *returnView;
@property (retain, nonatomic) UIImageView *moreView;
@property (nonatomic) BOOL isFirstPlayAfterRefresh;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) NSIndexPath *currentPlayIndex;
@property (retain, nonatomic) id<AWEOneDayFeedCollectionCellProtocol> currentPlayCell;
@property (nonatomic) BOOL isViewAppeard;
@property (nonatomic) BOOL isAutoPause;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (BOOL)configWithRouterParamDict:(id)a0;
- (void)customLayoutCollectionView:(id)a0;
- (id)sectionControllerClassArray;
- (void)windowDidResignKeyNotification:(id)a0;
- (void)windowDidBecomeKeyNotification:(id)a0;
- (void)autoPlayIfNeeded;
- (void)autoPauseIfNeeded;
- (void)handleDataState:(long long)a0;
- (void)deleteStoryAtIndex:(long long)a0;
- (void)attemptToStopCurrentPlayCell;
- (void)moreViewTapped;
- (void)applicationDidBecomeActiveHandler;
- (void)applicationWillResignActiveHandler;
- (void)downloadStoryAtIndex:(long long)a0;
- (void)attemptToPlayCellWithIndex:(long long)a0 cell:(id)a1;
- (void)prefetchDataListWithIndexPath:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)endRefreshing;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidEndScrolling;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)setupUI;
- (void)setupData;
- (void)setupCollectionView:(id)a0;

@end
