@interface TTVideoEnginePreloader : NSObject

+ (void)notifyPreload:(id)a0 info:(id)a1;
+ (id)classSet;
+ (BOOL)shouldPreload:(id)a0;
+ (void)engine:(id)a0 prelaod:(id)a1;
+ (void)engine:(id)a0 cancelAllPrelaod:(id)a1;
+ (BOOL)hasRegistClass;
+ (void)notifyPreloadCancel:(id)a0 info:(id)a1;
+ (void)engine:(id)a0 playInfo:(id)a1;
+ (BOOL)registerClass:(Class)a0;
+ (void)unregisterClass:(Class)a0;

@end
