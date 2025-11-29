@interface BDXLynxMapPolygonStyle : BDXLynxMapStyleModel

@property (nonatomic) long long dashType;
@property (nonatomic) BOOL isDashed;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;

@end
