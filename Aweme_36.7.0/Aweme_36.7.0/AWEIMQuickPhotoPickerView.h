@class UICollectionViewLayout, PHFetchResult, UICollectionView, PHChange, NSString, AWEIMPhotoPickerModel;
@protocol AWEIMQuickPhotoPickerViewDelegate;

@interface AWEIMQuickPhotoPickerView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, AWEIMPhotoPickerCollectionViewCellDelegate, AWEIMAssetListCollectionViewCellDelegate, AWEIMPhotoLibraryChangeObserver, PHPhotoLibraryChangeObserver>

@property (retain, nonatomic) UICollectionViewLayout *flowLayout;
@property (copy, nonatomic) PHFetchResult *assets;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEIMPhotoPickerModel *pickerModel;
@property (nonatomic) BOOL currentViewIsForeground;
@property (nonatomic) BOOL hasPhotoRights;
@property (retain, nonatomic) PHChange *libraryChangeInBackground;
@property (nonatomic) BOOL readAssetInReverse;
@property (weak, nonatomic) id<AWEIMQuickPhotoPickerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshBackgroundColorWhileHasBackground:(BOOL)a0;
- (void)photoPickerCollectionViewCellDidLongPressed:(id)a0;
- (void)photoPickerCollectionViewCellLivePhotoModeTapped:(id)a0;
- (void)photoPickerCollectionViewCellSelectAreaTapped:(id)a0;
- (void)trackLivePhotoSetOn:(BOOL)a0;
- (void)p_createCollectionView;
- (BOOL)p_isLimitedAuthorization;
- (void)p_applicationWillEnterForegroundNoti:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 flowLayout:(id)a1 delegate:(id)a2 pickerModel:(id)a3;
- (void)p_photoLibraryDidChangeWithInstance:(id)a0;
- (id)p_loadAssets;
- (void)refreshPickerViewWithData:(id)a0 readInReverse:(BOOL)a1;
- (void)p_didSelectCell:(id)a0;
- (void)p_trackQuickAlbumAction:(id)a0 params:(id)a1;
- (void)p_showPhotoPickerViewController;
- (void)p_setupCellLayout:(id)a0;
- (void)p_applicationDidBecomeActiveNoti:(id)a0;
- (long long)realIndexAtIndex:(long long)a0;
- (void)didSelectAsset:(id)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)photoLibraryDidChange:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewWillAppear;
- (id)initWithCoder:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)dealloc;
- (id)assetAtIndex:(long long)a0;
- (void)viewDidDisappear;

@end
