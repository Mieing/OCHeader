@class NSString, NSArray, _TtC15AWEPaySwiftImpl20TripShowElementModel;

@interface AWEPaySwiftImpl.TripNativeAmapCardModel : MTLModel <MTLJSONSerializing> {
    void /* function */ gaodeH5Schema;
    void /* function */ supplierBrandList;
}

@property (nonatomic, copy) NSString *gaodeH5Schema;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl20TripShowElementModel *moreBrandsDesc;
@property (nonatomic, copy) NSArray *supplierBrandList;

+ (id)supplierBrandListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
