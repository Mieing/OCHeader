@class AWEIMPhotoPickerNavView, AWEIMAlbumModel, NSArray, NSString, AWEIMCommonNavigationView, UITableView, NSMutableArray, UICollectionView, MASConstraint;

@interface AWEIMChangeBgPhotoPickerController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) AWEIMPhotoPickerNavView *navView;
@property (retain, nonatomic) AWEIMCommonNavigationView *changeBgNavView;
@property (copy, nonatomic) NSArray *collections;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UITableView *albumListView;
@property (retain, nonatomic) MASConstraint *albumListViewBC;
@property (retain, nonatomic) NSMutableArray *albumModels;
@property (retain, nonatomic) AWEIMAlbumModel *currentAlbumModel;
@property (copy, nonatomic) id /* block */ didSelectCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_createTableView;
- (double)contentHeightForFlowLayout:(id)a0 numberOfItems:(unsigned long long)a1;
- (void)p_createCollectionView;
- (void)p_createNaviBar;
- (void)p_checkAuthorizationAndFetchAssets;
- (void)p_titleViewDidTapped:(id)a0;
- (void)p_closeBtnDidClicked:(id)a0;
- (void)p_backBtnDidClicked:(id)a0;
- (void)p_showAlbumsListView;
- (void)p_navArrowUp;
- (void)p_hideAlbumsListView;
- (void)p_navArrowDown;
- (void)p_fetchPhotoAssets;
- (void)p_loadOtherAlbums;
- (void)p_collectionView:(id)a0 setToBottomAccordingTo:(id)a1;
- (double)navHeight;
- (id)p_transformCollectionResultIntoAlbumModels:(id)a0;
- (void)p_refreshNavTitle;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)loadView;

@end
