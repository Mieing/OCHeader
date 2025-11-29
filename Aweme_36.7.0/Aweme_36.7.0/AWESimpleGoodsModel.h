@class NSString, NSValueTransformer;

@interface AWESimpleGoodsModel : AWEGoodsBasicModel

@property (class, readonly, nonatomic) NSValueTransformer *dictionaryTransformer;

@property (copy, nonatomic) NSString *schema;
@property (readonly, nonatomic) BOOL isLuban;
@property (readonly, nonatomic) BOOL useSchema;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isLubanWithSchema:(id)a0;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
