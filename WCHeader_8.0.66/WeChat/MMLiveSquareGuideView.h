@class NSData, UIView, MMUIImageView, NSString, WCFinderNavLiveStreamPreFetchParams, UIButton, MMFinderLiveTaskId, NSMutableArray, UICollectionView, MMUILabel, MMTimer;

@interface MMLiveSquareGuideView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate, MMFinderLiveMgrExt, UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) MMTimer *refreshRecommendTimer;
@property (retain, nonatomic) MMTimer *refreshSquareTimer;
@property (nonatomic) BOOL squarePrefetchPerformed;
@property (retain, nonatomic) WCFinderNavLiveStreamPreFetchParams *prefetchParams;
@property (retain, nonatomic) NSMutableArray *recommendItems;
@property (retain, nonatomic) NSData *jumpNavliveBuffer;
@property (nonatomic) BOOL dataLoading;
@property (retain, nonatomic) UIView *dialogView;
@property (retain, nonatomic) MMUILabel *title;
@property (retain, nonatomic) UIButton *leaveBtn;
@property (retain, nonatomic) UIButton *stopShowBtn;
@property (retain, nonatomic) MMUILabel *moreLiveLabel;
@property (retain, nonatomic) MMUILabel *goSquareLabel;
@property (retain, nonatomic) MMUIImageView *arrowImageView;
@property (retain, nonatomic) UICollectionView *videoCollectionView;
@property (copy, nonatomic) id /* block */ closeActionBlock;
@property (copy, nonatomic) id /* block */ goSquareActionBlock;
@property (copy, nonatomic) id /* block */ goLiveActionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (void)setupPageSheetConfig;
- (void)layoutSubviews;
- (void)pageSheetDidRotation;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)setupUI;
- (void)layoutUI;
- (void)showWithAnimated:(BOOL)a0;
- (void)dealloc;
- (id)liveTask;
- (struct CGSize { double x0; double x1; })cellSize;
- (void)processRecommendItem:(id)a0;
- (void)preloadRecommendItem;
- (void)stopPreloadRecommondItem;
- (void)loadRecommendItemCGI:(BOOL)a0 completeBlock:(id /* block */)a1;
- (void)initSquareJumpPrefetch;
- (void)startSquareJumpPrefetch;
- (void)stopPrefetchLiveStream;
- (void)refreshPrefetchData:(unsigned int)a0;
- (void)onEnterForeground;
- (void)onClickedLeave;
- (void)onClickedStopShow;
- (void)onClickedGoSquare;
- (void)onClickedGoLive:(long long)a0;
- (id)audienceLogReporter;
- (void).cxx_destruct;

@end
