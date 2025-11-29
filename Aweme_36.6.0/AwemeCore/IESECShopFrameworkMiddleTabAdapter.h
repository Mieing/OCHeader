@class IESECServiceProxy, NSString;
@protocol IESECShopLayoutService, IESECShopTopTabService;

@interface IESECShopFrameworkMiddleTabAdapter : IESECShopFrameworkAdapter <IESECShopFrameworkAdapter>

@property (retain, nonatomic) IESECServiceProxy<IESECShopLayoutService> *layoutService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopTopTabService> *topTabService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)heightForTabbarViewInPagerView:(id)a0;
- (double)heightForStickySectionInPagerView:(id)a0;
- (id)viewForTabbarInPagerView:(id)a0;
- (void)iesecshop_extensionAreaController_pagerView:(id)a0 mainScrollViewDidScroll:(id)a1;
- (BOOL)preferTabBarIndicatorHidden;
- (double)cornerRadiusForTabContentView;
- (void)iesecshop_topTabComponent_splitSlideDidScroll:(double)a0;
- (void).cxx_destruct;

@end
