@class NSDictionary, PerfAnalysisContext;

@interface PerfAnalysisPlugin : NSObject {
    PerfAnalysisContext *_context;
}

@property (retain, nonatomic) NSDictionary *config;

+ (id)name;

- (id)initWithConfig:(id)a0 context:(id)a1;
- (void)saveResult:(id)a0;
- (void)willLaunch;
- (void)didLaunch;
- (void).cxx_destruct;
- (void)willTerminate;
- (void)onLoad;

@end
