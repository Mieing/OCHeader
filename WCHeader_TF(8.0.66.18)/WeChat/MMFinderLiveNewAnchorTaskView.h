@class MMUIActivityIndicatorView, NSString, WCFinderLiveAnchorLogReporter, MMUIView, WCFinderLiveStarterReporter, CAGradientLayer, MMFinderLiveNewAnchorTaskViewModel, MMFinderLiveTaskId, UICollectionView, UIScrollView;

@interface MMFinderLiveNewAnchorTaskView : MMPageSheetBaseView <UICollectionViewDelegate, UICollectionViewDataSource, MMFinderLiveNewAnchorTaskViewModelDelegate>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) MMFinderLiveNewAnchorTaskViewModel *taskVM;
@property (nonatomic) long long curIndex;
@property (retain, nonatomic) WCFinderLiveStarterReporter *starterReporter;
@property (retain, nonatomic) WCFinderLiveAnchorLogReporter *liveReporter;
@property (retain, nonatomic) UIScrollView *detailContainerView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) MMUIActivityIndicatorView *loadingView;
@property (retain, nonatomic) UICollectionView *taskCollectionView;
@property (retain, nonatomic) MMUIView *statusView;
@property (retain, nonatomic) UICollectionView *taskStatusCollectionView;
@property (retain, nonatomic) CAGradientLayer *statusGradientLayer;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (nonatomic) BOOL shouldShowCompletePageAnchorNotice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0 scene:(unsigned int)a1;
- (void)setupPageSheetConfig;
- (void)layoutSubviews;
- (void)pageSheetDidRotation;
- (void)setupUI;
- (void)setupTaskContent;
- (void)setupTaskStatus;
- (void)layoutUI;
- (void)layoutTaskContent;
- (void)layoutTaskStatus;
- (id)rightNavButton;
- (void)showWithAnimated:(BOOL)a0;
- (void)dealloc;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })taskCellSize;
- (struct CGSize { double x0; double x1; })statusCellSize;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)onNewAnchorQuestUpdated:(id)a0;
- (void)initData;
- (void)reportCard;
- (id)liveTask;
- (void)jumpRewardHomeWithJumpInfo:(id)a0;
- (void)onRightButtonTapped;
- (void).cxx_destruct;

@end
