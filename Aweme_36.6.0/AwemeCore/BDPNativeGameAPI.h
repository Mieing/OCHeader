@interface BDPNativeGameAPI : NSObject

+ (void)bootstrapLaunch;
+ (void)registerAllAPIsWithType:(long long)a0;
+ (void)registerAPIName:(id)a0 isSynchronize:(BOOL)a1 isOnMainThread:(BOOL)a2 APIClass:(Class)a3 type:(long long)a4;

@end
