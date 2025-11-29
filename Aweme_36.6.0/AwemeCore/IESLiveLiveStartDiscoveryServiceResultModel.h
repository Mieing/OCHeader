@class NSString, NSNumber;

@interface IESLiveLiveStartDiscoveryServiceResultModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *message;
@property (retain, nonatomic) NSNumber *bizCode;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
