@class TencentLBSLocation, NSMutableArray, TencentLBSLocationReGeocoder;

@interface TencentLBSBleLocationManager : NSObject

@property (retain) TencentLBSLocationReGeocoder *reGeoManger;
@property (retain) NSMutableArray *resultBlocks;
@property double lastBeaconUpdate;
@property (retain) TencentLBSLocation *mlastBleLocation;
@property int mbearing;
@property (retain) NSMutableArray *singleFixBlocks;

+ (id)sharedInstance;

- (id)init;
- (void)setTencentLBSBleBlock:(id /* block */)a0;
- (void)removeTencentLBSBleBlock:(id /* block */)a0;
- (void)requestBleLocationWithRequestlevel:(unsigned long long)a0 beacons:(id)a1 coordinateType:(unsigned long long)a2 isSingleRequest:(BOOL)a3 appName:(id)a4 smallKey:(id)a5 withLocation:(id)a6;
- (void)callBackBleResult:(id)a0 bearing:(int)a1 wlanFix:(int)a2 wlanUse:(int)a3;
- (void)addTencentLBSSingleFixBlock:(id /* block */)a0;
- (void)removeTencentLBSSingleFixBlock:(id /* block */)a0;
- (void)singlePosCachUpdate:(id)a0;
- (void).cxx_destruct;

@end
