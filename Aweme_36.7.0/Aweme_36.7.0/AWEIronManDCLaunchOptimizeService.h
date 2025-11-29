@class NSDictionary, NSArray, NSMutableArray;

@interface AWEIronManDCLaunchOptimizeService : NSObject

@property (nonatomic) BOOL enableDCOptimizeAB;
@property (nonatomic) BOOL enableDCOptimizeSettings;
@property (retain, nonatomic) NSDictionary *optimizeEnableTiming;
@property (retain, nonatomic) NSArray *settingsConfigs;
@property (retain, nonatomic) NSMutableArray *preloadTaskArr;
@property (retain, nonatomic) NSMutableArray *prefetchTaskArr;
@property (retain, nonatomic) NSMutableArray *preRenderTaskArr;

+ (id)sharedInstance;

- (void)executeContainerOptimizeWithEvent:(id)a0 schema:(id)a1;
- (void)executeContainerOptimizeWithEvent:(id)a0 params:(id)a1;
- (BOOL)enableExecuteOptWithConfig:(id)a0 sceneParams:(id)a1;
- (id)getSceneInfoWithParams:(id)a0;
- (void)executeLaunchOptimizeWithActions:(id)a0 config:(id)a1 params:(id)a2 schema:(id)a3;
- (void)preloadResourceWithConfig:(id)a0 params:(id)a1 schema:(id)a2;
- (void)prefetchResourceWithConfig:(id)a0 params:(id)a1 schema:(id)a2;
- (void)preRenderResourceWithConfig:(id)a0 params:(id)a1 schema:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
