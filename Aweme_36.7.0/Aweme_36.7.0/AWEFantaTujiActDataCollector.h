@interface AWEFantaTujiActDataCollector : AWEFantaAbstractDataCollector

+ (id)sharedInstance;

- (void)triggerTujiAction:(unsigned long long)a0 forAwemeItem:(id)a1;
- (void)triggerTujiAction:(unsigned long long)a0 forAwemeItemID:(id)a1 referString:(id)a2;
- (id)type;

@end
