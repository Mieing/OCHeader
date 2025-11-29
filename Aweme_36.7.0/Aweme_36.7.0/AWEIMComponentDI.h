@class NSMapTable, NSMutableDictionary, NSString, NSObject;
@protocol OS_dispatch_semaphore;

@interface AWEIMComponentDI : NSObject <AWEIMComponentDIService> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _wrLock;
}

@property (retain, nonatomic) NSMapTable *servicesMap;
@property (retain, nonatomic) NSMutableDictionary *multiableServices;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lazyServiceResolveLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)p_lazyServiceSupportMultiThread;

- (id)resolveService:(id)a0;
- (void)bindService:(id)a0 target:(id)a1;
- (void)injectToMultiableService:(id)a0 withTarget:(id)a1;
- (id)resolveMultiableService:(id)a0;
- (id)resolveService:(id)a0 withFactory:(id)a1;
- (BOOL)__checkServiceProvider:(id)a0 canProvideService:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
