@class NSString, NSNumber;

@interface CJPayCreditRiskFundModel : JSONModel

@property (copy, nonatomic) NSString *riskFundName;
@property (retain, nonatomic) NSNumber *riskFundAmount;
@property (copy, nonatomic) NSString *riskFundDescription;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
