@class BDXBridgePoiLocationServiceError;

@interface BDXBridgePoiLocationServiceMethodResultModel : BDXBridgeModel

@property (nonatomic) BOOL allow;
@property (retain, nonatomic) BDXBridgePoiLocationServiceError *error;

+ (id)errorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
