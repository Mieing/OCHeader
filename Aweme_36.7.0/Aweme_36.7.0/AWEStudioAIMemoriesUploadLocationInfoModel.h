@class NSString;

@interface AWEStudioAIMemoriesUploadLocationInfoModel : NSObject <WCTTableCoding>

@property (copy, nonatomic) NSString *assetID;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *userID;
@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;

+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)userID;
+ (const void *)assetID;
+ (const void *)status;

- (id)initWithAssetID:(id)a0 status:(long long)a1 userID:(id)a2;
- (void).cxx_destruct;

@end
