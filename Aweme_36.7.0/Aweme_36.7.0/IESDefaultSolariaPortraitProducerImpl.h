@interface IESDefaultSolariaPortraitProducerImpl : IESPortraitProducer

+ (id)sharedInstance;

- (void)doSetup;
- (BOOL)containsKey:(id)a0 inTypes:(unsigned long long)a1;
- (id)getPortraitElement:(id)a0 inTypes:(unsigned long long)a1 params:(id)a2;
- (id)getPortraitElements;

@end
