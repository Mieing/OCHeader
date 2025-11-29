@class NSDictionary, NSString, NSNumber;

@interface IESLiveNativePrefetchResultModel : IESLiveBridgeModel

@property (copy, nonatomic) NSDictionary *data;
@property (copy, nonatomic) NSString *errorMessage;
@property (retain, nonatomic) NSNumber *status;
@property (retain, nonatomic) NSNumber *_jsbInvokeBackMode;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
