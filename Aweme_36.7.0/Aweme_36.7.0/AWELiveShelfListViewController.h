@class UIViewController, NSString, AWEFeedRefreshFooter, CALayer, NSNumber, AWELiveShelfHeaderLoadingView;
@protocol AWELiveShelfPagingListDelegate;

@interface AWELiveShelfListViewController : AWEBaseListViewController <UIScrollViewDelegate>

@property (nonatomic) double recordScrollViewOffsetY;
@property (nonatomic) BOOL tableviewPositionNotScroll;
@property (nonatomic) double scrollTopInset;
@property (retain, nonatomic) CALayer *maskLayer;
@property (retain, nonatomic) NSNumber *maskLayerTopInset;
@property (retain, nonatomic) AWELiveShelfHeaderLoadingView *mjHeader;
@property (retain, nonatomic) AWEFeedRefreshFooter *mjFooter;
@property (nonatomic) double originAdjustOffsetY;
@property (nonatomic) BOOL needDisableActions;
@property (nonatomic) BOOL isClosed;
@property (weak, nonatomic) UIViewController<AWELiveShelfPagingListDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)listWillPerformBatchUpdatesWithCollectionView:(id)a0;
- (void)listDidPerformBatchUpdatesWithCollectionView:(id)a0;
- (id)sectionControllerClassArray;
- (id)createSectionControllerForSectionViewModel:(id)a0;
- (void)setupBinding;
- (void)configTableViewTopInset:(double)a0;
- (void)configTableViewBottomInset:(double)a0;
- (void)configTopMask:(double)a0;
- (long long)getCurrentGoodsNum;
- (void)filterCardListWithTabId:(long long)a0;
- (void)scrollToTop;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)viewDidLayoutSubviews;
- (id)init;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)setupCollectionView:(id)a0;

@end
