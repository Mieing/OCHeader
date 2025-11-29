@class NSString, NSNumber;

@interface IESLiveNativePrefetchParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *requestId;
@property (retain, nonatomic) NSNumber *jsbInvokeBackMode;
@property (copy, nonatomic) NSString *apiKey;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
