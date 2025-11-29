@class NSString;

@interface AWEPassportJSBridge : NSObject <AWEPassportJSBridgeProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerJSBridgeHandler;
+ (void)registerCodeJSBridgeHandler;
+ (void)registerNativeItemJSBridgeHandler;
+ (void)registerLoginJSBridgeHandler;
+ (void)registerPhoneJSBridgeHandler;
+ (void)registerOtherJSBridgeHandler;
+ (void)finishSwitchAccount;
+ (void)cancelSwitchAccount;
+ (void)trackAccountCarrierTokenJSBCallWith:(id)a0 needToken:(long long)a1 method:(id)a2;
+ (Class)jsBridgeClass;
+ (Class)jsBridgeClass;


@end
