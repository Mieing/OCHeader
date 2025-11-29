@interface BDPPublicAPI : NSObject

+ (void)registerAllAPIs;
+ (void)registerAPIName:(id)a0 isSynchronize:(BOOL)a1 isOnMainThread:(BOOL)a2 APIClass:(Class)a3;
+ (void)bootstrapLaunch;

@end
