@class NSString, BDXBridgeDspMusicChartRequestRequestData;

@interface BDXBridgeDspMusicChartRequestMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *sessionId;
@property (retain, nonatomic) BDXBridgeDspMusicChartRequestRequestData *requestData;
@property (nonatomic) long long action;

+ (id)requiredKeyPaths;
+ (id)requestDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
