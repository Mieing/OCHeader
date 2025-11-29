@class NSString, NSDictionary, CachalotMonitor, CachalotMonitorContext;

@interface CachalotErrorMonitor : NSObject

@property (retain, nonatomic) CachalotMonitor *monitor;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *module;
@property (nonatomic) long long statusCode;
@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSDictionary *category;
@property (copy, nonatomic) NSDictionary *metric;
@property (copy, nonatomic) NSDictionary *extra;
@property (retain, nonatomic) CachalotMonitorContext *context;

- (void)sendEventName:(id)a0;
- (void)send;
- (void).cxx_destruct;

@end
