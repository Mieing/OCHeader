@class BDXBridgeLifeOpenHotRankDetailFeedParams, BDXBridgeLifeOpenHotRankDetailBasicParams;

@interface BDXBridgeLifeOpenHotRankDetailMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) BDXBridgeLifeOpenHotRankDetailBasicParams *basicParams;
@property (retain, nonatomic) BDXBridgeLifeOpenHotRankDetailFeedParams *feedParams;

+ (id)requiredKeyPaths;
+ (id)basicParamsJSONTransformer;
+ (id)feedParamsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
