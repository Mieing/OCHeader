@class NSString;

@interface WALocationWrap : MMObject <PBCoding>

@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) double altitude;
@property (nonatomic) double horizontalAccuracy;
@property (nonatomic) double verticalAccuracy;
@property (nonatomic) double course;
@property (nonatomic) double speed;
@property (nonatomic) double timestamp;
@property (nonatomic) int floor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_latitude;
+ (void)PBArrayAdd_longitude;
+ (void)PBArrayAdd_altitude;
+ (void)PBArrayAdd_horizontalAccuracy;
+ (void)PBArrayAdd_verticalAccuracy;
+ (void)PBArrayAdd_course;
+ (void)PBArrayAdd_speed;
+ (void)PBArrayAdd_timestamp;
+ (void)PBArrayAdd_floor;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)transferToCLLocation;

@end
