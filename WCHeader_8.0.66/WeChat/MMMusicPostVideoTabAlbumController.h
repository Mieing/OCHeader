@class MMMusicPostVideoImagePickerControlCenter, NSString, MMAlbum, UICollectionViewFlowLayout, MMDropableTitleView, MMAlbumDropPickerController, NSObject, MMAssetForPHAssetFramework, NSMutableArray, UICollectionView;
@protocol OS_dispatch_queue, MMMusicPostVideoTabAlbumControllerDataSource, MMMusicPostVideoTabAlbumControllerDelegate;

@interface MMMusicPostVideoTabAlbumController : MMMusicPostVideoTabBaseController <MMAlbumDropPickerControllerDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, MMSightCameraViewControllerDelegate, PHPhotoLibraryChangeObserver, MMMusicPostVideoTabAlbumVideoCellDelegate, MMDropableTitleViewDelegate> {
    MMAlbumDropPickerController *_dropController;
    MMMusicPostVideoImagePickerControlCenter *_controlCenter;
    MMAlbum *_album;
    NSMutableArray *modelLists;
    UICollectionView *_listView;
    UICollectionViewFlowLayout *_flowLayout;
    double _currEposideDuration;
    BOOL _bResumeMusicAfterTakeVideo;
}

@property (retain, nonatomic) MMDropableTitleView *titleView;
@property (retain, nonatomic) MMAssetForPHAssetFramework *sightCameraTakenAsset;
@property (nonatomic) BOOL canAlbumShowPhoto;
@property (nonatomic) BOOL canMultiSelect;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *albumExecuteQueue;
@property (weak, nonatomic) id<MMMusicPostVideoTabAlbumControllerDataSource> dataSource;
@property (weak) id<MMMusicPostVideoTabAlbumControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithViewController:(id)a0 canAlbumShowPhoto:(BOOL)a1 canMultiSelect:(BOOL)a2;
- (id)arrPanGestures;
- (void)updateCanMultiSelect:(BOOL)a0;
- (void)updateCanAlbumShowPhoto:(BOOL)a0;
- (void)setCurrEposideDuration:(double)a0;
- (void)updateCurrEposideDuration:(double)a0;
- (void)updateDataSelectedStatus;
- (void)reloadVisibleCellSelectedStatus;
- (BOOL)updateDataSelectedStatusByUniqueId:(id)a0;
- (void)reloadData;
- (void)layoutWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewWillAppear:(BOOL)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)generateModelList;
- (unsigned long long)assetCount;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (BOOL)isSelectedWithModel:(id)a0;
- (void)showFinderCameraViewController;
- (void)startLoadingBlocked;
- (void)endLoading;
- (void)mmMusicPostVideoTabAlbumVideoCell:(id)a0 onSelectedBtnClicked:(id)a1;
- (void)onShortVideoTaken:(id)a0 thumbImg:(id)a1 editVideoAttr:(id)a2 paramModel:(id)a3;
- (void)onShortVideoTakenHasSavedToLibrary:(id)a0 thumbImg:(id)a1 editVideoAttr:(id)a2 paramModel:(id)a3;
- (void)onShortVideoTakenFailedToSaveToLibrary:(id)a0;
- (void)photoLibraryDidChange:(id)a0;
- (void)generateModelListAndReloadDataWithCompletion:(id /* block */)a0;
- (id)getAlbumTitleView;
- (void)albumDropPicker:(id)a0 didSelectAtAlbum:(id)a1 isDefault:(BOOL)a2;
- (void)authorizeErrorWithAlbumDropPicker:(id)a0;
- (void)readAlbumsErrorWithAlbumDropPicker:(id)a0;
- (void)onClickDropableTitleView:(id)a0;
- (id)generatePreviewDataSource;
- (void).cxx_destruct;

@end
