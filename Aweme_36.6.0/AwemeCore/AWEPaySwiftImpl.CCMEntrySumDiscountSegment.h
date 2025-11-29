@class NSString;

@interface AWEPaySwiftImpl.CCMEntrySumDiscountSegment : MTLModel <MTLJSONSerializing> {
    void /* function */ desc;
}

@property (nonatomic, copy) NSString *desc;
@property (nonatomic) long long toAmount;
@property (nonatomic) long long fromAmount;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
