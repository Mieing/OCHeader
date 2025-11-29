@interface AWECommonJsBridgeRegister : NSObject

+ (void)addCommonJsHandler:(id /* block */)a0 forJSMethod:(id)a1;
+ (id)handersForJSMethod:(id)a0;

@end
