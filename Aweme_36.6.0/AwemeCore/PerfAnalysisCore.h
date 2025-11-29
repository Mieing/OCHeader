@class NSArray, NSDictionary, PerfAnalysisContext;

@interface PerfAnalysisCore : NSObject

@property (retain, nonatomic) NSArray *plugins;
@property (retain, nonatomic) NSDictionary *pluginConfigs;
@property (retain, nonatomic) PerfAnalysisContext *context;

+ (void)_aweLazyRegisterLoad;
+ (void)applicationWillResignActive:(id)a0;
+ (void)applicationDidFinishLaunching:(id)a0;
+ (void)applicationDidBecomeActive;
+ (void)applicationWillTerminate;
+ (id)sharedInstance;

- (void)hookApplicationRun;
- (void)PerfAnalysis_viewDidAppear:(BOOL)a0;
- (void)PerfAnalysis_run;
- (id)loadPluginConfigs;
- (id)detectPlugins;
- (void).cxx_destruct;
- (id)loadPlugins;

@end
