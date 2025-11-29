@class NSArray, NSMutableArray, CLLocationManager;

@interface WABeaconMgrUseInfo : MMObject

@property (nonatomic) unsigned long long tag;
@property (retain, nonatomic) CLLocationManager *locationMgr;
@property (retain, nonatomic) NSArray *lastClick;
@property (retain, nonatomic) NSArray *lastCallStack;
@property (nonatomic) double startTime;
@property (retain, nonatomic) NSMutableArray *rangingUUIDArray;

- (id)init;
- (id)description;
- (void)startRangingBeaconsInRegionWithUUID:(id)a0;
- (void)stopRangingBeaconInRegionWithUUID:(id)a0;
- (void)stopRanging;
- (void).cxx_destruct;

@end
