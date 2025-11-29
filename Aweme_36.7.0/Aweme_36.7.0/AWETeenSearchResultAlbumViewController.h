@class AWETeenSearchResultAlbumDataController, UICollectionView, AWETeenSearchResultAlbumNoDataViewController, AWEUILoadingView, UIView, NSString;
@protocol AWETeenSearchResultDelegate;

@interface AWETeenSearchResultAlbumViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, AWETeenAlbumMessage, AWETeenSearchResultProtocol>

@property (retain, nonatomic) AWETeenSearchResultAlbumDataController *dataController;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) UIView *backGroundView;
@property (nonatomic) long long numberOfCell;
@property (retain, nonatomic) AWETeenSearchResultAlbumNoDataViewController *noDataController;
@property (nonatomic) BOOL isAppearing;
@property (nonatomic) struct CGSize { double width; double height; } transitionToSize;
@property (copy, nonatomic) NSString *lastSuccessfulKeyword;
@property (weak, nonatomic) id<AWETeenSearchResultDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (void)setHide:(BOOL)a0;
- (void)loadMoreData;
- (void)updateLoadingStatus:(BOOL)a0;
- (void)updateWatchedAlbumModel:(id)a0;
- (double)getLabelHeightWithFixedWidth:(double)a0 andFixedFont:(id)a1 andContent:(id)a2;
- (void)p_trackSearchResultShow;
- (void)updatePageParameters;
- (void)p_startSearchApiSection;
- (void)p_endSearchApiSection;
- (void)p_searchTeenQualityFailWithErrorType:(long long)a0 error:(id)a1;
- (void)p_searchTeenQualitySuccess;
- (void)searchWithKeyWord:(id)a0 type:(long long)a1 force:(BOOL)a2;
- (id)albumAtIndex:(long long)a0;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)didMoveToParentViewController:(id)a0;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)setup;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setupUI;
- (void)reloadDataSource;
- (void)refreshData;

@end
