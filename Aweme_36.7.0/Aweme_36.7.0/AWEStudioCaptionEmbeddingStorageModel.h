@class NSData, NSString;

@interface AWEStudioCaptionEmbeddingStorageModel : NSObject <WCTTableCoding>

@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (copy, nonatomic) NSData *embeddingData;
@property (copy, nonatomic) NSString *assetID;
@property (nonatomic) long long frameTime;
@property (copy, nonatomic) NSString *version;

+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)assetID;
+ (const void *)version;
+ (const void *)embeddingData;
+ (const void *)frameTime;

- (id)initWithAssetID:(id)a0 frameTime:(long long)a1 version:(id)a2;
- (void).cxx_destruct;

@end
