@class AWEVideoPublishViewModel;
@protocol IESServiceProvider;

@interface ACCSideslipAIGCEffectContainer : IESStaticContainer

@property (weak, nonatomic) id<IESServiceProvider> hostContainer;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;

- (id)initWithHostContainer:(id)a0 repository:(id)a1;
- (id)multiProvideSingleton:(id)a0 ACCSideslipPropService:(id)a1 ACCSideslipPropInternalService:(id)a2;
- (id)multiProvideSingleton:(id)a0 ACCSideslipPropViewContainerProtocol:(id)a1 ACCSideslipPropViewContainerBaseSetterProtocol:(id)a2 ACCAIGCSideslipViewContainerProtocol:(id)a3;
- (id)multiProvideSingleton:(id)a0 ACCSideslipPropPanelService:(id)a1 ACCSideslipPropPanelExpouseCapability:(id)a2 ACCSideslipPropPanelPickViewCapability:(id)a3;
- (id)provideSingleton:(id)a0 ACCSideslipPropPanelCellModelBuilderProtocol:(id)a1;
- (id)multiProvideSingleton:(id)a0 ACCSideslipAIGCPanelListDataProviderProtocol:(id)a1 ACCSideslipPropPanelListDataProvider:(id)a2;
- (id)provideSingleton:(id)a0 ACCSideslipPropPanelUIConfigService:(id)a1;
- (id)multiProvideSingleton:(id)a0 ACCSideslipPropPanelAIGCFocusEditorHandleServiceProtocol:(id)a1 ACCSideslipPropPanelFocusEditorHandleServiceProtocol:(id)a2 ACCSideslipPropPanelFocusHandleService:(id)a3;
- (id)provideSingleton:(id)a0 ACCSideslipPropPanelFocusStatusService:(id)a1;
- (id)provideSingleton:(id)a0 ACCSideslipPropPanelDownloadService:(id)a1;
- (id)provideSingleton:(id)a0 ACCSideslipPropPanelPluginLifeCycleService:(id)a1;
- (id)multiProvideSingleton:(id)a0 ACCSideslipAIGCEffectPanelTrackerServiceProtocol:(id)a1 ACCSideslipPropPanelTrackerService:(id)a2;
- (void).cxx_destruct;

@end
