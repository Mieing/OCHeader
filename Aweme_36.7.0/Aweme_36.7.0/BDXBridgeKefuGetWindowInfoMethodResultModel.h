@class BDXBridgeKefuGetWindowInfoWindowInfo;

@interface BDXBridgeKefuGetWindowInfoMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) BDXBridgeKefuGetWindowInfoWindowInfo *windowInfo;

+ (id)windowInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
