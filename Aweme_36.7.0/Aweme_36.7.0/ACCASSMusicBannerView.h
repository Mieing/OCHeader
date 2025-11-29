@class ACCMusicUIThemeModel, NSArray, NSTimer, ACCASSMusicPageControl, UICollectionView, NSMutableArray, NSString;
@protocol ACCTransitionViewControllerProtocol;

@interface ACCASSMusicBannerView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, HTSVideoAudioSupplier>

@property (retain, nonatomic) ACCASSMusicPageControl *pageControl;
@property (retain, nonatomic) NSMutableArray *infiniteBannerList;
@property (retain, nonatomic) NSTimer *loopTimer;
@property (nonatomic) long long currentIndex;
@property (nonatomic) long long lastIndex;
@property (nonatomic) double autoLoopDuration;
@property (copy, nonatomic) NSArray *bannerList;
@property (nonatomic) BOOL didRecieveAutualData;
@property (nonatomic) BOOL canSelected;
@property (nonatomic) BOOL canAutoLoop;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSString *previousPage;
@property (nonatomic) BOOL shouldHideCellMoreButton;
@property (nonatomic) long long recordMode;
@property (nonatomic) double videoDuration;
@property (retain, nonatomic) id<ACCTransitionViewControllerProtocol> transitionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ enableClipBlock;
@property (copy, nonatomic) id /* block */ willClipBlock;
@property (retain, nonatomic) ACCMusicUIThemeModel *themeModel;

- (void)p_addObserver;
- (void)startCarousel;
- (void)stopCarousel;
- (void)p_removeObserver;
- (void)p_invalidLoopTimer;
- (void)p_activeLoopTimer;
- (void)p_scrollToIndexPath:(id)a0 animated:(BOOL)a1;
- (void)p_setupUI;
- (void)applicationWillResignActive:(id)a0;
- (void).cxx_destruct;
- (void)refresh;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)applicationDidBecomeActive:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (void)dealloc;

@end
