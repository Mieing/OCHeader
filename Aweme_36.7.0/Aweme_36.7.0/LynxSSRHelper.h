@interface LynxSSRHelper : NSObject {
    long long _hydrateStatus;
}

+ (id)processEventParams:(id)a0;

- (void)onLoadSSRDataStart;
- (void)onHydrateStart;
- (void)onHydrateExecuting;
- (void)onHydrateFinished;
- (void)onErrorOccurred:(long long)a0 sourceError:(id)a1;
- (BOOL)isHydrateStarted;
- (BOOL)isHydratePending;
- (BOOL)shouldSendEventToSSR;
- (id)init;

@end
