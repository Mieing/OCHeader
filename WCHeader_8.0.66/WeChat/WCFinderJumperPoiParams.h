@class NSString;

@interface WCFinderJumperPoiParams : NSObject

@property (nonatomic) double longitude;
@property (nonatomic) double latitude;
@property (copy, nonatomic) NSString *poiName;
@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSString *city;
@property (copy, nonatomic) NSString *address;
@property (copy, nonatomic) NSString *poiClassifyId;
@property (copy, nonatomic) NSString *buildingId;
@property (copy, nonatomic) NSString *floorName;
@property (nonatomic) unsigned long long fromObjectID;
@property (nonatomic) int fromScene;
@property (nonatomic) int tabID;
@property (nonatomic) int fromType;
@property (copy, nonatomic) NSString *groupBuyBypassData;
@property (copy, nonatomic) NSString *jumpInfoToPoiStreamBypass;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (id)genFinderLocation;
- (void).cxx_destruct;

@end
