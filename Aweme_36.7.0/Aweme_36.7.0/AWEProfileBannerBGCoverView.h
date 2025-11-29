@class UIView, NSString, NSArray, AWEProfileBannerBGCoverMaskView, NSMutableDictionary, AWEGradientView, BDImageView, NSMutableArray, UICollectionView, UIViewController;
@protocol AWEProfileBannerBGCoverViewDelegate;

@interface AWEProfileBannerBGCoverView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, AWEProfileBannerBGCoverMaskViewDelegate, AWEPadUIAdaptionViewTransitionObserver>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) BDImageView *imageView;
@property (retain, nonatomic) AWEProfileBannerBGCoverMaskView *coverMaskView;
@property (retain, nonatomic) AWEGradientView *topStatusBarMaskView;
@property (copy, nonatomic) NSArray *bannerList;
@property (retain, nonatomic) NSMutableArray *infiniteBannerList;
@property (copy, nonatomic) NSArray *lightColorList;
@property (copy, nonatomic) NSArray *darkColorList;
@property (retain, nonatomic) NSMutableDictionary *computedLightColorList;
@property (retain, nonatomic) NSMutableDictionary *computedDarkColorList;
@property (nonatomic) unsigned long long currentIndex;
@property (retain, nonatomic) BDImageView *scaleImageView;
@property (retain, nonatomic) NSMutableArray *isCellImageReady;
@property (nonatomic) BOOL isFirstTimeConfig;
@property (weak, nonatomic) UIViewController *rootViewController;
@property (retain, nonatomic) UIView *imageContainerView;
@property (nonatomic) long long padBannerContentMode;
@property (weak, nonatomic) id<AWEProfileBannerBGCoverViewDelegate> delegate;
@property (nonatomic) BOOL forbidClientCalcColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (void)awe_viewController:(id)a0 willTransitionToSize:(struct CGSize { double x0; double x1; })a1 transitionCoordinator:(id)a2;
- (id)aAWEPadModuleAdapter;
- (void)__setupUI;
- (unsigned long long)showIndex;
- (void)handleMaskViewColorChange:(id)a0;
- (void)__updateImageViewFrame;
- (void)configWithURLList:(id)a0 lightColorList:(id)a1 darkColorList:(id)a2;
- (BOOL)__isLightTheme;
- (void)__trackBannerImageLoadState:(long long)a0;
- (void)__scrollToIndexPath:(id)a0 animated:(BOOL)a1;
- (unsigned long long)__indexPathToShowIndex:(id)a0;
- (void)__updateMaskColorByCurrentIndex;
- (BOOL)__enableBannerTrackOptimize;
- (void)configWithCoverList:(id)a0;
- (void)configGradientViewInBannerCompressStyleWithBannerStyle:(unsigned long long)a0;
- (void)refreshBGCoverStyleWithContentMode:(long long)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)startScale;
- (void)stopScale;
- (void)hiddenCoverMaskView;
- (void)configWithImage:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)imageCount;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)dealloc;

@end
