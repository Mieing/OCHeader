@class NSString, NSArray;

@interface AWEPaySwiftImpl.CCMEntrySumDiscount : MTLModel <MTLJSONSerializing> {
    void /* function */ title;
    void /* function */ subTitle;
    void /* function */ discountSegments;
    void /* function */ rulePageUrl;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subTitle;
@property (nonatomic) long long chargeAmount;
@property (nonatomic, copy) NSArray *discountSegments;
@property (nonatomic, copy) NSString *rulePageUrl;

+ (id)discountSegmentsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
