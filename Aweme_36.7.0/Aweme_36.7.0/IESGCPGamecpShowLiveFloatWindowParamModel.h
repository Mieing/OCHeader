@class NSDictionary;

@interface IESGCPGamecpShowLiveFloatWindowParamModel : IESLiveBridgeModel

@property (nonatomic) BOOL isShow;
@property (copy, nonatomic) NSDictionary *extraParam;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
