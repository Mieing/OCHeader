@class NSString;

@interface AWEPaySwiftImpl.FKMPayAssetMetaInfo : MTLModel <MTLJSONSerializing> {
    void /* function */ assetId;
    void /* function */ assetType;
    void /* function */ assetTypeCode;
    void /* function */ instid;
}

@property (nonatomic, copy) NSString *assetId;
@property (nonatomic, copy) NSString *assetType;
@property (nonatomic, copy) NSString *assetTypeCode;
@property (nonatomic, copy) NSString *instid;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
