@class NSMutableDictionary, NSMutableArray;

@interface JSCSampleProfiler : NSObject {
    NSMutableDictionary *_lastProfileLogs;
    NSMutableDictionary *_currProfileLogs;
    NSMutableDictionary *_timers;
    NSMutableArray *_contexts;
}

+ (id)sharedInstance;

- (id)init;
- (void)startSampleProfile:(id)a0;
- (void)stopSampleProfile:(id)a0;
- (void)captureSamplesNow:(id /* block */)a0;
- (void)jscScriptProfilerStartTracking:(id)a0;
- (void)jscScriptProfilerStopTracking:(id)a0;
- (void)updateSampleData:(id)a0 contextName:(id)a1;
- (id)contextName:(id)a0;
- (void).cxx_destruct;

@end
