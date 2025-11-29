@class NSString, UICollectionView, ACCGradientView, NSIndexPath, AWECollectionStickerPickerModel;
@protocol AWECollectionStickerPickerControllerDelegate;

@interface AWECollectionStickerPickerController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, AWEStickerDownloadManagerObserverProtocol>

@property (retain, nonatomic) ACCGradientView *gradientView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (retain, nonatomic) AWECollectionStickerPickerModel *model;
@property (nonatomic) BOOL shouldHideGradientView;
@property (weak, nonatomic) id<AWECollectionStickerPickerControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stickerDownloadManager:(id)a0 didFailDownloadSticker:(id)a1 withError:(id)a2;
- (void)p_setupCollectionView;
- (void)stickerDownloadManager:(id)a0 didFinishDownloadSticker:(id)a1;
- (void)p_setupGradientView;
- (void)showGradientBackground;
- (void)hideGradientBackground;
- (void)scrollSelectedToCenter;
- (void)executeSelectAnimationWithOldProp:(id)a0 newProp:(id)a1;
- (id)initWithStickers:(id)a0 currentSticker:(id)a1;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)dealloc;

@end
