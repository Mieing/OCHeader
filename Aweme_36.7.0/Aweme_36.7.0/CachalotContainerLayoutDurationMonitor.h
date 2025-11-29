@interface CachalotContainerLayoutDurationMonitor : CachalotDurationBaseMonitor

@property (nonatomic) BOOL reuse;

- (void)onBeginLayout;
- (void)onEndLayout;
- (id)generalMonitor;

@end
