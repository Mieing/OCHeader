@interface AWEFantaAppLogDataCollector : AWEFantaAbstractDataCollector

+ (id)sharedInstance;

- (void)onEvent:(id)a0 params:(id)a1;
- (void)onDataCollectorInit;
- (id)type;

@end
