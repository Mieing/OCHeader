@class NSArray, NSString, CLLocationManager, NSMutableDictionary, NSMutableArray;

@interface BDUGLocationBeaconTask : NSObject <CLLocationManagerDelegate>

@property (copy, nonatomic) id /* block */ finishCallback;
@property (copy, nonatomic) NSArray *uuids;
@property (copy, nonatomic) NSString *logId;
@property (retain, nonatomic) CLLocationManager *locationManager;
@property (retain, nonatomic) NSMutableDictionary *results;
@property (retain, nonatomic) NSMutableArray *rangedBeacons;
@property (nonatomic) long long interval;
@property long long startTime;
@property BOOL currentScanBeaconIsFinish;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isRangingBeacons;

- (void)stopMonitorBeacons;
- (id)initWithUUIDS:(id)a0 interval:(long long)a1 logId:(id)a2 finish:(id /* block */)a3;
- (void)startMonitorBeacons;
- (id)scannedBeacons;
- (void)_stopInnerMonitorBeacons;
- (void)_updateScannedBeacons:(id)a0 regionKey:(id)a1;
- (void)_finishMonitorBeaconsWithError:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)locationManager:(id)a0 didRangeBeacons:(id)a1 inRegion:(id)a2;
- (void)locationManager:(id)a0 rangingBeaconsDidFailForRegion:(id)a1 withError:(id)a2;
- (void)locationManager:(id)a0 didRangeBeacons:(id)a1 satisfyingConstraint:(id)a2;
- (void)locationManager:(id)a0 didFailRangingBeaconsForConstraint:(id)a1 error:(id)a2;

@end
