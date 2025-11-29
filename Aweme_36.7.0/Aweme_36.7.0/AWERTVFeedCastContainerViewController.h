@class NSArray, UICollectionView, NSString, UIView, RTVFeedTracker;
@protocol RTVInteractionFunctionContentDelegate, AWELiveAcqCastVideoViewModelProtocol, RTVFeedSessionInterface, RTVVoipResourceFetcherInterface, RxInjector, RTVXRControllerInjector;

@interface AWERTVFeedCastContainerViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, RTVInteractionControllerObserver, RTVInteractionFunctionContentProtocol>

@property (readonly, nonatomic) UIView *searchView;
@property (readonly, nonatomic) UICollectionView *collectionView;
@property (readonly, copy, nonatomic) NSArray *dataSource;
@property (readonly, nonatomic) id<AWELiveAcqCastVideoViewModelProtocol> viewModel;
@property (readonly, nonatomic) id<RTVVoipResourceFetcherInterface> resourceFetcher;
@property (readonly, weak, nonatomic) id<RTVFeedSessionInterface> session;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, nonatomic) RTVFeedTracker *tracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<RTVInteractionFunctionContentDelegate> delegate;

+ (Class)aAWEPadRTVAdapterClass;

- (void)rxAwakeFromPropertyInjection;
- (void)rtv_awakeFromControllerInjector;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)__configComponents;
- (void)didChangeInteractionController:(id)a0 context:(id)a1;
- (void)renderViewModel:(id)a0;
- (id)aAWEPadRTVAdapter;
- (void)__createSearchView;
- (void)__createCollectionView;
- (void)handleSearchEvent:(id)a0;
- (BOOL)__isCastingForCastingType:(long long)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)viewDidLayoutSubviews;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;

@end
