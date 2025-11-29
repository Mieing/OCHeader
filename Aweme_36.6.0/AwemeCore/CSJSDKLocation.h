@class NSString, CLLocationManager, NSDate, NSNumber;

@interface CSJSDKLocation : NSObject <CLLocationManagerDelegate>

@property (retain, nonatomic) CLLocationManager *locationManager;
@property (retain, nonatomic) NSDate *latestUpdateTimestamp;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } latestLocation;
@property (retain) NSNumber *latitude;
@property (retain) NSNumber *longitude;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)locationService;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)requestLatestStatus;
- (id)downNumber:(double)a0;
- (BOOL)serviceEnable;
- (void)asyncStartUpdate;
- (void).cxx_destruct;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;

@end
