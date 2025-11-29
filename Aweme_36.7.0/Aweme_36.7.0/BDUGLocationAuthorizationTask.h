@class NSString, NSMutableArray, CLLocationManager;

@interface BDUGLocationAuthorizationTask : NSObject <CLLocationManagerDelegate> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _requestAuthCallbacksMutex;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _getAuthStatusCallbacksMutex;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _authStatusMutex;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _accuracyAuthMutex;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _authStatusTrustMutex;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _authStatusSyncCountMutex;
}

@property (retain) CLLocationManager *locationManager;
@property long long authStatus;
@property long long authAccuracy;
@property (nonatomic) BOOL authStatusTrust;
@property (nonatomic) unsigned long long authStatusSyncCount;
@property (retain, nonatomic) NSMutableArray *requestAuthCallbacks;
@property (retain, nonatomic) NSMutableArray *currentAuthStatusCallbacks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedTask;

- (BOOL)isAuthorizationStatusEnabled;
- (void)onReceivedDidEnterBackgroundNotification:(id)a0;
- (void)_getCurrentLocationAuthorizationStatusWithChangeToForeground:(BOOL)a0 completion:(id /* block */)a1;
- (void)onReceivedWillEnterForegroundNotification:(id)a0;
- (long long)currentAuthorizationStatus;
- (void)getCurrentLocationAuthorizationStatusWithCompletion:(id /* block */)a0;
- (long long)currentAuthorizationAccuracy;
- (void)_accuracyAuthorizationCallbackWithAccuracyAuthorization:(long long)a0;
- (void)_currentLocationAuthorizationStatusCallbackWithAuthorizationStatus:(int)a0;
- (void)_toggleAllAuthCallbacksWithAuthorizationStatus:(int)a0;
- (void)_delegateCallbackWithAuthorizationStatus:(long long)a0;
- (void)_monitorAuthorizationStatusChangeWithAuthorizationStatus:(long long)a0;
- (void)setAlwaysAuthorizationStatus:(long long)a0;
- (void)isAuthorizationStatusEnabledWithCompletion:(id /* block */)a0;
- (void)currentAccuracyStatusWithCompletion:(id /* block */)a0;
- (void)requestTemporaryFullAccuracyAuthorizationWithPurposeKey:(id)a0 cert:(id)a1 completion:(id /* block */)a2;
- (void)requestWhenInUseAuthorizationWithCert:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)dealloc;
- (void)locationManager:(id)a0 didChangeAuthorizationStatus:(int)a1;

@end
