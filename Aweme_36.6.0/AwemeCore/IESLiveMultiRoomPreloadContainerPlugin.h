@class HTSLive4LayerContainerView;
@protocol HTSLivePluginLayoutMachineProvider;

@interface IESLiveMultiRoomPreloadContainerPlugin : IESLiveMultiRoomPreloadBasePlugin

@property (retain, nonatomic) HTSLive4LayerContainerView *containerView;
@property (retain, nonatomic) id<HTSLivePluginLayoutMachineProvider> pluginLayoutMachine;

- (void)tempStaging;
- (void)loadWithContextPlugin:(id)a0;
- (id)getContainerView:(BOOL)a0;
- (id)getPluginLayoutMachine:(BOOL)a0;
- (void).cxx_destruct;

@end
