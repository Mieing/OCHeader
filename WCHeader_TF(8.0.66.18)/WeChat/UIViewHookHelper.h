@interface UIViewHookHelper : NSObject

+ (void)hookUIView:(id)a0;
+ (void)unHookUIView:(id)a0;
+ (void)hookUIScrollViewDelegate:(id)a0;
+ (void)unHookUIScrollViewDelegate:(id)a0;
+ (void)addInstanceMethodWithSelectors:(SEL)a0 object:(id)a1 fromClass:(Class)a2 toClass:(Class)a3;
+ (void /* function */ *)implementationOfMethodSelector:(SEL)a0 fromClass:(Class)a1;
+ (void)addInstanceMethodWithSelector:(SEL)a0 fromClass:(Class)a1 toClass:(Class)a2;
+ (void)addInstanceMethodWithDestinationSelector:(SEL)a0 sourceSelector:(SEL)a1 fromClass:(Class)a2 toClass:(Class)a3;
+ (BOOL)isHookSwitch;

- (void)scrollViewDidScroll:(id)a0;

@end
