@class BDPGetLocationCache, BDPMultiDelegateProxy;
@protocol BDPLocationManagerDelegate;

@interface BDPLocationManager : NSObject

@property (retain, nonatomic) BDPGetLocationCache *fuzzyAccuracyCache;
@property (retain, nonatomic) BDPGetLocationCache *highAccuracyCache;
@property (nonatomic) BOOL hasInitLocationManager;
@property (nonatomic) BOOL hasDoneRequest;
@property (retain, nonatomic) BDPMultiDelegateProxy<BDPLocationManagerDelegate> *delegates;
@property BOOL isRequestingLoc;

+ (double)transformLat:(double)a0 bdLon:(double)a1;
+ (double)transformLon:(double)a0 bdLon:(double)a1;
+ (struct CLLocationCoordinate2D { double x0; double x1; })gcj02Encrypt:(double)a0 bdLon:(double)a1;
+ (struct CLLocationCoordinate2D { double x0; double x1; })convertWGSToGCJ:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
+ (struct CLLocationCoordinate2D { double x0; double x1; })convertGCJToWGS:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
+ (void)showThirdPartyMapActionSheetOnViewController:(id)a0 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1 destinationName:(id)a2 address:(id)a3 type:(long long)a4 appId:(id)a5 apiName:(id)a6;
+ (struct CLLocationCoordinate2D { double x0; double x1; })convertGCJToBD09:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
+ (BOOL)outOfCh:(double)a0 bdLon:(double)a1;
+ (void)showThirdPartyMapActionSheetOnViewController:(id)a0 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1 destinationName:(id)a2 address:(id)a3 type:(long long)a4;
+ (id)sharedManager;

- (void)getLocationByHighAccuracy:(BOOL)a0 completion:(id /* block */)a1;
- (id)getCurrentLocationCache;
- (void)unsubscribeHeadlingUpdateWithToken:(id)a0;
- (id)subscribeHeadlingUpdateWithBlock:(id /* block */)a0;
- (void)getLocationByHighAccuracy:(BOOL)a0 completion:(id /* block */)a1 appId:(id)a2 apiName:(id)a3;
- (void)p_ensureLocationManagerInitOnMainThread:(id /* block */)a0;
- (long long)getAuthorizationStatus;
- (long long)getAccuracyAuthorization;
- (id)subscribeLocationUpdateWithAccuracy:(long long)a0 distanceFilter:(double)a1 block:(id /* block */)a2 appId:(id)a3 apiName:(id)a4;
- (void)getHeadingWithCompletion:(id /* block */)a0;
- (void)getAuthorizationStatusWithComplection:(id /* block */)a0;
- (void)getAccuracyAuthorizationWithComplection:(id /* block */)a0;
- (void)getAuthorizedWithCompletion:(id /* block */)a0;
- (id)subscribeLocationUpdateWithAccuracy:(long long)a0 distanceFilter:(double)a1 block:(id /* block */)a2;
- (void)unsubscribeLocationUpdateWithToken:(id)a0;
- (void).cxx_destruct;
- (BOOL)isAuthorized;
- (id)init;
- (void)dealloc;
- (void)requestAuthorizationWithCompletion:(id /* block */)a0;

@end
