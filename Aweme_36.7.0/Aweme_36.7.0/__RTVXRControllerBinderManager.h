@class NSMapTable, __RTVXRControllerScopeBinder;
@protocol RxInjector;

@interface __RTVXRControllerBinderManager : NSObject {
    struct RecursiveMutex { int _type; union { struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _plain; struct recursive_mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _recursive; } ; } _lock;
}

@property (retain, nonatomic) NSMapTable *binderMap;
@property (weak, nonatomic) __RTVXRControllerScopeBinder *rootBinder;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (nonatomic) BOOL isTreeStructure;

- (void)rxAwakeFromPropertyInjection;
- (id)__allCachedControllers;
- (id)getControllerFromCache:(id)a0 scopeKey:(id)a1;
- (id)injectorKeyForControllerKey:(id)a0 scopeKey:(id)a1;
- (BOOL)cacheController:(id)a0 forKey:(id)a1 inScopeKey:(id)a2;
- (void)addScopeBinder:(id)a0 forKey:(id)a1;
- (id)scopeBinderForKey:(id)a0;
- (void)removeBinderForKey:(id)a0;
- (void)updateRootBinder:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
