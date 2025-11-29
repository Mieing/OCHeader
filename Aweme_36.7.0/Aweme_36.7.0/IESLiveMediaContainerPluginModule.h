@class NSArray;

@interface IESLiveMediaContainerPluginModule : IESLiveMediaExecutionBaseModule

@property (retain, nonatomic) NSArray *plugins;

- (void)didSetAttachingDIContext;
- (void)setupPlugins:(id)a0;
- (void)initialize:(id)a0 params:(id)a1;
- (void)viewDidDestroy:(id)a0 params:(id)a1;
- (id)initWithPlugins:(id)a0;
- (void).cxx_destruct;

@end
