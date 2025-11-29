@class NSDictionary, NSNumber, NSString;

@interface IESLiveMallPrefetchResultModel : IESLiveBridgeModel

@property (copy, nonatomic) NSDictionary *data;
@property (retain, nonatomic) NSNumber *status;
@property (copy, nonatomic) NSString *errorMessage;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
