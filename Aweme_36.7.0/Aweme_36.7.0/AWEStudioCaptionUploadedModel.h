@class NSString;

@interface AWEStudioCaptionUploadedModel : NSObject <WCTTableCoding>

@property (copy, nonatomic) NSString *assetID;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *userID;
@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;

+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)userID;
+ (const void *)assetID;
+ (const void *)version;

- (id)initWithAssetID:(id)a0 version:(id)a1 userID:(id)a2;
- (void).cxx_destruct;

@end
