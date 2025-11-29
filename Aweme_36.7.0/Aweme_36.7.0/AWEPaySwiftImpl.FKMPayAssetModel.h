@class _TtC15AWEPaySwiftImpl19FKMPayAssetMetaInfo, _TtC15AWEPaySwiftImpl19FKMPayAssetShowInfo;

@interface AWEPaySwiftImpl.FKMPayAssetModel : MTLModel <MTLJSONSerializing>

@property (nonatomic, retain) _TtC15AWEPaySwiftImpl19FKMPayAssetMetaInfo *assetMetaInfo;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl19FKMPayAssetShowInfo *assetShowInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
