@class NSString, NSDictionary, PHAsset, EcLocalAssetModel;

@interface ECUploadItemModel : EcWCDBBase <WCTTableCoding>

@property (retain, nonatomic) NSDictionary *customParam;
@property (retain, nonatomic) PHAsset *asset;
@property (copy, nonatomic) NSString *cachePath;
@property (copy, nonatomic) NSString *preview;
@property (copy, nonatomic) NSString *fileMd5;
@property (nonatomic) unsigned long long fileCrc;
@property (nonatomic) long long fileSize;
@property (nonatomic) unsigned long long tag_added_at_utc;
@property (nonatomic) long long taken_utc;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (copy, nonatomic) NSString *ios_id;
@property (nonatomic) unsigned long long tag;
@property (nonatomic) unsigned long long tag_link;
@property (nonatomic) BOOL fileSizeHasAdded;
@property (copy, nonatomic) NSString *assetId;
@property (copy, nonatomic) NSString *taskKey;
@property (nonatomic) long long uploadState;
@property (nonatomic) long long completedUnitCount;
@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSString *errorMsg;
@property (readonly, nonatomic) long long pauseReasonCode;
@property (retain, nonatomic) EcLocalAssetModel *localAsset;

+ (const void *)errorMsg;
+ (const void *)taskKey;
+ (const void *)customParam;
+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)ios_id;
+ (const void *)tag_link;
+ (const void *)tag_added_at_utc;
+ (const void *)fileSizeHasAdded;
+ (const void *)taken_utc;
+ (const void *)errorCode;
+ (const void *)cachePath;
+ (const void *)tag;
+ (const void *)height;
+ (const void *)width;
+ (const void *)assetId;
+ (const void *)uploadState;

- (void)calculateMD5AndCrc:(id /* block */)a0;
- (void)copyFileToSandbox:(id /* block */)a0;
- (id)initWithAssetModel:(id)a0 taskKey:(id)a1 state:(long long)a2;
- (id)taskItemState;
- (void)prepareUploadComplete:(id /* block */)a0;
- (void)clearCachePathClient:(id)a0;
- (id)uploadCompleteParam;
- (void)fetchPreViewClient:(id)a0 complete:(id /* block */)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
