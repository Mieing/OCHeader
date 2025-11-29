@class NSBundle;

@interface BCAABundleContext : NSObject

@property (readonly, nonatomic) NSBundle *bundle;

- (BOOL)registerService:(id)a0 toClass:(Class)a1 instancePointer:(id)a2;
- (id)getInstanceService:(id)a0;
- (Class)getClassService:(id)a0;
- (BOOL)isServiceRegistered:(id)a0;
- (void)addServiceListener:(id)a0 forService:(id)a1;
- (void)removeServiceListener:(id)a0 forService:(id)a1;
- (id)dylibNameForCustomSection:(id)a0 andModule:(id)a1;
- (id)dylibNameForCustomSection:(id)a0 andModule:(id)a1 withKey:(id)a2;
- (id)contentForCustomSection:(id)a0;
- (BOOL)checkIfLazyDylibEnable:(id)a0;
- (void).cxx_destruct;
- (id)initWithBundle:(id)a0;
- (void)startResolve;

@end
