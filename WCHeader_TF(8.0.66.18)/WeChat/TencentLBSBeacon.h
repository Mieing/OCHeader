@class NSUUID, NSNumber;

@interface TencentLBSBeacon : NSObject

@property (copy, nonatomic) NSUUID *proximityUUID;
@property (copy, nonatomic) NSNumber *major;
@property (copy, nonatomic) NSNumber *minor;
@property (nonatomic) long long proximity;
@property (nonatomic) double accuracy;
@property (nonatomic) long long rssi;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;

@end
