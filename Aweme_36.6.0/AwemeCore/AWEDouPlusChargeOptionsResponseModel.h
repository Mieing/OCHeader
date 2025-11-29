@class NSArray;

@interface AWEDouPlusChargeOptionsResponseModel : AWEBaseApiModel

@property (nonatomic) double totalBalance;
@property (nonatomic) double totalBalanceAndDebt;
@property (copy, nonatomic) NSArray *iapBudgetList;

+ (id)iapBudgetListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
