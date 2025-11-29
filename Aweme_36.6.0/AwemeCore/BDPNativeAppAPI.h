@interface BDPNativeAppAPI : NSObject

+ (void)registerAllAPIs;
+ (void)registerAPIName:(id)a0 isSynchronize:(BOOL)a1 isOnMainThread:(BOOL)a2 APIClass:(Class)a3;
+ (void)bootstrapLaunch;
+ (void)registerPreloadAPI;
+ (void)registerNoCallbackAPIName:(id)a0 isSynchronize:(BOOL)a1 isOnMainThread:(BOOL)a2 APIClass:(Class)a3;
+ (void)registerExeCurThreadAPIName:(id)a0 isSynchronize:(BOOL)a1 APIClass:(Class)a2;

@end
