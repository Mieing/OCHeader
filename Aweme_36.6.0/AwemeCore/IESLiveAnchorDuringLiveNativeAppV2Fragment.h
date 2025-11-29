@class IESLiveNativeAppPluginAnchorInLiveContext, IESLiveNativeAppPluginRouter;

@interface IESLiveAnchorDuringLiveNativeAppV2Fragment : IESLiveRoomComponent

@property (retain, nonatomic) IESLiveNativeAppPluginAnchorInLiveContext *pluginContext;
@property (retain, nonatomic) IESLiveNativeAppPluginRouter *pluginRouter;

- (void)componentMount;
- (void)componentWillAppear;
- (void)componentDidAppear;
- (void)componentWillDisappear;
- (void)componentDidDisappear;
- (void)componentUnmount;
- (void)componentDestroy;
- (void)mountDidFinishForLevel:(long long)a0;
- (void)buildPluginContext;
- (void)buildPluginRouter;
- (void)registerFirstLevelPlugins;
- (void).cxx_destruct;

@end
