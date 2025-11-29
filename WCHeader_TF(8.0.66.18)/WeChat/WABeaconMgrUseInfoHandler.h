@class MMTimer, NSMutableArray;

@interface WABeaconMgrUseInfoHandler : NSObject

@property (retain, nonatomic) NSMutableArray *usedLocationMgrList;
@property (retain, nonatomic) MMTimer *checkTimer;
@property (retain, nonatomic) NSMutableArray *rangingBeaconUUIDArray;

- (void)dealloc;
- (id)getUseInfoByTag:(unsigned long long)a0;
- (void)clearAll;
- (void)addUseInfo:(id)a0;
- (void)removeUseInfoWithTag:(unsigned long long)a0;
- (void)startRangingBeaconsInRegion:(unsigned long long)a0 withUUIDArray:(id)a1;
- (void)stopRangingBeaconsInRegion:(unsigned long long)a0 withUUIDArray:(id)a1;
- (void)checkLocationUse;
- (void).cxx_destruct;

@end
