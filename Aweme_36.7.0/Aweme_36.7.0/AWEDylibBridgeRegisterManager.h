@interface AWEDylibBridgeRegisterManager : NSObject

+ (void)registerJSBridgeForDylib;
+ (void)registerAWEJS2NativeHandlerForDylib;
+ (void)registerLynxBridgeForDylib;

@end
