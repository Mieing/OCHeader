@class NSNumber, NSString;

@interface IESECGetAdInfoDataModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *creativeId;
@property (copy, nonatomic) NSString *logExtra;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
