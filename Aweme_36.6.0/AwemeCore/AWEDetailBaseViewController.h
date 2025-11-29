@class NSMutableDictionary, IGListAdapter, UICollectionView, UILabel, NSString, AWEDetailServiceProvider;
@protocol AWEDetailViewModelProtocol;

@interface AWEDetailBaseViewController : UIViewController <AWEDetailNetworkErrorHostViewController, AWEDetailInfiniteScrollingHostViewController, IGListAdapterDataSource, UIScrollViewDelegate, AWEZoomTransitionOuterContextProvider, AWEDetailPageRefreshServiceSubscriber>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (readonly, nonatomic) UILabel *noMoreTipLabel;
@property (readonly, nonatomic) IGListAdapter *listAdapter;
@property (readonly, nonatomic) id<AWEDetailViewModelProtocol> viewModel;
@property (readonly, nonatomic) AWEDetailServiceProvider *serviceProvider;
@property (retain, nonatomic) NSMutableDictionary *businessHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (id)objectsForListAdapter:(id)a0;
- (id)listAdapter:(id)a0 sectionControllerForObject:(id)a1;
- (id)emptyViewForListAdapter:(id)a0;
- (void)handleApplicationDidBecomeActiveNotification;
- (void)setupInjectServiceOnInit;
- (void)registerNotificationsOnInit;
- (void)registerBusinessHandlersOnInit;
- (void)setupUIOnViewDidLoad;
- (void)setupConstraintsOnViewDidLoad;
- (void)bindViewModelOnViewDidLoad;
- (void)setupUIOnViewDidLayoutSubviews;
- (void)handleApplicationWillResignActiveNotification;
- (void)p_updateAwemeListSection;
- (void)handleDetailInfoFetchStateChange;
- (void)handleAwemeListInitFetchStatusChange;
- (void)handleCollectionViewUpdateCompletion;
- (id)networkErrorContainerViewForHandler:(id)a0;
- (void)clickedErrorViewPrimaryButton:(id)a0;
- (id)infiniteScrollingViewForHandler:(id)a0;
- (id)noMoreTipLabelForHandler:(id)a0;
- (void)showEmptyAwemeList;
- (BOOL)needAmendEmptyAwemeListView;
- (BOOL)needAmendEmptyAwemeListTip;
- (void)handleDetailPageRefresh;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)viewDidLayoutSubviews;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;

@end
