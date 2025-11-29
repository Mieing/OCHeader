@class NSString, UIViewController, AWEVideoPublishViewModel;
@protocol ACCSideslipPropPanelRecordUIConfigService, ACCPropPickerService, IESServiceProvider, ACCSideslipPropPanelService, ACCSideslipPropService, ACCSideslipPropViewContainerProtocol, ACCSideslipPropPanelPluginLifeCycleService;

@interface ACCSideslipPropPanelRecordTransitionImpl : NSObject <ACCSideslipPropPanelRecordTransition>

@property (weak, nonatomic) id<IESServiceProvider> sideslipServiceProvider;
@property (retain, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) UIViewController *hostVC;
@property (weak, nonatomic) id<ACCSideslipPropViewContainerProtocol> viewContainer;
@property (weak, nonatomic) id<ACCPropPickerService> propPickerService;
@property (weak, nonatomic) id<ACCSideslipPropPanelService> sideslipPropPanelService;
@property (weak, nonatomic) id<ACCSideslipPropService> sideslipPropService;
@property (weak, nonatomic) id<ACCSideslipPropPanelPluginLifeCycleService> pluginLifeCycleService;
@property (weak, nonatomic) id<ACCSideslipPropPanelRecordUIConfigService> sideslipRecordUIConfigService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configHostViewController:(id)a0;
- (void)exposeOnView:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)showOnView:(id)a0 locateIndex:(long long)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)fadeShow:(BOOL)a0;
- (void).cxx_destruct;
- (void)dismissAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)initWithServiceProvider:(id)a0;

@end
