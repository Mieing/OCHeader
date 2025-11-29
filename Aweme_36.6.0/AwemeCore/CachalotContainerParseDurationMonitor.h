@class CachalotTimeMonitor;

@interface CachalotContainerParseDurationMonitor : CachalotDurationBaseMonitor

@property (retain, nonatomic) CachalotTimeMonitor *monitor;
@property (nonatomic) BOOL reuse;

- (void)onBeginParse;
- (id)generalMonitor;
- (void)onEndParse;
- (void).cxx_destruct;

@end
