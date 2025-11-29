@class AnimaXMonitorAbilityDelegate, AnimaXServiceRegistry, NSHashTable, NSLock;

@interface BaseAnimaXAbility : NSObject

@property (readonly, nonatomic) AnimaXServiceRegistry *serviceRegistry;
@property (retain, nonatomic) NSHashTable *animationListeners;
@property (retain, nonatomic) NSLock *animationListenersLock;
@property (readonly, nonatomic) AnimaXMonitorAbilityDelegate *monitorDelegate;

- (void)registerService:(id)a0 withImpl:(id)a1;
- (id)getMonitorDelegate;
- (void)handleEvent:(void *)a0 params:(id)a1;
- (void)addAnimationListener:(id)a0;
- (void)removeAnimationListener:(id)a0;
- (id)getServiceScope;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)unregisterService:(id)a0;
- (id)allListeners;
- (id)getService:(id)a0;

@end
