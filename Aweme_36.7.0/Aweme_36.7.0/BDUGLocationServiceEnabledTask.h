@interface BDUGLocationServiceEnabledTask : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _locationServiceEnabledMutex;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _locationServiceTrustMutex;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _locationServiceSyncCountMutex;
}

@property BOOL locationServiceEnabled;
@property (nonatomic) BOOL locationServiceTrust;
@property (nonatomic) unsigned long long locationServiceSyncCount;

+ (id)sharedTask;

- (void)onReceivedWillEnterForegroundWithCompletion:(id /* block */)a0;
- (void)onReceivedDidEnterBackground;
- (BOOL)locServiceEnabled;
- (void)getCurrentLocationServiceEnabledWithCompletion:(id /* block */)a0;
- (void)_getCurrentLocationServiceEnabledWithChangeToForeground:(BOOL)a0 completion:(id /* block */)a1;
- (id)init;
- (void)dealloc;

@end
