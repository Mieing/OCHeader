@class NSString, NSMapTable, RTVXRBaseBusinessHandler, __RTVXRControllerScopeBinder, __RTVXRControllerBinderManager, RTVComponentContext;
@protocol RxInjector;

@interface __RTVXRScopeControllerInjector : NSObject <__RTVXRControllerInjector, RTVXRControllerInjector> {
    struct RecursiveMutex { int _type; union { struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _plain; struct recursive_mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _recursive; } ; } _lock;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, copy, nonatomic) NSString *scopeKey;
@property (retain, nonatomic) __RTVXRControllerBinderManager *binderManager;
@property (readonly, weak, nonatomic) RTVXRBaseBusinessHandler *businessHandler;
@property (readonly, weak, nonatomic) __RTVXRControllerScopeBinder *binder;
@property (retain, nonatomic) NSMapTable *parentControllerInjectors;
@property (nonatomic) BOOL isTreeStructure;
@property (weak, nonatomic) RTVComponentContext *componentContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rxInjectorCreateWithArgs:(id)a0 injector:(id)a1;
+ (id)__createInjectorWithBinderManager:(id)a0 parentControllerInjectors:(id)a1 injector:(id)a2;

- (void)renderModel:(id)a0 context:(id)a1;
- (id)getInstance:(id)a0;
- (void)injectController:(id)a0;
- (id)getController:(id)a0;
- (id)getControllerForKey:(id)a0;
- (void)__log:(id)a0;
- (id)__allCachedControllers;
- (void)__injectController:(id)a0 forKey:(id)a1 binder:(id)a2;
- (void)__injectController:(id)a0 controllerInjector:(id)a1;
- (void)__doInjectController:(id)a0 controllerInjector:(id)a1;
- (void)injectController:(id)a0 forKey:(id)a1;
- (BOOL)isRefactorControllerInjector;
- (void)removeInjectorController:(id)a0;
- (void)injectController:(id)a0 forProtocol:(id)a1;
- (void)releaseControllerForKey:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)dealloc;

@end
