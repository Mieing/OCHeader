@class CAGradientLayer, NSString, IESECServiceProxy, UIImageView, UIView;
@protocol IESECShopTopTabService, IESECShopLayoutService, IESECShopThemeService, IESECShopDataService, IESECShopForwardCoService;

@interface IESECStoreThemeController : IESECRelationController <IESECStoreThemeControllerProtocol> {
    BOOL _isHidden;
    UIView *_dragIndicator;
    double _splitPercent;
}

@property (retain, nonatomic) IESECServiceProxy<IESECShopThemeService> *themeService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopTopTabService> *topTabService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopLayoutService> *layoutService;
@property (retain, nonatomic) UIView *headerBackView;
@property (retain, nonatomic) CAGradientLayer *headerBackLayer;
@property (retain, nonatomic) CAGradientLayer *headerTransitionLayer;
@property (retain, nonatomic) UIView *headerExtendView;
@property (retain, nonatomic) UIImageView *headerThemeImageView;
@property (retain, nonatomic) CAGradientLayer *headerThemeMaskLayer;
@property (retain, nonatomic) IESECServiceProxy<IESECShopDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopForwardCoService> *forwardCoService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)controllerShouldLoadWithPageContextV2:(id)a0;

- (void)setupBindings;
- (void)setupBindingV2;
- (void)pagerViewDidReload:(id)a0;
- (void)pagerView:(id)a0 mainScrollViewDidScroll:(id)a1;
- (void)headerTypeDidChange:(unsigned long long)a0;
- (void)switchTheme:(unsigned long long)a0;
- (void)pagerView:(id)a0 didMoveToTab:(id)a1;
- (void)controllerDidLoad;
- (void)iesecshop_splitSlideDidScroll:(double)a0;
- (void)updateInfoWithResponse:(id)a0;
- (void)updateTabModelArray:(id)a0;
- (void)setupNewHeaderThemeViews:(id)a0 HeaderType:(unsigned long long)a1;
- (void)headerTypeDidChange:(id)a0 HeaderType:(unsigned long long)a1;
- (void)p_configViewForPromotionThemeWithStyleInfo:(id)a0;
- (void)p_configViewForNormalTheme;
- (void)p_updateHeaderThemeMaskLayerFrame:(id)a0 offset:(double)a1;
- (void)adjustHeaderThemeView:(id)a0;
- (void)p_hideHeaderThemeMaskLayer:(BOOL)a0;
- (void)adjustNewHeaderThemeView:(id)a0;
- (void)p_configThemeViewsAlpha:(double)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
