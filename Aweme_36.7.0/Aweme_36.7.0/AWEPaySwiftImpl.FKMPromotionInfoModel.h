@class NSString;

@interface AWEPaySwiftImpl.FKMPromotionInfoModel : MTLModel <MTLJSONSerializing> {
    void /* function */ platformPromotionDesc;
    void /* function */ iconUrl;
}

@property (nonatomic, copy) NSString *platformPromotionDesc;
@property (nonatomic, copy) NSString *iconUrl;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
