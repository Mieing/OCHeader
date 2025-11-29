@protocol HTSLivePluginLayoutMachineProvider;

@interface IESLiveAnchorPluginLayoutModule : IESLiveAnchorExecutionModule

@property (retain, nonatomic) id<HTSLivePluginLayoutMachineProvider> pluginLayoutMachine;

- (void).cxx_destruct;
- (void)setup;
- (void)setupOrientation;

@end
