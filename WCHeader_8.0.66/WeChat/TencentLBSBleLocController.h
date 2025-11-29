@class TencentLBSLocation;

@interface TencentLBSBleLocController : NSObject

@property (retain) TencentLBSLocation *beaconLocation;
@property (retain) TencentLBSLocation *beaconLocation_02;
@property (retain) TencentLBSLocation *pdrLocation;
@property (retain) TencentLBSLocation *pdrLocation_02;

+ (id)sharedInstance;

- (void)updateBleLocation:(id)a0;
- (id)getTencentBleLocation;
- (void)updatePdrLocation:(id)a0;
- (id)getTencentPdrLocation;
- (void)updateBleLocation_02:(id)a0;
- (id)getTencentBleLocation_02;
- (void)updatePdrLocation_02:(id)a0;
- (id)getTencentPdrLocation_02;
- (void).cxx_destruct;

@end
