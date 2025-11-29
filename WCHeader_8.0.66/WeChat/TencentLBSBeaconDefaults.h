@class NSArray, NSUUID, NSNumber;

@interface TencentLBSBeaconDefaults : NSObject

@property (readonly, copy, nonatomic) NSArray *supportedProximityUUIDs;
@property (readonly, copy, nonatomic) NSUUID *defaultProximityUUID;
@property (readonly, copy, nonatomic) NSNumber *defaultPower;

+ (id)sharedDefaults;

- (id)init;
- (void).cxx_destruct;

@end
