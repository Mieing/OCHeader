@class IESECServiceProxy, NSString, IESECShopLiveViewModel;
@protocol IESECShopStateService, IESECShopForwardCoService, IESECShopLiveTabService, IESECShopDataService;

@interface IESECShopLiveMiniWindowController : IESECRelationLiveMiniWindowController <IESECShopLiveMiniWindowControllerProtocol> {
    BOOL _isSmallScreenState;
    BOOL _isNotFirstAppear;
    BOOL _isAppear;
}

@property (retain, nonatomic) IESECShopLiveViewModel *viewModel;
@property (retain, nonatomic) IESECServiceProxy<IESECShopStateService> *stateService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopLiveTabService> *liveTabService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopForwardCoService> *forwardCoService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopDataService> *dataService;
@property (nonatomic) long long liveStyle;
@property (readonly, nonatomic) unsigned long long liveMiniWindowType;
@property (nonatomic) BOOL installMute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupBinding;
- (void)setupBindingV2;
- (void)setupLiveMiniWindow;
- (void)pagerView:(id)a0 mainScrollViewDidScroll:(id)a1;
- (void)headerTypeDidChange:(unsigned long long)a0;
- (void)didSetPageContextV2:(id)a0;
- (void)controllerDidLoad;
- (void)iesecshop_didFinishExtensionAreaAnimation;
- (void)iesecshop_willEnterLiveRoomTab:(BOOL)a0;
- (void)iesecshop_didEnterLiveRoomTab:(BOOL)a0;
- (void)p_tapMiniLiveWindow:(id)a0;
- (void)updateLiveInfoModel:(id)a0;
- (void)__subscribeAttachMiniWindow;
- (void)configLiveMiniWindowInstallMute:(long long)a0;
- (void)reSetupLiveMiniWindow;
- (void)p_attachLiveMiniWindowIfNeeded:(id)a0;
- (void)foldLivePreviewIfNeeded;
- (void)handleDetachLiveMiniWindow;
- (BOOL)shouldHideMiniWindow;
- (void)cleanUpLiveMiniWindowIfNeeded;
- (void)notifyMiniWindowAttachStatus:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;

@end
