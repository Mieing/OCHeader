@class NSString;

@interface LifeCardImagePoiInfoV2 : GPBMessage

@property (copy, nonatomic) NSString *poiId;
@property (nonatomic) BOOL hasPoiId;
@property (copy, nonatomic) NSString *backendType;
@property (nonatomic) BOOL hasBackendType;
@property (copy, nonatomic) NSString *cityCode;
@property (nonatomic) BOOL hasCityCode;

+ (id)descriptor;

@end
