@class AWEStudioRecorderFeaturePropConfig, AWEVideoPublishViewModel;
@protocol IESServiceProvider;

@interface ACCSideslipPropPanelServiceRecorderContainer : IESStaticContainer

@property (weak, nonatomic) id<IESServiceProvider> hostContainer;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (retain, nonatomic) AWEStudioRecorderFeaturePropConfig *featureConfig;

- (id)initWithHostContainer:(id)a0 repository:(id)a1;
- (id)multiProvideSingleton:(id)a0 ACCSideslipPropService:(id)a1 ACCSideslipPropInternalService:(id)a2;
- (id)multiProvideSingleton:(id)a0 ACCSideslipPropPanelService:(id)a1 ACCSideslipPropPanelExpouseCapability:(id)a2 ACCSideslipPropPanelPickViewCapability:(id)a3;
- (id)provideSingleton:(id)a0 ACCSideslipPropPanelCellModelBuilderProtocol:(id)a1;
- (id)provideSingleton:(id)a0 ACCSideslipPropPanelFocusStatusService:(id)a1;
- (id)provideSingleton:(id)a0 ACCSideslipPropPanelDownloadService:(id)a1;
- (id)provideSingleton:(id)a0 ACCSideslipPropPanelPluginLifeCycleService:(id)a1;
- (id)provideSingleton:(id)a0 ACCSideslipPropPanelTrackerService:(id)a1;
- (id)provideSingleton:(id)a0 ACCSideslipPropPanelPrefetchService:(id)a1;
- (id)provideSingleton:(id)a0 ACCSideslipPropPanelFavoriteService:(id)a1;
- (id)initWithHostContainer:(id)a0 repository:(id)a1 featureConfig:(id)a2;
- (id)provideSingleton:(id)a0 ACCSideslipPropPanelRecordTransition:(id)a1;
- (id)multiProvideSingleton:(id)a0 ACCSideslipPropPanelUIConfigService:(id)a1 ACCSideslipPropPanelRecordUIConfigService:(id)a2;
- (id)multiProvideSingleton:(id)a0 ACCSideslipPropViewContainerProtocol:(id)a1 ACCSideslipPropViewContainerBaseSetterProtocol:(id)a2 ACCRecorderSideslipViewContainerProtocol:(id)a3 ACCRecorderSideslipViewContainerSetterProtocol:(id)a4;
- (id)provideSingleton:(id)a0 ACCSideslipPropPanelListDataProvider:(id)a1;
- (id)provideSingleton:(id)a0 ACCSideslipPropPanelPreloadService:(id)a1;
- (id)provideSingleton:(id)a0 ACCSideslipPropPanelFocusHandleService:(id)a1;
- (id)provideSingleton:(id)a0 ACCRecordPropRankService:(id)a1;
- (void).cxx_destruct;

@end
