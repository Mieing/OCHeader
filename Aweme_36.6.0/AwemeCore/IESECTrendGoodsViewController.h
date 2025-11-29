@class UIView, IESECTracker, NSArray, IESECGradientView, IESECDurationHelper, NSString, IESECGoodsVideoSearchResultEmptyView, UICollectionView, IESECTrendGoodsContext, NSIndexPath;
@protocol IESECTrendGoodsDataService;

@interface IESECTrendGoodsViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, IESECGoodsVideoSearchResultLayoutProtocol, IESECTrendGoodsSetCardDelegate, IESECTrendGoodsProductCardDelegate, IESECGoodsVideoSearchResultEmptyViewProtocol, IESECTrendGoodsVideoCardDelegate, IESECCommentBarExpandContentProtocol>

@property (retain, nonatomic) IESECTrendGoodsContext *context;
@property (retain, nonatomic) UIView *topBarView;
@property (retain, nonatomic) UICollectionView *mainCollectionView;
@property (retain, nonatomic) id<IESECTrendGoodsDataService> dataController;
@property (retain, nonatomic) IESECTracker *tracker;
@property (copy, nonatomic) NSArray *feedBackList;
@property (retain, nonatomic) NSIndexPath *lastAppeardFeedBackCellIndexPath;
@property (retain, nonatomic) IESECGoodsVideoSearchResultEmptyView *emptyContentView;
@property (retain, nonatomic) IESECGradientView *gradientView;
@property (retain, nonatomic) IESECDurationHelper *renderDurationHelper;
@property (nonatomic) BOOL hasRecordedPagePerformance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ closeButtonDidTap;
@property (copy, nonatomic) id /* block */ enterOtherPageWithFullScreen;

- (void)updateEmptyViewWithNetworkError;
- (void)retryLoadData;
- (void)loadMoreData;
- (void)closeButtonDidClick:(id)a0;
- (void)trackShopEntranceShow:(id)a0;
- (id)getPanGestureRecognizerView;
- (void)transToMall;
- (double)collectionViewLayout:(id)a0 heightForItemAtIndexPath:(id)a1;
- (void)didFeedBackMaskViewTapped:(id)a0 withDislikeType:(long long)a1;
- (void)didFeedBackMaskViewShow:(id)a0;
- (void)didTapGoodsDetail:(id)a0;
- (void)didFeedBackMaskViewBackGroundTapped:(id)a0;
- (BOOL)isUseNewStyle;
- (void)didTapStoreEntrance:(id)a0;
- (void)didTapTrendGoodsSetCardEntrance:(id)a0 byType:(unsigned long long)a1;
- (void)scrollTrendGoodsSetCardImage:(id)a0 toIndex:(long long)a1;
- (void)didTapTrendGoodsVideoCard:(id)a0 tapArea:(unsigned long long)a1;
- (void)addInfiniteScrollView;
- (void)fetchFeedListRequestTrack;
- (void)fetchFeedListRequestFailTrack:(id)a0;
- (void)updateEmptyViewWithNoSearchResult;
- (void)enterTrendFeedListFailTrackWithNetError:(id)a0;
- (void)trackGoodsCardShow:(id)a0;
- (void)trackPerformanceOnce;
- (void)trackGoodsCardClick:(id)a0;
- (void)trackGoodsCardSlide:(id)a0 currentCarouselIndex:(long long)a1;
- (void)enterProductDetailAtIndex:(long long)a0;
- (void)enterProductStoreAtIndex:(long long)a0;
- (void)trackEnterPersonalPage:(id)a0;
- (void)enterTrendFeedListTrack;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setEnable:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupUI;

@end
