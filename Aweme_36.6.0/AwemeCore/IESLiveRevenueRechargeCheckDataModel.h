@class NSNumber;

@interface IESLiveRevenueRechargeCheckDataModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *diamondBalance;
@property (nonatomic) BOOL result;
@property (nonatomic) BOOL afterRecharge;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
