@interface AWEFantaUserActDataCollector : AWEFantaAbstractDataCollector

+ (id)sharedInstance;

- (void)triggerUserAction:(unsigned long long)a0 forAwemeItem:(id)a1;
- (id)type;

@end
