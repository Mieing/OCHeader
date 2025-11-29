@class NSLock, NSMutableDictionary;

@interface AppMonitorMetricValueSet : NSObject

@property (retain, nonatomic) NSMutableDictionary *eventsDict;
@property (retain, nonatomic) NSLock *lock;

- (id)eventForId:(id)a0 module:(id)a1 monitorPoint:(id)a2 extraInfo:(id)a3 realTimeDebug:(BOOL)a4;
- (id)eventForId:(id)a0 module:(id)a1 monitorPoint:(id)a2 extraInfo:(id)a3;
- (void).cxx_destruct;
- (long long)metricsCount;
- (id)init;
- (id)events;

@end
