@class AWERadarLocation, AWELocationDisposable;

@interface AWERadarLocationManager : NSObject

@property (retain, nonatomic) AWERadarLocation *location;
@property (retain, nonatomic) AWERadarLocation *groupLocation;
@property (retain, nonatomic) AWELocationDisposable *disposable;
@property (retain, nonatomic) AWELocationDisposable *groupDisposable;

+ (void)showLocationAuthAlert:(BOOL)a0 trackParams:(id)a1 descriptionContent:(id)a2 completion:(id /* block */)a3 cancelBlock:(id /* block */)a4;
+ (BOOL)isValidLongitude:(double)a0;
+ (BOOL)isValidLatitude:(double)a0;
+ (void)trackLocationAuthAction:(BOOL)a0 insideRadar:(BOOL)a1 trackParams:(id)a2;
+ (void)trackLocationAuthViewShow:(BOOL)a0 trackParams:(id)a1;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)__trackEvent:(id)a0 params:(id)a1;
- (id)transLocation:(id)a0;
- (void)requestExactLocationPermissionWithCompletion:(id /* block */)a0 insideRadar:(BOOL)a1 trackParams:(id)a2;
- (void)requestCurrentLocationIfNeeded:(id /* block */)a0 shouldCheckLocationStatus:(BOOL)a1;
- (BOOL)needCheckUpdateStatus;
- (void)startUpdateLocation;
- (void)stopUpdateLocation;
- (void)requestExactLocationPermissionWithCompletion:(id /* block */)a0;
- (void)requestCurrentLocationIfNeeded:(id /* block */)a0;
- (void)requestBluetoothLocation;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)currentLocation;
- (BOOL)hasPermission;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
