@class NSString, NSNumber, IESLiveRevenueRechargeCheckArgsModel;

@interface IESLiveRevenueRechargeCheckParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *chargeReason;
@property (retain, nonatomic) NSNumber *price;
@property (nonatomic) BOOL manualOpenRecharge;
@property (retain, nonatomic) IESLiveRevenueRechargeCheckArgsModel *args;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
