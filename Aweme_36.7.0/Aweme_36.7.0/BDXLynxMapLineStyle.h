@interface BDXLynxMapLineStyle : BDXLynxMapStyleModel

@property (nonatomic) BOOL isDashed;

+ (id)isDashedJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;

@end
