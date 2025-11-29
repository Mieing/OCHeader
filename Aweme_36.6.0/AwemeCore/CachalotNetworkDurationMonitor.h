@class NSString;

@interface CachalotNetworkDurationMonitor : CachalotDurationBaseMonitor

@property (copy, nonatomic) NSString *module;

- (id)generalMonitor;
- (void)onRequest;
- (void)onResponse;
- (void)onEndParse;
- (void).cxx_destruct;

@end
