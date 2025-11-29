@class NSMutableDictionary;

@interface IESLatchMonitor : NSObject

@property (retain, nonatomic) NSMutableDictionary *businessMonitorMap;

+ (id)sharedMonitor;

- (void)reportCustomWithBusiness:(id)a0 containerId:(id)a1 EventName:(id)a2 url:(id)a3 lynxView:(id)a4 metric:(id)a5 category:(id)a6 extra:(id)a7 maySample:(BOOL)a8;
- (void)registerMonitor:(id)a0 forBusiness:(id)a1;
- (void)monitorLatchServiceWithTemplate:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
