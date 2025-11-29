@class IESECStoreInfoControllerViewModel, IESECServiceProxy, NSString, UIView, IESECShopMonitorActionView;
@protocol IESECShopHeaderViewProtocol, IESECShopFrameworkService, IESECShopThemeService, IESECShopLayoutService, IESECShopDataService, IESECShopForwardCoService, IESECShopStateService;

@interface IESECStoreInfoController : IESECRelationController <IESECShopHeaderViewDelegate, IESECStoreInfoControllerProtocol> {
    BOOL _isFirst;
    BOOL _isHidden;
    BOOL _isFirstScroll;
    unsigned long long _themeType;
}

@property (retain, nonatomic) IESECStoreInfoControllerViewModel *viewModel;
@property (retain, nonatomic) IESECServiceProxy<IESECShopThemeService> *themeService;
@property (retain, nonatomic) UIView *sevenSplitIndicator;
@property (retain, nonatomic) IESECShopMonitorActionView<IESECShopHeaderViewProtocol> *headerView;
@property (retain, nonatomic) IESECServiceProxy<IESECShopFrameworkService> *frameworkService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopLayoutService> *layoutService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopForwardCoService> *forwardService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopStateService> *stateService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupBinding;
- (void)updateLayoutAndCanBeCanceled;
- (void)setupBindingV2;
- (double)heightForHeaderViewInPagerView:(id)a0;
- (id)viewForHeaderInPagerView:(id)a0;
- (void)pagerView:(id)a0 mainScrollViewDidScroll:(id)a1;
- (void)headerTypeDidChange:(unsigned long long)a0;
- (void)switchTheme:(unsigned long long)a0;
- (void)pagerView:(id)a0 didMoveToTab:(id)a1;
- (void)controllerDidLoad;
- (void)iesecshop_containerWillMoveToParentViewController:(id)a0;
- (void)iesecshop_didFinishExtensionAreaAnimation;
- (void)updateWithInfoResponse:(id)a0;
- (void)headerView:(id)a0 didUpdateViewSize:(struct CGSize { double x0; double x1; })a1;
- (void)updateFansClubInfo;
- (void)updateProfileData;
- (BOOL)shouldDisplaySimpleModeHeader;
- (void)displayProfileViewSimpleMode:(BOOL)a0;
- (void)p_receiveShopFollowRes:(id)a0;
- (void)p_updateHeaderCornerRadiusIfNeeded:(double)a0;
- (void)displaySevenSplitIndicator:(BOOL)a0;
- (double)p_getCurrentPercent;
- (double)liveBottomPureWhiteLayerHeight;
- (void)closeLiveMiniWindow;
- (void).cxx_destruct;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)tapAction;

@end
