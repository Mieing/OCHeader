@class NSString, NSMutableArray;

@interface FinderLocation : WXPBGeneratedMessage

@property (nonatomic) float longitude;
@property (nonatomic) float latitude;
@property (retain, nonatomic) NSString *city;
@property (retain, nonatomic) NSString *poiName;
@property (retain, nonatomic) NSString *poiAddress;
@property (retain, nonatomic) NSString *poiClassifyId;
@property (nonatomic) unsigned int poiClassifyType;
@property (retain, nonatomic) NSString *province;
@property (retain, nonatomic) NSString *region;
@property (retain, nonatomic) NSString *country;
@property (nonatomic) unsigned int source;
@property (retain, nonatomic) NSString *buildingId;
@property (retain, nonatomic) NSString *floorName;
@property (retain, nonatomic) NSString *poiFullName;
@property (nonatomic) unsigned long long flag;
@property (retain, nonatomic) NSMutableArray *productId;
@property (nonatomic) unsigned int commercializationFlag;

+ (void)initialize;

- (void)setCommercializationFlag:(unsigned int)a0;
- (unsigned int)commercializationFlag;
- (void)setProductId:(id)a0;
- (id)productId;
- (void)setFlag:(unsigned long long)a0;
- (unsigned long long)flag;
- (void)setPoiFullName:(id)a0;
- (id)poiFullName;
- (void)setFloorName:(id)a0;
- (id)floorName;
- (void)setBuildingId:(id)a0;
- (id)buildingId;
- (void)setSource:(unsigned int)a0;
- (unsigned int)source;
- (void)setCountry:(id)a0;
- (id)country;
- (void)setRegion:(id)a0;
- (id)region;
- (void)setProvince:(id)a0;
- (id)province;
- (void)setPoiClassifyType:(unsigned int)a0;
- (unsigned int)poiClassifyType;
- (void)setPoiClassifyId:(id)a0;
- (id)poiClassifyId;
- (void)setPoiAddress:(id)a0;
- (id)poiAddress;
- (void)setPoiName:(id)a0;
- (id)poiName;
- (void)setCity:(id)a0;
- (id)city;
- (void)setLatitude:(float)a0;
- (float)latitude;
- (void)setLongitude:(float)a0;
- (float)longitude;
- (BOOL)isPoiInfo;
- (id)convertToPOIInfo;
- (id)poiFavoriteSourceID;
- (BOOL)isValidForShow;
- (BOOL)isLocationValid;
- (BOOL)poiCanClick;
- (id)getDisplayPOIAddress;
- (id)getLocationUrl;

@end
