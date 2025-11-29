@class BDUGLocationContinueTask, BDUGLocationDiscreteTask, NSMapTable, NSMutableDictionary, BDUGLocationHeadingTask;

@interface BDUGLocationImpl : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _monitorMutex;
}

@property (retain, nonatomic) BDUGLocationDiscreteTask *discreteTask;
@property (retain, nonatomic) BDUGLocationContinueTask *continueTask;
@property (retain, nonatomic) BDUGLocationHeadingTask *headingTask;
@property (retain, nonatomic) NSMapTable *monitorMap;
@property (nonatomic) BOOL isDebug;
@property struct CLLocationCoordinate2D { double latitude; double longitude; } debug2D;
@property (retain, nonatomic) NSMutableDictionary *submitMap;

+ (BOOL)isAuthorizationStatusEnabled;
+ (long long)currentLocationAuthorizationAccuracyStatus;
+ (void)getCurrentLocationServiceEnabledWithCompletion:(id /* block */)a0;
+ (void)getCurrentLocationAuthorizationStatusWithCompletion:(id /* block */)a0;
+ (void)isAuthorizationStatusEnabledWithCompletion:(id /* block */)a0;
+ (BOOL)headingAvailable;
+ (id)sharedInstance;
+ (long long)currentLocationAuthorizationStatus;
+ (BOOL)locationServiceEnabled;

- (void)subscribeToHeadingUpdatesForTarget:(id)a0 completion:(id /* block */)a1;
- (void)unsubscribeToHeadingUpdatesForTarget:(id)a0;
- (void)requestTemporaryFullAccuracyAuthorizationWithPurposeKey:(id)a0 cert:(id)a1 completion:(id /* block */)a2;
- (void)requestWhenInUseAuthorizationWithCert:(id)a0 completion:(id /* block */)a1;
- (void)_requestWhenInUseAuthorizationWithCert:(id)a0 completion:(id /* block */)a1;
- (void)_requestTemporaryFullAccuracyAuthorizationWithPurposeKey:(id)a0 cert:(id)a1 completion:(id /* block */)a2;
- (id)requestLocationWithCert:(id)a0 option:(id)a1 completion:(id /* block */)a2;
- (id)requestLocationWithDesiredAccuracy:(long long)a0 cacheTime:(double)a1 isUseCacheTime:(BOOL)a2 timeout:(double)a3 autoSubmit:(BOOL)a4 dataLevel:(long long)a5 uploadSource:(id)a6 option:(id)a7 cert:(id)a8 completion:(id /* block */)a9;
- (void)_debugReportCustomLocation:(id)a0 dataLevel:(long long)a1 option:(id)a2 cert:(id)a3 completion:(id /* block */)a4;
- (void)_toggleLocationMonitorsWithLocationInfo:(id)a0;
- (void)_triggerSubmitV2ObserverCallbackWithInfo:(id)a0 logID:(id)a1;
- (void)_subscribeToLocationUpdatesForTarget:(id)a0 desiredAccuracy:(long long)a1 activityType:(long long)a2 pausesLocationUpdatesAutomatically:(BOOL)a3 allowsBackgroundLocationUpdates:(BOOL)a4 distanceFilter:(double)a5 dataLevel:(long long)a6 uploadSource:(id)a7 option:(id)a8 cert:(id)a9 reverseGeo:(BOOL)a10 completion:(id /* block */)a11;
- (id)lastLocationInfo;
- (void)monitorLocationChangeForTarget:(id)a0 desiredLevel:(long long)a1 completion:(id /* block */)a2;
- (void)_checkLocationChangedWithLocationInfo:(id)a0;
- (void)currentLocationAuthorizationAccuracy:(id /* block */)a0;
- (void)requestWhenInUseAuthorizationWithCompletion:(id /* block */)a0;
- (id)requestLocationWithCert:(id)a0 completion:(id /* block */)a1;
- (id)requestLocationWithDesiredAccuracy:(long long)a0 cacheTime:(double)a1 isUseCacheTime:(BOOL)a2 timeout:(double)a3 autoSubmit:(BOOL)a4 dataLevel:(long long)a5 completion:(id /* block */)a6;
- (id)requestLocationWithDesiredAccuracy:(long long)a0 cacheTime:(double)a1 isUseCacheTime:(BOOL)a2 timeout:(double)a3 autoSubmit:(BOOL)a4 dataLevel:(long long)a5 uploadSource:(id)a6 completion:(id /* block */)a7;
- (void)cancelLocationRequest:(id)a0;
- (void)subscribeToLocationUpdatesForTarget:(id)a0 cert:(id)a1 option:(id)a2 completion:(id /* block */)a3;
- (void)subscribeToLocationUpdatesForTarget:(id)a0 desiredAccuracy:(long long)a1 activityType:(long long)a2 pausesLocationUpdatesAutomatically:(BOOL)a3 allowsBackgroundLocationUpdates:(BOOL)a4 distanceFilter:(double)a5 dataLevel:(long long)a6 uploadSource:(id)a7 option:(id)a8 completion:(id /* block */)a9;
- (void)unsubscribeToLocationUpdatesForTarget:(id)a0;
- (id)lastLocationInfoWithCert:(id)a0;
- (void)monitorLocationChangeForTarget:(id)a0 cert:(id)a1 completion:(id /* block */)a2;
- (void)cancelLocationChangeMonitorForTarget:(id)a0;
- (void)setCustomLatitude:(double)a0 longitude:(double)a1;
- (void)setDebugWifiMacAddress:(id)a0;
- (void)setDebugWifiName:(id)a0;
- (void)addSubmitObserverForKey:(id)a0 callback:(id /* block */)a1;
- (void)removeSubmitObserverForKey:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)requestTemporaryFullAccuracyAuthorizationWithPurposeKey:(id)a0 completion:(id /* block */)a1;
- (void)setDebug:(BOOL)a0;
- (BOOL)isDebugMode;

@end
