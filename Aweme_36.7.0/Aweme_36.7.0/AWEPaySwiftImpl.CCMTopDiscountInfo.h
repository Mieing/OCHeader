@class NSString;

@interface AWEPaySwiftImpl.CCMTopDiscountInfo : MTLModel <MTLJSONSerializing> {
    void /* function */ discountName;
}

@property (nonatomic, copy) NSString *discountName;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
