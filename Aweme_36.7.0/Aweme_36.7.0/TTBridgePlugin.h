@protocol TTBridgeEngine;

@interface TTBridgePlugin : NSObject

@property (weak, nonatomic) id<TTBridgeEngine> engine;

+ (id)sharedPlugin;
+ (id /* block */)handlerWithMethod:(id)a0 ofEngine:(id)a1;
+ (void)registerHandlerBlock:(id /* block */)a0 forEngine:(id)a1 selector:(SEL)a2;
+ (unsigned long long)authType;
+ (unsigned long long)instanceType;

- (BOOL)hasExternalHandleForMethod:(id)a0 params:(id)a1 callback:(id /* block */)a2;
- (void).cxx_destruct;

@end
