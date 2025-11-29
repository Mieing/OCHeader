@interface AWEFantaGlobalUserActDataCollector : AWEFantaAbstractDataCollector

+ (id)sharedInstance;

- (void)triggerUserAction:(unsigned long long)a0 forAwemeItem:(id)a1;
- (void)triggerUserAction:(unsigned long long)a0 forAwemeItemID:(id)a1 referString:(id)a2 params:(id)a3;
- (id)type;

@end
