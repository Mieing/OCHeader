@interface BDPInteractGameAPI : NSObject

+ (void)registerAllAPIs;
+ (void)registerAPIName:(id)a0 isSynchronize:(BOOL)a1 isOnMainThread:(BOOL)a2 APIClass:(Class)a3;
+ (void)bootstrapLaunch;
+ (Class)judgeAPIClass:(Class)a0 originClass:(Class)a1 isOpen:(BOOL)a2;

@end
