@interface IESDefaultClientPortraitProducerImpl : IESMutablePortraitProducer

+ (id)sharedInstance;

- (BOOL)containsKey:(id)a0 inTypes:(unsigned long long)a1;
- (id)getPortraitElement:(id)a0 inTypes:(unsigned long long)a1 params:(id)a2;
- (id)getPortraitElements;
- (void)updatePortrait:(id)a0 value:(id)a1;
- (void)configPortraitKey:(id)a0 config:(id)a1;
- (void)updatePortraitsWithDict:(id)a0;

@end
