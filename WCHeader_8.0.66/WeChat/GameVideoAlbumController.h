@class UIView, NSString, NSArray, GWHaowanAlbumBadNetView, MMAlbumForGameHaowan, NSMutableArray, UICollectionView, GameRecommendVideoListView, MMUIButton, NSMutableSet;
@protocol GameVideoAlbumControllerDelegate;

@interface GameVideoAlbumController : GameCenterNativeVc <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, GameDataChangedObserver, GameVideoGalleryViewControllerDelagate, GameVideoEditViewControllerDelegate, GameRecommendVideoListViewDelegate, GWHaowanAlbumBadNetViewDelegate> {
    MMAlbumForGameHaowan *_haowanAlum;
    NSMutableArray *_sectionInfos;
    NSArray *_albumInfos;
    NSMutableSet *_reportExposureCells;
    unsigned long long _currentAssetIndex;
}

@property (retain, nonatomic) UIView *emptyView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *bottomBar;
@property (retain, nonatomic) MMUIButton *skipBtn;
@property (retain, nonatomic) UIView *bottomBarBlurView;
@property (retain, nonatomic) UIView *navBarBlurView;
@property (copy, nonatomic) NSArray *recommendVideoList;
@property (retain, nonatomic) GameRecommendVideoListView *recommendListView;
@property (retain, nonatomic) GWHaowanAlbumBadNetView *badNetView;
@property (weak, nonatomic) id<GameVideoAlbumControllerDelegate> delegate;
@property (nonatomic) unsigned long long galleryType;
@property (nonatomic) BOOL ignoreVideoPreview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAlbumInfos:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)useTransparentNavibar;
- (void)onClose;
- (double)bottomBarHeight;
- (void)setupViews;
- (void)OnSkipBtnClick:(id)a0;
- (void)setupCollectionView;
- (void)setupBottomView;
- (void)setupEmptyView;
- (void)setupDataModel;
- (void)loadingTimeoutToShowBadNetView;
- (void)haowanAlbumBadNetReloadAction;
- (void)didRecommendVideoSelectAsset:(id)a0 isPublish:(BOOL)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)navigateToGalleryWithIndex:(long long)a0;
- (void)navigateToGameEditWithIndex:(long long)a0 andData:(id)a1;
- (void)didGameDataChanged:(id)a0;
- (id)calculateSectionTitle:(id)a0;
- (void)gameVideoGallery:(id)a0 didPerformActionWithIndex:(long long)a1 andData:(id)a2;
- (void)gameVideoEditController:(id)a0 didFinishWithFilePath:(id)a1 withExtra:(id)a2;
- (void)gameVideoEditController:(id)a0 didFailedWithError:(id)a1;
- (void)showNewUserTipsIfNeed;
- (void)showNewUserTipsBannerIfNeed;
- (void)hideNewUserTipsBanner:(id)a0;
- (void)showNewUserTipsDialogIfNeed;
- (id)setupNewUserTipsBanner;
- (void)trackEventExplosured;
- (void)trackEventExit;
- (void)trackEventEmptyData;
- (void)trackEventShowGuideTips;
- (void)trackEventExplosuredForVideo:(id)a0 appId:(id)a1 index:(int)a2;
- (void)trackEventClickForVideo:(id)a0 appId:(id)a1 index:(int)a2;
- (id)reportObjWithPosition:(long long)a0 action:(long long)a1;
- (id)buildTrackEventProps:(id /* block */)a0;
- (void).cxx_destruct;

@end
