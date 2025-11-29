@class AWEVideoPublishViewModel;
@protocol IESServiceProvider;

@interface ACCSideslipOneClickFilmPanelServiceEditorContainer : IESStaticContainer

@property (weak, nonatomic) id<IESServiceProvider> hostContainer;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;

- (id)initWithHostContainer:(id)a0 repository:(id)a1;
- (id)provideSingleton:(id)a0 ACCSideslipGenericTemplateService:(id)a1;
- (id)multiProvideSingleton:(id)a0 ACCSideslipPropService:(id)a1 ACCSideslipPropInternalService:(id)a2;
- (id)multiProvideSingleton:(id)a0 ACCSideslipPropPanelService:(id)a1 ACCSideslipPropPanelExpouseCapability:(id)a2 ACCSideslipPropPanelPickViewCapability:(id)a3;
- (id)provideSingleton:(id)a0 ACCSideslipPropPanelCellModelBuilderProtocol:(id)a1;
- (id)provideSingleton:(id)a0 ACCSideslipPropPanelUIConfigService:(id)a1;
- (id)provideSingleton:(id)a0 ACCSideslipPropPanelFocusStatusService:(id)a1;
- (id)provideSingleton:(id)a0 ACCSideslipPropPanelDownloadService:(id)a1;
- (id)provideSingleton:(id)a0 ACCSideslipPropPanelPluginLifeCycleService:(id)a1;
- (id)provideSingleton:(id)a0 ACCEditToolMusicEffectProtocol:(id)a1;
- (id)multiProvideSingleton:(id)a0 ACCSideslipPropViewContainerProtocol:(id)a1 ACCSideslipPropViewContainerBaseSetterProtocol:(id)a2;
- (id)multiProvideSingleton:(id)a0 ACCEditorSideslipPropPanelListDataProviderProtocol:(id)a1 ACCSideslipPropPanelListDataProvider:(id)a2;
- (id)provideSingleton:(id)a0 ACCSideslipPropPanelTrackerService:(id)a1;
- (id)provideSingleton:(id)a0 ACCSideslipPropPanelPrefetchService:(id)a1;
- (id)multiProvideSingleton:(id)a0 ACCSideslipPropPanelFocusEditorHandleServiceProtocol:(id)a1 ACCSideslipPropPanelFocusHandleService:(id)a2;
- (id)provideSingleton:(id)a0 ACCSideslipPropPanelEditorEventDispatchServiceProtocol:(id)a1;
- (id)provideSingleton:(id)a0 ACCSideslipPropPanelFavoriteService:(id)a1;
- (id)provideSingleton:(id)a0 ACCSideslipPropPanelFavoriteCapability:(id)a1;
- (void).cxx_destruct;

@end
