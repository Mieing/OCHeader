@class MJStickerPickerViewModel, UICollectionView, NSString, MJMaterialLoadingStatusCoordinator, NSIndexPath, MJInspectorToolBar;
@protocol MJStickerPickerViewControllerDelegate;

@interface MJStickerPickerViewController : UIViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, MJStickerPickerViewModelDelegate, MJMovieTextActionProtocol>

@property (retain, nonatomic) MJStickerPickerViewModel *viewModel;
@property (retain, nonatomic) MJMaterialLoadingStatusCoordinator *coordinator;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (readonly, nonatomic) BOOL isReplacing;
@property (retain, nonatomic) UICollectionView *contentView;
@property (retain, nonatomic) MJInspectorToolBar *toolBar;
@property (weak, nonatomic) id<MJStickerPickerViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isAppearing;

- (id)initWithViewModel:(id)a0;
- (void)viewDidLoad;
- (void)setupViews;
- (void)addToolBarIfNeeded;
- (void)stickerPickerViewModelNotifyNeedsReload:(id)a0;
- (void)reloadContentView;
- (void)reloadData:(id)a0;
- (void)resetPreview;
- (void)updateOnSkimTimeDidChange:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)updateOnPlaybackTimeDidChange:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)updateOnIsPlayingDidChange:(BOOL)a0;
- (void)fetchDatas;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)updateSelect:(BOOL)a0 withCell:(id)a1;
- (void).cxx_destruct;

@end
