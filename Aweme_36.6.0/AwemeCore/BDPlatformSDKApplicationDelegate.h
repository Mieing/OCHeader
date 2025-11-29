@class NSMutableDictionary;

@interface BDPlatformSDKApplicationDelegate : NSObject

@property (retain, nonatomic) NSMutableDictionary *servicesMapper;

+ (BOOL)application:(id)a0 openURL:(id)a1 delegate:(id)a2;
+ (BOOL)sendReqToConsumer:(id)a0;
+ (BOOL)sendRespToConsumer:(id)a0;
+ (id)sharedDelegate;
+ (void)registerServiceClass:(Class)a0;

- (BOOL)application:(id)a0 openURL:(id)a1 delegate:(id)a2;
- (id)URLServicerForServiceName:(id)a0;
- (BOOL)sendReqToConsumer:(id)a0;
- (BOOL)sendRespToConsumer:(id)a0;
- (BOOL)isSupportedService:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)registerServiceClass:(Class)a0;

@end
