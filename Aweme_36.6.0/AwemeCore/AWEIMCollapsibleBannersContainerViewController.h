@class UIColor, AWEIMCollapsibleCollectionViewLayout, UICollectionView, AWEIMCollapsibleBannerShowingViewContainer, AWEIMCollapsibleTopContainerView, NSArray, NSString;
@protocol IESIMCollapsibleBannerTrackerProtocol;

@interface AWEIMCollapsibleBannersContainerViewController : UIViewController <AWEIMCollapsibleCollectionViewLayoutDelegate, AWEIMCollapsibleTopContainerViewDelegate, AWEIMCollapsibleBannerCollectionViewCellDelegate, AWEIMCollapsibleBannerShowingViewContainerDelegate, UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) AWEIMCollapsibleCollectionViewLayout *layout;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEIMCollapsibleTopContainerView *collapsibleTopContainerView;
@property (retain, nonatomic) AWEIMCollapsibleBannerShowingViewContainer *bannerContainer;
@property (retain, nonatomic) UIColor *naviBarOriginalColor;
@property (nonatomic) BOOL hideNavigationBarBottomLine;
@property (nonatomic) double imChatBigFontScale;
@property (copy) NSArray *banners;
@property (retain, nonatomic) id<IESIMCollapsibleBannerTrackerProtocol> tracker;
@property (nonatomic) BOOL isPadSplitting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)__setupUI;
- (void)iesim_themeReload:(id)a0;
- (void)reloadWithBanners:(id)a0;
- (id)initWithBanners:(id)a0;
- (void)__updateViewModelWithExpanding:(BOOL)a0 resetDisplayStatus:(BOOL)a1;
- (void)p_handleFrameChanged;
- (double)__currentLayoutY;
- (double)contentViewHeightWhenCollapsing;
- (double)contentViewHeightWhenExpanding;
- (double)p_selfWidth;
- (void)__saveNavigationBarUIStatus;
- (void)__animationChangeNaviBackgroundColor:(id)a0;
- (void)__restoreNavigationBarUIStatus;
- (void)__changeNaviBackgroundColor;
- (double)containerHeightWhenCollapsing;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndexPath:(id)a2;
- (double)containerHeightWhenExpanding;
- (void)didTapOnMaskView;
- (void)didDragToDismiss;
- (void)didClickShowingViewWithViewModel:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)collapse;
- (void)expand;

@end
