@class NSString, NSArray, NSDictionary, EcMetaInfoModel;

@interface EcCloudAssetModel : EcWCDBBase <WCTTableCoding>

@property (nonatomic) unsigned long long cloud_id;
@property (nonatomic) long long status;
@property (nonatomic) unsigned long long creator;
@property (copy, nonatomic) NSString *mime;
@property (copy, nonatomic) NSString *subType;
@property (nonatomic) unsigned long long taken_utc;
@property (nonatomic) unsigned long long generated_at_utc;
@property (nonatomic) unsigned long long uploaded_at_utc;
@property (retain, nonatomic) NSArray *ios_ids;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) long long orientation;
@property (copy, nonatomic) NSString *source_path;
@property (retain, nonatomic) NSArray *tags_v2;
@property (retain, nonatomic) NSDictionary *photo;
@property (retain, nonatomic) NSDictionary *video;
@property (retain, nonatomic) NSArray *tagsList;
@property (retain, nonatomic) EcMetaInfoModel *photoInfo;
@property (retain, nonatomic) EcMetaInfoModel *videoInfo;
@property (retain, nonatomic) EcMetaInfoModel *metaInfo;

+ (id)modelCustomPropertyMapper;
+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)cloud_id;
+ (const void *)tags_v2;
+ (const void *)generated_at_utc;
+ (const void *)uploaded_at_utc;
+ (const void *)source_path;
+ (const void *)ios_ids;
+ (const void *)taken_utc;
+ (const void *)video;
+ (const void *)orientation;
+ (const void *)height;
+ (const void *)width;
+ (const void *)status;
+ (const void *)subType;
+ (const void *)creator;
+ (const void *)photo;
+ (const void *)mime;

- (void).cxx_destruct;

@end
