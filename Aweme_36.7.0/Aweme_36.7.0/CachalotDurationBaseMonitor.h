@class CachalotTimeMonitor, NSString, NSDictionary, CachalotMonitorContext;

@interface CachalotDurationBaseMonitor : NSObject <CachalotDurationBaseMonitor>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) CachalotTimeMonitor *monitor;
@property (nonatomic) long long statusCode;
@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSDictionary *category;
@property (copy, nonatomic) NSDictionary *metric;
@property (copy, nonatomic) NSDictionary *extra;
@property (retain, nonatomic) CachalotMonitorContext *context;

- (void)trigger:(id)a0;
- (void)endAndSendEvent:(id)a0 module:(id)a1 category:(id)a2 metric:(id)a3 extra:(id)a4;
- (id)generalMonitor;
- (void).cxx_destruct;
- (void)begin;

@end
