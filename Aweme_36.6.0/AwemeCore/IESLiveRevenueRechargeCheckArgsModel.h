@class NSNumber, NSString, NSDictionary;

@interface IESLiveRevenueRechargeCheckArgsModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *businessScene;
@property (copy, nonatomic) NSString *callbackScheme;
@property (retain, nonatomic) NSNumber *chargeType;
@property (copy, nonatomic) NSString *requestPage;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSDictionary *extra;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
