@interface AWEFantaUserAct2DataCollector : AWEFantaAbstractDataCollector

+ (id)sharedInstance;

- (void)triggerUserAction2:(unsigned long long)a0 forAwemeItem:(id)a1;
- (void)triggerUserAction2:(unsigned long long)a0 forAwemeItemID:(id)a1 referString:(id)a2 params:(id)a3;
- (id)type;

@end
