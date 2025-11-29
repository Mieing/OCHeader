@class NSMutableSet;

@interface AWEServiceEntryManager : NSObject

@property (retain, nonatomic) NSMutableSet *hideEntryServices;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } serviceEntryLock;
@property (nonatomic) BOOL enabled;

+ (BOOL)isHTSServiceEntryAvailable:(id)a0;
+ (void)_aweLazyRegisterLoad;
+ (id)getHTSServiceInstanceFor:(id)a0 available:(BOOL *)a1;
+ (id)getHTSServiceClassFor:(id)a0 available:(BOOL *)a1;
+ (void)registUnavailableService:(id)a0;
+ (id)p_getHideEntryServices;
+ (BOOL)enabled;
+ (id)sharedManager;

- (id)getHTSServiceInstanceFor:(id)a0 available:(BOOL *)a1;
- (Class)getHTSServiceClassFor:(id)a0 available:(BOOL *)a1;
- (void)registUnavailableService:(id)a0;
- (BOOL)p_isHTSServiceEntryAvailable:(id)a0;
- (id)p_getHideEntryServices;
- (void)preloadServiceEntryInfoAsync;
- (void)ensureAllServiceEntryLoaded;
- (void).cxx_destruct;
- (id)init;

@end
