@class NSArray, NSString, UICollectionView;
@protocol IESLLFusePOITrackerManagerProtocol, IESLLPOIDetailPhotosPreviewViewControllerDelegate;

@interface IESLLPOIDetailPhotosPreviewBaseViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate>

@property (copy, nonatomic) NSArray *photos;
@property (nonatomic) BOOL disableZoomTransition;
@property (nonatomic) BOOL allowLoop;
@property (nonatomic) long long currentIndex;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) BOOL shouldContainBottomHeight;
@property (weak, nonatomic) id<IESLLFusePOITrackerManagerProtocol> trackerManager;
@property (weak, nonatomic) id<IESLLPOIDetailPhotosPreviewViewControllerDelegate> delegate;
@property (nonatomic) BOOL shouldUsePopDismiss;
@property (nonatomic) BOOL useNewVideoStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)fakeCurrentIndex;
- (void)updateLabelAndCurrentIndex;
- (BOOL)shouldAddFakeLoopData;
- (void)dimissSelf;
- (void)scrollToTargetPic:(long long)a0 animated:(unsigned char)a1;
- (id)TTMonitorKey;
- (struct CGSize { double x0; double x1; })sizeForCell;
- (void)appendPhotos:(id)a0;
- (void)initLoopData;
- (id)addFakeObjectToArray:(id)a0;
- (void)updateProgressWithPage:(long long)a0 total:(long long)a1 photo:(id)a2;
- (void)notifyDelegatePhotoExpose:(BOOL)a0;
- (void)tryToGetAppearingCell;
- (Class)photoCellClass;
- (Class)videoCellClass;
- (Class)newVideoCellClass;
- (void)layoutCollectionView:(id)a0;
- (void)didDisplayCell:(id)a0 index:(long long)a1;
- (void)willDisplayCellWithPhoto:(id)a0;
- (void)didEndDisplayingCellWithPhoto:(id)a0 cell:(id)a1;
- (void)tryStopVideoWithCell:(id)a0;
- (void)insertPhotos:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (BOOL)prefersStatusBarHidden;
- (id)initWithConfiguration:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)totalCount;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupCollectionView;
- (id)currentPhoto;
- (void)handleTap;

@end
