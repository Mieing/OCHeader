@class HMDThreadMonitorConfig, NSMutableArray;

@interface HMDThreadMonitor : HeimdallrModule

@property (retain, nonatomic) HMDThreadMonitorConfig *threadConfig;
@property (retain, nonatomic) NSMutableArray *threadSubModules;

+ (id)shared;

- (void)updateConfig:(id)a0;
- (void)loadSubModuleIfNeed;
- (void)unloadSubModulesIfNeed;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)start;

@end
