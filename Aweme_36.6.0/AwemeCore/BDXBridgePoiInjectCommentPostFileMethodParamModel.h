@class NSArray, BDXBridgePoiInjectCommentPostFileMusic;

@interface BDXBridgePoiInjectCommentPostFileMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSArray *materials;
@property (retain, nonatomic) BDXBridgePoiInjectCommentPostFileMusic *music;

+ (id)requiredKeyPaths;
+ (id)musicJSONTransformer;
+ (id)materialsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
