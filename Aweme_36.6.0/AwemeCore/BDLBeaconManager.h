@class BDUGLocationBeaconTask;

@interface BDLBeaconManager : NSObject

@property (retain, nonatomic) BDUGLocationBeaconTask *task;
@property long long errorCode;

+ (id)_getScannedBeaconsParamsWithBeacons:(id)a0;
+ (void)removeBeaconsDiskCache;
+ (id)scannedBeacons;
+ (id)sharedManager;
+ (id)logId;

- (void)startWithUuids:(id)a0 locateId:(id)a1 logID:(id)a2 interval:(long long)a3 isSubmitBleNow:(BOOL)a4;
- (void)scanningCheck;
- (BOOL)isDisabledBLE;
- (void).cxx_destruct;
- (id)init;

@end
