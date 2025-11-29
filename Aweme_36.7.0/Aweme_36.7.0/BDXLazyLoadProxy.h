@class NSMutableArray;

@interface BDXLazyLoadProxy : NSProxy

@property (retain, nonatomic) NSMutableArray *methodsChain;
@property (retain, nonatomic) Class targetClass;
@property (copy, nonatomic) id /* block */ selectorFilter;

- (id)initWithTargetClass:(Class)a0 filter:(id /* block */)a1;
- (void)applyToTarget:(id)a0 clean:(BOOL)a1;
- (id)initWithTargetClass:(Class)a0;
- (void)applyToTarget:(id)a0;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (void)clean;

@end
