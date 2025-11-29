@class NSString, NSDictionary, AWETeenSearchGuessViewModel, AWETeenSearchViewController;
@protocol AWETeenSearchVideoProtocol;

@interface AWETeenSearchGuessCollectionViewController : UICollectionViewController

@property (retain, nonatomic) AWETeenSearchGuessViewModel *viewModel;
@property (retain, nonatomic) NSDictionary *logPassback;
@property (nonatomic) BOOL firstShow;
@property (readonly, weak, nonatomic) AWETeenSearchViewController *parentVC;
@property (nonatomic) struct CGSize { double width; double height; } rotationToSize;
@property (readonly, copy, nonatomic) NSString *suggestLogId;
@property (copy, nonatomic) NSString *searchPosition;
@property (weak, nonatomic) id<AWETeenSearchVideoProtocol> delegate;

- (void)reloadCollectionView;
- (void)setupBinding;
- (void)p_cancelTeenQualitySearchDefault;
- (void)reloadPlaceHolder;
- (void)p_startTeenSearchApiSection;
- (void)p_endTeenSearchApiSection;
- (void)p_reportQualityWithSuccess:(BOOL)a0 dataList:(id)a1 error:(id)a2;
- (void)p_finishTeenQualitySearchDefaultWithSuccess:(BOOL)a0 errorType:(long long)a1 error:(id)a2;
- (void)reloadGuessKeyWordCompletion:(id /* block */)a0;
- (void)trackAllTrendShow;
- (void)reloadCollectionViewForRotateToSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)didMoveToParentViewController:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setupUI;

@end
