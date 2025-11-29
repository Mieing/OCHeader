@interface BDPBusinessBridgeCenter : NSObject

+ (void)registerContextAPIName:(id)a0 isSynchronous:(BOOL)a1 isOnMainThread:(BOOL)a2 instance:(id)a3 type:(long long)a4 APIHandler:(id /* block */)a5;
+ (void)invokeMethod:(id)a0 type:(long long)a1 instance:(id)a2 checkBlock:(id /* block */)a3 executeResult:(id /* block */)a4;
+ (BOOL)ignoreAPICallBack;
+ (id)apiInfoWithName:(id)a0 isIgnoreCallBack:(BOOL)a1 isOnMainThread:(BOOL)a2 isOnCurrentThread:(BOOL)a3 isSynchronize:(BOOL)a4 type:(long long)a5;
+ (id)apiInfoWithName:(id)a0 isIgnoreCallBack:(BOOL)a1 isOnMainThread:(BOOL)a2 isSynchronize:(BOOL)a3 type:(long long)a4;
+ (void)registerInstanceAPIName:(id)a0 isSynchronize:(BOOL)a1 isOnMainThread:(BOOL)a2 isIgnoreCallBack:(BOOL)a3 APIClass:(Class)a4 type:(long long)a5;
+ (void)registerContextAPIName:(id)a0 isIgnoreCallBack:(BOOL)a1 isSynchronous:(BOOL)a2 isOnMainThread:(BOOL)a3 instance:(id)a4 type:(long long)a5 APIHandler:(id /* block */)a6;
+ (id)buildWukongAPIName:(id)a0 isSynchronize:(BOOL)a1 isOnMainThread:(BOOL)a2 methodClass:(Class)a3 implClass:(Class)a4 type:(long long)a5;
+ (void)registerExeOnCurThreadInstanceAPIName:(id)a0 isSynchronize:(BOOL)a1 APIClass:(Class)a2 type:(long long)a3;
+ (void)registerInstanceAPIName:(id)a0 isSynchronize:(BOOL)a1 isOnMainThread:(BOOL)a2 APIClass:(Class)a3 type:(long long)a4;
+ (void)registerNoCallBackInstanceAPIName:(id)a0 isSynchronize:(BOOL)a1 isOnMainThread:(BOOL)a2 APIClass:(Class)a3 type:(long long)a4;
+ (void)registerNoCallBackContextAPIName:(id)a0 isSynchronous:(BOOL)a1 isOnMainThread:(BOOL)a2 instance:(id)a3 type:(long long)a4 APIHandler:(id /* block */)a5;

@end
