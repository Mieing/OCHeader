@interface AWEAdPortraitProducerImpl : IESPortraitProducer

+ (id)sharedInstance;

- (void)doSetup;
- (BOOL)containsKey:(id)a0 inTypes:(unsigned long long)a1;
- (id)getPortraitElement:(id)a0 inTypes:(unsigned long long)a1 params:(id)a2;
- (id)getPortraitElements;
- (BOOL)checkDisableRuleConfig:(id)a0 strategy:(id)a1;
- (id)getAdPortraitInner:(id)a0 itemID:(id)a1;

@end
