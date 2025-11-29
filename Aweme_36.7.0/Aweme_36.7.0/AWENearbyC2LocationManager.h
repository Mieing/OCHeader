@class AWELocationServicePersistModel;

@interface AWENearbyC2LocationManager : NSObject

@property (retain, nonatomic) AWELocationServicePersistModel *locationPermissionModel;
@property (nonatomic) unsigned long long locationStatus;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)updateLocationPermissionWithModel:(id)a0 status:(unsigned long long)a1 error:(id)a2;
- (void)cacluteStaticRefreshDistanceWithResponse:(id)a0 pageType:(long long)a1;
- (BOOL)grouponLocationInappStyleOptEnable;
- (long long)locationInappShowDuration;
- (id)handleLocationInfo;
- (BOOL)grouponLocationOptEnable;
- (BOOL)checkLocationInfoValidWithDic:(id)a0;
- (id)handleLocationInappInfo;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
