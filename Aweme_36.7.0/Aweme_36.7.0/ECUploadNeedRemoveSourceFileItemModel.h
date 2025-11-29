@class NSString;

@interface ECUploadNeedRemoveSourceFileItemModel : EcWCDBBase <WCTTableCoding>

@property (copy, nonatomic) NSString *assetId;

+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)assetId;

- (id)initWithAssetId:(id)a0;
- (void).cxx_destruct;

@end
