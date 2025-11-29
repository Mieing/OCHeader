@class NSDictionary;

@interface AWECommonPortraitProducerImpl : IESMutablePortraitProducer

@property (retain, nonatomic) NSDictionary *portraitHandlerMap;

+ (id)sharedInstance;

- (void)doSetup;
- (BOOL)containsKey:(id)a0 inTypes:(unsigned long long)a1;
- (id)getPortraitElement:(id)a0 inTypes:(unsigned long long)a1 params:(id)a2;
- (id)getPortraitElements;
- (void)configKeys;
- (id)buildCustomKeysAndConfigs;
- (void).cxx_destruct;

@end
