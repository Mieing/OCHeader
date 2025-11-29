@class NSString, NSArray, VEAIMomentC3Feature, NSDate, VEAIMomentScoreInfo;

@interface NPBIMResult : NSObject <WCTTableCoding, NSCopying>

@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (nonatomic) BOOL fromCache;
@property (nonatomic) long long frameCostTime;
@property (nonatomic) long long featureCostTime;
@property (nonatomic) unsigned long long uid;
@property (nonatomic) double lastAccessTime;
@property (copy, nonatomic) NSString *localIdentifier;
@property (nonatomic) long long mediaType;
@property (nonatomic) unsigned long long pixelWidth;
@property (nonatomic) unsigned long long pixelHeight;
@property (retain, nonatomic) NSDate *creationDate;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSArray *faceVertifyFeatures;
@property (copy, nonatomic) NSArray *faceFeatures;
@property (copy, nonatomic) NSArray *momentTags;
@property (nonatomic) BOOL isPorn;
@property (nonatomic) BOOL isLeader;
@property (retain, nonatomic) VEAIMomentScoreInfo *scoreInfo;
@property (copy, nonatomic) NSArray *scoreInfos;
@property (retain, nonatomic) VEAIMomentC3Feature *c3Feature;

+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)lastAccessTime;
+ (const void *)isPorn;
+ (const void *)scoreInfos;
+ (const void *)faceVertifyFeatures;
+ (const void *)momentTags;
+ (id)exifDateFormatter;
+ (id)exifDateWithoutTimeZoneFormatter;
+ (id)mergeScoreInfosWithArr1:(id)a0 arr2:(id)a1;
+ (id)filterScoreInfosWithArr:(id)a0 timeStamps:(id)a1;
+ (const void *)mediaType;
+ (const void *)creationDate;
+ (const void *)duration;
+ (const void *)localIdentifier;
+ (const void *)pixelHeight;
+ (const void *)pixelWidth;
+ (id)videoDateFormatter;
+ (const void *)scoreInfo;
+ (const void *)faceFeatures;
+ (const void *)isLeader;

- (id)initWithVEBIM:(id)a0;
- (id)acc_materialInfoDict;
- (id)createMaterialInfo;
- (id)configDictWithContentInfo:(id)a0;
- (id)configDictWithMetaInfo:(id)a0;
- (id)fallbackResultWithMaterial:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
