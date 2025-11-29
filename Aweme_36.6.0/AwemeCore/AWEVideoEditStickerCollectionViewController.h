@class AWESingleStickerDownloader, UIView, AWEVideoEditStickerBottomBarViewController, AWEVideoEditStickerHeaderView, NSString, NSArray, ACCStickerPannelUIConfig, ACCStickerPannelDataConfig, CAGradientLayer, UICollectionView, NSIndexPath;
@protocol AWEVideoEditStickerCollectionVCDelegate, ACCStickerPannelLogger;

@interface AWEVideoEditStickerCollectionViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, AWEVideoEditStickerBottomBarViewControllerDelegate>

@property (retain, nonatomic) UIView *errorView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEVideoEditStickerBottomBarViewController *bottomBarViewController;
@property (retain, nonatomic) AWEVideoEditStickerHeaderView *headerView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) BOOL hasPreloadedStickers;
@property (retain, nonatomic) NSIndexPath *currentSectionIndexPath;
@property (nonatomic) double lastContentOffset;
@property (retain, nonatomic) AWESingleStickerDownloader *stickerDownloader;
@property (copy, nonatomic) NSString *currentTabID;
@property (weak, nonatomic) id<AWEVideoEditStickerCollectionVCDelegate> delegate;
@property (nonatomic) long long style;
@property (copy, nonatomic) NSArray *categories;
@property (copy, nonatomic) NSArray *effects;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (nonatomic) double horizontalInset;
@property (retain, nonatomic) ACCStickerPannelUIConfig *uiConfig;
@property (retain, nonatomic) id<ACCStickerPannelLogger> logger;
@property (retain, nonatomic) ACCStickerPannelDataConfig *dataConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchDataWithCompletion:(id /* block */)a0;
- (void)p_setupBottomBar;
- (void)p_fetchData;
- (id)logPB;
- (void)p_setupHeaderView;
- (void)p_updateHeaderFrame;
- (void)p_updateUIByStyle;
- (void)p_updateSelectedCategoryOnBottomBarWithScrollUp:(BOOL)a0;
- (void)bottomBarViewControllerDidSelectCategory:(id)a0 shouldTrack:(BOOL)a1;
- (id)cellAtIndexPath:(id)a0;
- (BOOL)shouldShowTextOnBottomBar;
- (void)configureBottomBar;
- (void)preloadFistPageSticker;
- (void)preloadingInfoStickersWithWifi;
- (void)updateCurrentStyle;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)configureCollectionView;
- (id)stickerType;

@end
