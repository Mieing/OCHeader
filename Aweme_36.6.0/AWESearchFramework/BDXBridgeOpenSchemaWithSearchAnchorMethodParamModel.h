@class NSString, BDXBridgeOpenSchemaWithSearchAnchorAnchor;

@interface BDXBridgeOpenSchemaWithSearchAnchorMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) BDXBridgeOpenSchemaWithSearchAnchorAnchor *anchor;

+ (id)anchorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
