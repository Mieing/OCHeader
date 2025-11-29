@protocol IESBridgeExecutor;

@interface IESJSMethodManager : NSObject

@property (weak, nonatomic) id<IESBridgeExecutor> executor;

+ (id)managerWithBridgeExecutor:(id)a0;
+ (id)injectionScriptWithJSMethod:(id)a0 messageHandler:(id)a1;
+ (id)injectionScriptWithJSMethods:(id)a0 messageHandler:(id)a1;

- (id)allHandlerNames;
- (void)deleteAllPipers;
- (id)allJSMethodsForKey:(id)a0;
- (void)enumerateAllMethodsForKey:(id)a0 withHandler:(id /* block */)a1;
- (void)queryPreferredJSMethodForKey:(id)a0 withHandler:(id /* block */)a1;
- (void)checkAllJSMethodsDefinedForKey:(id)a0 withHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
