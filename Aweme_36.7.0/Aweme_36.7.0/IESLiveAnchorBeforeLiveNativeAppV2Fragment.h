@class IESLiveNativeAppPluginRouter, IESLiveNativeAppPluginAnchorBeforeLiveContext;

@interface IESLiveAnchorBeforeLiveNativeAppV2Fragment : IESLiveGuideComponent

@property (retain, nonatomic) IESLiveNativeAppPluginAnchorBeforeLiveContext *pluginContext;
@property (retain, nonatomic) IESLiveNativeAppPluginRouter *pluginRouter;

- (void)componentBindService;
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
- (void)registerFirstLevelPlugins:(long long)a0;
- (void).cxx_destruct;

@end
