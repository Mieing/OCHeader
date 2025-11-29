@class NSArray;

@interface AWEMultiContentImpl.AwemeAggregationResponse : AWEBaseApiModel {
    void /* function */ awemeList;
}

@property (nonatomic, copy) NSArray *awemeList;

+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
