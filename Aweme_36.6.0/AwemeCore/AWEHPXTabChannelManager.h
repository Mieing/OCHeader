@class NSArray, AWEHPXTabChannelViewController;

@interface AWEHPXTabChannelManager : AWEHPChannelBaseManager

@property (retain, nonatomic) AWEHPXTabChannelViewController *contentVC;
@property (copy, nonatomic) NSArray *pluginControllers;

- (id)getPrePluginControllers;
- (BOOL)channelTopTabShouldRepeatedClickTab;
- (void)channelWillReloadWithConfig:(id)a0;
- (double)interactionRightContainerHeight;
- (double)nextInteractionRightContainerHeight;
- (void)channel:(id)a0 startPreload:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)getContentViewController;
- (void)generateContentVCIfNeed;
- (void)didSwitchSelectedChannelFromChannel:(id)a0 toChannel:(id)a1 config:(id)a2;
- (id)getXTabStageWithChannel:(id)a0;
- (void)reloadWithConfig:(id)a0 selectedChannelID:(id)a1;
- (void)p_endUpdateSelectedChannelPerfMetricsMonitor:(id)a0 previousChannel:(id)a1;
- (void)callSelectedChannelAnimatedRefreshWithRefreshType:(long long)a0 completion:(id /* block */)a1;
- (void)beginUpdateSelectedChannelPerfMetricsMonitorByClick;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
