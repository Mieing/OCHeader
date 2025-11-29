@class NSArray, NSMutableArray;

@interface MMLocationMgrUseInfo : NSObject

@property (nonatomic) unsigned long long tag;
@property (nonatomic) unsigned long long mgrType;
@property (retain, nonatomic) id locationMgr;
@property (retain, nonatomic) NSArray *lastClick;
@property (nonatomic) unsigned long long updatingType;
@property (nonatomic) double startTime;
@property (retain, nonatomic) NSMutableArray *rangingUUIDArray;

- (id)init;
- (id)description;
- (void)startUpdating:(unsigned long long)a0;
- (void)stopUpdating;
- (void)startRangingBeaconsInRegionWithUUID:(id)a0;
- (void)stopRangingBeaconInRegionWithUUID:(id)a0;
- (void)stopRanging;
- (void).cxx_destruct;

@end
