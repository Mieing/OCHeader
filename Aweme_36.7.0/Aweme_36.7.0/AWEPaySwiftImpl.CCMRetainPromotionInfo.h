@class NSString, NSDictionary;

@interface AWEPaySwiftImpl.CCMRetainPromotionInfo : MTLModel <MTLJSONSerializing> {
    void /* function */ schema;
    void /* function */ data;
}

@property (nonatomic, copy) NSString *schema;
@property (nonatomic, copy) NSDictionary *data;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
