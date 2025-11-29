@class AWETeenSearchResultUserDataController, UICollectionView, AWEFeedRefreshFooter, AWEUILoadingView, UIView, NSString;
@protocol AWETeenSearchResultDelegate;

@interface AWETeenSearchResultUserViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, AWETeenSubscribeMessage, AWETeenBlockMessage, AWETeenSearchResultProtocol>

@property (retain, nonatomic) AWETeenSearchResultUserDataController *dataController;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEFeedRefreshFooter *refreshFooter;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) UIView *backGroundView;
@property (nonatomic) BOOL stopExpoTacking;
@property (nonatomic) BOOL isAppearing;
@property (nonatomic) BOOL didEnterAuthorPage;
@property (nonatomic) long long numberOfCell;
@property (nonatomic) struct CGSize { double width; double height; } transitionToSize;
@property (copy, nonatomic) NSString *lastSuccessfulKeyword;
@property (weak, nonatomic) id<AWETeenSearchResultDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (void)setHide:(BOOL)a0;
- (void)p_loadMoreData;
- (void)p_refreshData;
- (void)p_endRefreshing;
- (void)p_stopLoading;
- (void)p_startLoading;
- (void)didUpdateSubscribeStatus:(long long)a0 secUserID:(id)a1;
- (void)didUpdateBlockStatus:(long long)a0 secUserID:(id)a1;
- (void)p_trackSearchResultShow;
- (void)updatePageParameters;
- (void)p_startSearchApiSection;
- (void)p_endSearchApiSection;
- (void)p_searchTeenQualityFailWithErrorType:(long long)a0 error:(id)a1;
- (void)p_searchTeenQualitySuccess;
- (void)searchWithKeyWord:(id)a0 type:(long long)a1 force:(BOOL)a2;
- (void)p_trackAuthorCardShow;
- (void)searchResultShowTracker:(long long)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)didMoveToParentViewController:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;

@end
