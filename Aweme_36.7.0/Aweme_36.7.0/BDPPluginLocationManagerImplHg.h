@class NSString, CLLocationManager, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface BDPPluginLocationManagerImplHg : NSObject <BDPLocationManagerPluginDelegate, CLLocationManagerDelegate>

@property (retain, nonatomic) CLLocationManager *manager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSMutableArray *requestAuthCallbacks;
@property (retain, nonatomic) NSMutableArray *getLocationTasks;
@property (nonatomic) BOOL statusHasChanged;
@property (nonatomic) int oldAuthStatus;
@property (nonatomic) long long oldAccuracyAuth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (void)bootstrapLaunch;
+ (id)errorWithErrorCode:(long long)a0 errorMsg:(id)a1;

- (void)handleApplicationEnterBackground;
- (void)addGetLocationTaskWithUniqueID:(id)a0 completion:(id /* block */)a1;
- (void)updateLocationAccessStatus:(BOOL)a0;
- (BOOL)isAuthorizedOrIncludeNotDetermined:(BOOL)a0;
- (void)getLocationWithUniqueID:(id)a0 completion:(id /* block */)a1;
- (void)handleAppEnterBackground:(id)a0;
- (int)getAuthorizationStatus;
- (long long)getAccuracyAuthorization;
- (void)stopUpdatingLoationWithLoation:(id)a0 error:(id)a1;
- (void)createLocationManagerInMainThread;
- (void)startUpdatingLoation;
- (void)ensureLocationManagerCreatedBeforeCompletion:(id /* block */)a0;
- (void)requestTemporaryFullAccuracyAndExecuteCompletion;
- (void).cxx_destruct;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (id)init;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)dealloc;
- (void)locationManager:(id)a0 didChangeAuthorizationStatus:(int)a1;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)requestAuthorizationWithCompletion:(id /* block */)a0;

@end
