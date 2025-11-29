@class NSString, UICollectionView, AWEFeedRefreshFooter, NSMutableArray, AWETeenVideoCollectionDataController;

@interface AWETeenVideoCollectionDetailViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UIScrollViewDelegate, AWEZoomTransitionOuterContextProvider, AWETeenCollectMessage>

@property (retain, nonatomic) AWETeenVideoCollectionDataController *dataController;
@property (retain, nonatomic) AWETeenVideoCollectionDataController *dataControllerBackUp;
@property (retain, nonatomic) NSMutableArray *removeArray;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEFeedRefreshFooter *refreshFooter;
@property (nonatomic) long long entranceIndex;
@property (copy, nonatomic) id /* block */ dataControllerChaneged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (id)initWithDataController:(id)a0;
- (void)p_loadMoreIsPreload:(BOOL)a0;
- (void)p_endFooterRefreshing;
- (void)p_preloadMoreIfNeeded;
- (void)didFinishCollectWithItemID:(id)a0 actionType:(unsigned long long)a1 collectCount:(id)a2;
- (void)p_updateDataControllerBackFromFeed;
- (void)p_setupUI;
- (void)backAction;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)dealloc;

@end
