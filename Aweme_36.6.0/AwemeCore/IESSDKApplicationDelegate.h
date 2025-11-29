@class NSMutableDictionary;

@interface IESSDKApplicationDelegate : NSObject

@property (retain, nonatomic) NSMutableDictionary *servicesMapper;

+ (id)URLServicerForServiceName:(id)a0;
+ (BOOL)sendMsgToBytedanceAPPsWithReq:(id)a0;
+ (BOOL)sendMsgToBytedanceAPPsWithResp:(id)a0;
+ (BOOL)application:(id)a0 openURL:(id)a1 delegate:(id)a2 forProduct:(long long)a3;
+ (id)sharedDelegate;
+ (void)registerServiceClass:(Class)a0;

- (id)URLServicerForServiceName:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)registerServiceClass:(Class)a0;

@end
