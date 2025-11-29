@class BDXLynxMapLineTextureModel;

@interface BDXLynxMapLineModel : BDXLynxMapBridgeModel

@property (nonatomic) long long zIndex;
@property (retain, nonatomic) BDXLynxMapLineTextureModel *texture;

+ (id)styleJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
