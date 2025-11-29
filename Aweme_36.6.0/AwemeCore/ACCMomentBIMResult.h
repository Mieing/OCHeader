@class NSNumber, NSString, NSArray, NSData, VEAIMomentC3Feature, VEAIMomentScoreInfo, NSDictionary;

@interface ACCMomentBIMResult : ACCMomentMediaAsset <WCTTableCoding>

@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (nonatomic) BOOL fromCache;
@property (nonatomic) long long frameCostTime;
@property (nonatomic) long long featureCostTime;
@property (nonatomic) unsigned long long uid;
@property (copy, nonatomic) NSString *locationName;
@property (nonatomic) unsigned long long checkModDate;
@property (copy, nonatomic) NSArray *faceVertifyFeatures;
@property (copy, nonatomic) NSArray *faceFeatures;
@property (copy, nonatomic) NSArray *momentTags;
@property (nonatomic) BOOL isPorn;
@property (nonatomic) BOOL isLeader;
@property (retain, nonatomic) VEAIMomentScoreInfo *scoreInfo;
@property (copy, nonatomic) NSArray *scoreInfos;
@property (retain, nonatomic) NSData *similarityData;
@property (copy, nonatomic) NSArray *reframeInfos;
@property (retain, nonatomic) VEAIMomentC3Feature *c3Feature;
@property (nonatomic) unsigned long long orientation;
@property (copy, nonatomic) NSDictionary *imageExif;
@property (copy, nonatomic) NSString *videoModelString;
@property (copy, nonatomic) NSString *videoCreateDateString;
@property (copy, nonatomic) NSNumber *simId;
@property (copy, nonatomic) NSArray *peopleIds;

+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)isPorn;
+ (const void *)c3Feature;
+ (const void *)scoreInfos;
+ (const void *)peopleIds;
+ (const void *)simId;
+ (const void *)faceVertifyFeatures;
+ (const void *)momentTags;
+ (const void *)similarityData;
+ (const void *)reframeInfos;
+ (const void *)imageExif;
+ (const void *)videoCreateDateString;
+ (const void *)videoModelString;
+ (const void *)checkModDate;
+ (id)exifDateFormatter;
+ (id)exifDateWithoutTimeZoneFormatter;
+ (const void *)uid;
+ (const void *)modificationDate;
+ (const void *)mediaType;
+ (const void *)orientation;
+ (const void *)creationDate;
+ (const void *)duration;
+ (const void *)mediaSubtypes;
+ (const void *)scanDate;
+ (const void *)localIdentifier;
+ (const void *)locationName;
+ (const void *)pixelHeight;
+ (const void *)pixelWidth;
+ (id)videoDateFormatter;
+ (const void *)scoreInfo;
+ (const void *)faceFeatures;
+ (const void *)isLeader;

- (id)initWithVEBIM:(id)a0;
- (void)configWithAssetModel:(id)a0;
- (id)acc_materialInfoDict;
- (id)createMaterialInfo;
- (id)configDictWithContentInfo:(id)a0;
- (id)configDictWithMetaInfo:(id)a0;
- (id)fallbackResultWithMaterial:(id)a0;
- (void).cxx_destruct;

@end
