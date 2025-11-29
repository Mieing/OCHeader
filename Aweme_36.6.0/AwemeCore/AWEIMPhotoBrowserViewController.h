@class AWEIMPhotoBrowserNavView, AWEIMExchangeAndSendImageActionBarView, AWEIMPhotoPreviewEditorCollectionView, AWEIMPhotoPickerToolbarViewV2, UIImage, NSString, UICollectionView, PHFetchResult, AWEIMPhotoPickerModel, AWEIMMediaEditorProxy;
@protocol AWEIMPhotoBrowserViewControllerDelegate;

@interface AWEIMPhotoBrowserViewController : UIViewController <AWEZoomTransitionInnerContextProvider, UICollectionViewDelegate, UICollectionViewDataSource, AWEIMAssetBrowserCollectionViewCellDelegate, AWEIMPhotoPreviewEditorCollectionViewDelegate, AWEIMMediaDetailTransitionInnerContextProvider, AWEIMPhotoPickerToolbarDelegate, AWEIMMediaEditorProxyDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) PHFetchResult *assetArray;
@property (nonatomic) long long currentIndex;
@property (nonatomic) BOOL enableEditMode;
@property (retain, nonatomic) AWEIMMediaEditorProxy *editorProxy;
@property (retain, nonatomic) AWEIMPhotoPreviewEditorCollectionView *editorView;
@property (retain, nonatomic) AWEIMPhotoBrowserNavView *navView;
@property (retain, nonatomic) AWEIMPhotoPickerToolbarViewV2 *toolbarViewV3;
@property (retain, nonatomic) AWEIMExchangeAndSendImageActionBarView *toolbarExchangeImage;
@property (nonatomic) unsigned long long sceneType;
@property (retain, nonatomic) AWEIMPhotoPickerModel *pickerModel;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (weak, nonatomic) id<AWEIMPhotoBrowserViewControllerDelegate> delegate;
@property (nonatomic) BOOL disableSendVideo;
@property (nonatomic) BOOL disableSendWatchOnce;
@property (nonatomic) BOOL supportExchangeImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)zoomTransitionTargetViewCornerRadius;
- (BOOL)zoomTransitionWantsOptAnimation;
- (unsigned long long)zoomTransitionAllowedTriggerDirection;
- (id)zoomTransitionEndView;
- (id)currentPlayingCell;
- (double)mediaDetailTransitionAnimationDuration;
- (void)didScrollToPage:(long long)a0;
- (void)onPickerToolbar:(id)a0 didTappedWithActionType:(unsigned long long)a1;
- (void)didSingleTapAssetBrowserCell:(id)a0;
- (void)mediaEditorDidCompleteWithoutEdit:(id)a0;
- (void)initPhotoBrowserCollectionView;
- (BOOL)shouldSelectWithAsset:(id)a0 faildReason:(id /* block */)a1;
- (void)selectAsset:(id)a0;
- (void)updateNavAndToolBar;
- (BOOL)p_isSupprtWatchOnce;
- (void)p_addToolBar;
- (void)pickerModelChanged:(id)a0;
- (void)p_sendAssetWithWatchOnce:(BOOL)a0;
- (void)p_sendAssetWithWatchOnce:(BOOL)a0 isExchangeImage:(BOOL)a1;
- (void)setNavigationBarAndToolBarHidden:(BOOL)a0;
- (void)didFinishPlayOrPausePlay:(id)a0;
- (void)photoEditorCollectionViewDidSelected:(id)a0;
- (id)initWithPHFetchResult:(id)a0 currentIndex:(long long)a1 editModeEnable:(BOOL)a2;
- (void)watchOnceSendButtonPressed:(id)a0;
- (id)currentDisplayIndexPath;
- (void)applicationWillResignActive:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)a0;
- (void)sendButtonPressed:(id)a0;
- (void)editButtonPressed:(id)a0;

@end
