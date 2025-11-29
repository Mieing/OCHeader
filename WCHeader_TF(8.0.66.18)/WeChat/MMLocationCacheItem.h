@class NSString;

@interface MMLocationCacheItem : MMObject <PBCoding>

@property (nonatomic) double horizontalAccuracy;
@property (nonatomic) double verticalAccuracy;
@property (nonatomic) double altitude;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL isMarsLocation;
@property (retain, nonatomic) NSString *encryptLatitude;
@property (retain, nonatomic) NSString *encryptLongitude;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_latitude;
+ (void)PBArrayAdd_longitude;
+ (void)PBArrayAdd_timestamp;
+ (void)PBArrayAdd_isMarsLocation;
+ (void)PBArrayAdd_horizontalAccuracy;
+ (void)PBArrayAdd_verticalAccuracy;
+ (void)PBArrayAdd_altitude;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
