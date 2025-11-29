@class NSDictionary, NSNumber;

@interface IESLiveLiveRunAiServiceResultModel : IESLiveBridgeModel

@property (copy, nonatomic) NSDictionary *result;
@property (retain, nonatomic) NSNumber *resultCode;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
