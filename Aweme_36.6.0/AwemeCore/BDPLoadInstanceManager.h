@interface BDPLoadInstanceManager : NSObject

+ (Class)instanceClassForType:(id)a0;
+ (void)registerVCClass:(Class)a0 forType:(long long)a1;
+ (id)getInstanceWithType:(id)a0 bootManager:(id)a1;
+ (id)createSubContainerWithType:(long long)a0 baseVC:(id)a1;
+ (void)registerContentVCClass:(Class)a0 forType:(long long)a1;
+ (id)createContentVCWithType:(long long)a0 uniqueID:(id)a1;
+ (void)registerClass:(Class)a0 forType:(id)a1;

@end
