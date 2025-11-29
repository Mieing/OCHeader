@class WABeaconMgrUseInfoHandler, NSString;

@interface WABeaconMgr : MMUserService <CLLocationManagerDelegate, MMServiceProtocol>

@property (retain, nonatomic) WABeaconMgrUseInfoHandler *useInfoHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)manualInitLocation;
- (void)manualDeallocLocationWithTag:(unsigned long long)a0;
- (id)getCLLocationManagerByTag:(unsigned long long)a0;
- (void)manualStartRangingBeaconsInRegion:(unsigned long long)a0 withUUIDArray:(id)a1;
- (void)manualStopRangingBeaconsInRegion:(unsigned long long)a0 withUUIDArray:(id)a1;
- (void)locationManager:(id)a0 didRangeBeacons:(id)a1 inRegion:(id)a2;
- (void)locationManager:(id)a0 rangingBeaconsDidFailForRegion:(id)a1 withError:(id)a2;
- (void).cxx_destruct;

@end
