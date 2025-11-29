@class NSString, NSDictionary;

@interface IESLivePreloadResourceParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *mainUrl;
@property (copy, nonatomic) NSDictionary *subRes;
@property (copy, nonatomic) NSString *containerType;

- (void).cxx_destruct;

@end
