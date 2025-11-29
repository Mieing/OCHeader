@class NSString, UICollectionView, AWEAlbumSelectTemplateFeedViewModel, UIView, AWEVideoPublishViewModel;
@protocol ACCLoadingViewProtocol, AWEAlbumSelectTemplateFeedViewControllerDelegate, ACCMVTemplatesDataControllerProtocol;

@interface AWEAlbumSelectTemplateFeedViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate, ACCNewCollectionDelegateWaterfallLayout, AWEAlbumSelectTemplateFeedViewControllerProtocol>

@property (nonatomic) BOOL isFetchingData;
@property (nonatomic) BOOL isFirstRequest;
@property (retain, nonatomic) AWEAlbumSelectTemplateFeedViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView<ACCLoadingViewProtocol> *loadingView;
@property (retain, nonatomic) id<ACCMVTemplatesDataControllerProtocol> dataProvider;
@property (readonly, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) id<AWEAlbumSelectTemplateFeedViewControllerDelegate> delegate;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (copy, nonatomic) id /* block */ willEnterDetailVCBlock;
@property (copy, nonatomic) id /* block */ didAppearBlock;

- (id)accui_emptyPageConfigForState:(unsigned long long)a0;
- (void)accui_emptyPagePrimaryButtonTapped:(id)a0;
- (id)transitionCollectionCellForItemOffset:(long long)a0;
- (void)p_updateEmpteStateWithError:(id)a0 andContentCount:(unsigned long long)a1;
- (void)diffReloadContent;
- (void)p_fetchDataWithRetry:(BOOL)a0;
- (void)p_setupRefresh;
- (void)p_endLoadingAndRefreshingWithMoreData:(BOOL)a0;
- (void)p_monitorReportWithError:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)reloadContent;

@end
