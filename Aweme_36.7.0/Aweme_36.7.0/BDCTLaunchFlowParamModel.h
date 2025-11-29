@class NSString, NSDictionary;

@interface BDCTLaunchFlowParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *aid;
@property (copy, nonatomic) NSString *flow;
@property (copy, nonatomic) NSString *ticket;
@property (copy, nonatomic) NSDictionary *h5_query_params;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
