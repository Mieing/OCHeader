@class NSString, NSDictionary;

@interface BTMXBridgeBtmPageRouteMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *route_type;
@property (copy, nonatomic) NSString *btm;
@property (copy, nonatomic) NSDictionary *pageEventParams;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
