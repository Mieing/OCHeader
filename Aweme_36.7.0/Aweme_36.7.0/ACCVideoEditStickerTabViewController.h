@class NSString, UICollectionView, ACCStickerPannelDataConfig, UIView, ACCVideoEditStickerTabDataController;
@protocol ACCLoadingViewProtocol, ACCVideoEditStickerTabViewControllerDelegate, ACCStickerPannelFilter, ACCStickerPannelLogger;

@interface ACCVideoEditStickerTabViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UIView *errorView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) ACCStickerPannelDataConfig *dataConfig;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (weak, nonatomic) UIView<ACCLoadingViewProtocol> *loadingView;
@property (copy, nonatomic) NSString *typeIdentifier;
@property (nonatomic) BOOL canLoadMoreData;
@property (nonatomic) long long numOfLoadedStickerIcons;
@property (nonatomic) double initStickerIconTime;
@property (weak, nonatomic) id<ACCVideoEditStickerTabViewControllerDelegate> delegate;
@property (retain, nonatomic) ACCVideoEditStickerTabDataController *dataController;
@property (retain, nonatomic) id<ACCStickerPannelLogger> logger;
@property (retain, nonatomic) id<ACCStickerPannelFilter> pannelFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadCollectionView;
- (void)p_configData;
- (void)registerCellClass:(id)a0;
- (id)categoryModel;
- (void).cxx_destruct;
- (id)initWithTypeIdentifier:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;

@end
