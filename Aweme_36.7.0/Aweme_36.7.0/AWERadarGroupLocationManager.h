@class AWELocationDisposable, AWERadarGroupLocation;

@interface AWERadarGroupLocationManager : NSObject

@property (retain, nonatomic) AWERadarGroupLocation *location;
@property (retain, nonatomic) AWERadarGroupLocation *groupLocation;
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
- (void)startUpdateLocationGroup;
- (void)stopUpdateLocationGroup;
- (void)requestBluetoothLocationInGroup:(BOOL)a0;
- (id)transLocation:(id)a0;
- (id)currentLocationGroup;
- (void)requestCurrentLocationIfNeededInGroup:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasPermission;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
