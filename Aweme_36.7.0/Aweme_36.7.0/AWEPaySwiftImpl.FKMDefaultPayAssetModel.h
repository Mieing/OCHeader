@class NSString, _TtC15AWEPaySwiftImpl16FKMPayAssetModel;

@interface AWEPaySwiftImpl.FKMDefaultPayAssetModel : MTLModel <MTLJSONSerializing> {
    void /* function */ editURL;
}

@property (nonatomic, retain) _TtC15AWEPaySwiftImpl16FKMPayAssetModel *asset;
@property (nonatomic, copy) NSString *editURL;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
