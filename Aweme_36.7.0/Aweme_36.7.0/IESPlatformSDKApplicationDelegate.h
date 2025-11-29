@class NSMutableDictionary;

@interface IESPlatformSDKApplicationDelegate : NSObject

@property (retain, nonatomic) NSMutableDictionary *servicesMapper;

+ (BOOL)sendReqToConsumer:(id)a0;
+ (BOOL)sendRespToConsumer:(id)a0;
+ (BOOL)application:(id)a0 openURL:(id)a1 delegate:(id)a2 productType:(long long)a3;
+ (id)sharedDelegate;
+ (void)registerServiceClass:(Class)a0;

- (id)URLServicerForServiceName:(id)a0;
- (BOOL)sendReqToConsumer:(id)a0;
- (BOOL)sendRespToConsumer:(id)a0;
- (BOOL)isSupportedService:(id)a0;
- (BOOL)application:(id)a0 openURL:(id)a1 delegate:(id)a2 productType:(long long)a3;
- (void)askForContentSyncWithReq:(id)a0 forDelegate:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)registerServiceClass:(Class)a0;

@end
