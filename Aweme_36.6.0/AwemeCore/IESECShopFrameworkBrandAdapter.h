@class IESECServiceProxy, NSString;
@protocol IESECShopLayoutService, IESECShopTopTabService;

@interface IESECShopFrameworkBrandAdapter : IESECShopFrameworkAdapter <IESECShopFrameworkAdapter>

@property (retain, nonatomic) IESECServiceProxy<IESECShopLayoutService> *layoutService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopTopTabService> *topTabService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)globalTrackParams;
- (double)heightForTabbarViewInPagerView:(id)a0;
- (double)heightForStickySectionInPagerView:(id)a0;
- (double)heightForMiddleStickySectionInPagerView:(id)a0;
- (id)viewForTabbarInPagerView:(id)a0;
- (BOOL)shouldShowHeaderLive;
- (BOOL)shouldShowHeaderVideo;
- (void)iesecshop_extensionAreaController_pagerView:(id)a0 mainScrollViewDidScroll:(id)a1;
- (BOOL)preferTabBarIndicatorHidden;
- (double)cornerRadiusForTabContentView;
- (id)profileViewWithContext:(id)a0 preferredWidth:(double)a1;
- (id)profileConciseViewWithContext:(id)a0 preferredWidth:(double)a1;
- (id)navbarViewWithContext:(id)a0;
- (void)iesecshop_infoController_pagerView:(id)a0 mainScrollViewDidScroll:(id)a1;
- (void)iesecshop_topTabComponent_splitSlideDidScroll:(double)a0;
- (void)updateTopTabStyleConfigsIfNeeded:(id)a0;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;

@end
