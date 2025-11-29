@class NSString, NSArray, AWESelectPhotoConfiguration, UIButton, NSMutableArray, UICollectionView, PHFetchResult, NSObject;
@protocol AWEUploadPhotoManager;

@interface AWESelectPhotoViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, PHPhotoLibraryChangeObserver, AWESelectPhotoViewControllerProtocol>

@property (retain, nonatomic) NSObject<AWEUploadPhotoManager> *uploadManager;
@property (retain, nonatomic) AWESelectPhotoConfiguration *configuration;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) BOOL greyMode;
@property (retain, nonatomic) NSArray *dataSource;
@property (retain, nonatomic) NSMutableArray *selectedAssetModelArray;
@property (retain, nonatomic) PHFetchResult *fetchResult;
@property (nonatomic) BOOL hasRegisterChangeObserver;
@property (nonatomic) BOOL scrollToBottom;
@property (nonatomic) BOOL isViewAppeared;
@property (nonatomic) BOOL refreshWhileAppeared;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)viewControllerWithConfiguration:(id)a0;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (void)checkAuthorizationAndReloadWithScrollToBottom:(BOOL)a0;
- (void)reloadDataWithScrollToBottom:(BOOL)a0;
- (void)showNoAuthorizationPage;
- (void)p_handleStatusLimited;
- (void)reloadVisibleCellExcept:(id)a0;
- (unsigned long long)galleryUploadResourceType;
- (void)updateNavBar;
- (void)p_reloadWithAssetModel:(id)a0 fetchResult:(id)a1 scrollToBottom:(BOOL)a2;
- (void)galleryDidSelectRightTopWithCell:(id)a0 isSelected:(BOOL)a1;
- (void)cancelDidTap;
- (void)confirmDidTap;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (id)initWithConfiguration:(id)a0;
- (void)photoLibraryDidChange:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setupUI;

@end
