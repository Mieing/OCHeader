@class NSArray, NSMutableDictionary, NSString, NSIndexPath;

@interface AWEDetailNewTrendVideoItemViewController : AWEBaseListViewController <AWERouterViewControllerProtocol, UIScrollViewDelegate>

@property (copy, nonatomic) NSArray *currentPlayVideoUrls;
@property (retain, nonatomic) NSIndexPath *lastVisibleIndexPath;
@property (nonatomic) long long currentPlayVideoItemIndex;
@property (nonatomic) BOOL isScrollToVideoBottomStatus;
@property (nonatomic) BOOL isScrollViewDidScrollPauseVideoPlayStatus;
@property (nonatomic) BOOL isScrollViewDidScrollStopVideoPlayStatus;
@property (nonatomic) long long isScrollViewDidScrollPauseItemIndex;
@property (retain, nonatomic) NSMutableDictionary *videoControlPauseItemInfo;
@property (retain, nonatomic) NSMutableDictionary *videoControlCurrentDurationInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)listDidReloadDataWithCollectionView:(id)a0;
- (BOOL)configWithRouterParamDict:(id)a0;
- (void)listDidPerformBatchUpdatesWithCollectionView:(id)a0;
- (id)layoutForCollectionView;
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:(id)a0 forSectionViewModel:(id)a1;
- (void)pauseVideoPlay;
- (void)resetVideoPlay;
- (void)resetVideoControl;
- (BOOL)visibleItemCanPlayStatus;
- (void)updateVideoControlStatusIfNeeded;
- (void)handleScrollingPlayback;
- (void)startVideoPlay;
- (BOOL)isPauseStatus:(long long)a0;
- (void)bindItemCellAction:(id)a0 indexPath:(id)a1;
- (id)firstFullyVisibleCell:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)init;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setupUI;
- (void)setupCollectionView:(id)a0;

@end
