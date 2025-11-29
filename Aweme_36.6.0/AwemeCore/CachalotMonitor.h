@class CachalotMonitorConfig, NSDictionary, CachalotMonitorContext, NSArray;

@interface CachalotMonitor : NSObject

@property (retain, nonatomic) CachalotMonitorConfig *config;
@property (copy, nonatomic) CachalotMonitorContext *context;
@property (copy, nonatomic) NSDictionary *category;
@property (copy, nonatomic) NSDictionary *metric;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSArray *eventSenders;

+ (id)monitorWithConfig:(id)a0;

- (void)sendEvent:(id)a0 category:(id)a1 metric:(id)a2 extra:(id)a3;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
