@class NSNumber, NSString, NSDictionary;

@interface IESLiveLiveIncomeExchangeParamModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *exchangeType;
@property (retain, nonatomic) NSNumber *diamond;
@property (retain, nonatomic) NSNumber *goldAmount;
@property (retain, nonatomic) NSNumber *cashAmount;
@property (copy, nonatomic) NSString *requestPage;
@property (copy, nonatomic) NSString *chargeScene;
@property (copy, nonatomic) NSString *chargeReason;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSDictionary *logExtra;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
