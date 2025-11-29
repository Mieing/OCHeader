@class NSNumber, NSString;

@interface IESECGetExplainProductDataModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *status;
@property (copy, nonatomic) NSString *promotionId;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
