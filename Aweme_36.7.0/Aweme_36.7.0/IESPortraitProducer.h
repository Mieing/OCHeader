@interface IESPortraitProducer : NSObject

@property (nonatomic) BOOL hasCallInit;

- (void)doSetup;
- (BOOL)containsKey:(id)a0 inTypes:(unsigned long long)a1;
- (id)getPortraitElement:(id)a0 inTypes:(unsigned long long)a1 params:(id)a2;
- (id)getPortraitElements;
- (id)init;
- (void)setup;

@end
