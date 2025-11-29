@interface CachalotCardRenderDurationMonitor : CachalotDurationBaseMonitor

@property (nonatomic) BOOL reuse;
@property (nonatomic) long long position;

- (void)onBeginRender;
- (void)onEndRender;
- (id)generalMonitor;

@end
