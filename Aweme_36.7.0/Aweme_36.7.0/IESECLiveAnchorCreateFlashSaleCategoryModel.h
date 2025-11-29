@class IESECLiveAnchorCreateFlashSaleCustomDepositModel, NSArray, NSString, IESECLiveAnchorCreateFlashSaleRefund, NSNumber;

@interface IESECLiveAnchorCreateFlashSaleCategoryModel : IESECLiveApiBaseModel

@property (retain, nonatomic) NSArray *itemArray;
@property (retain, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSNumber *maxStock;
@property (nonatomic) long long stockReductionType;
@property (retain, nonatomic) IESECLiveAnchorCreateFlashSaleCustomDepositModel *customDepositInfo;
@property (retain, nonatomic) NSArray *privilegeInfoArray;
@property (retain, nonatomic) IESECLiveAnchorCreateFlashSaleRefund *refundPolicy;
@property (copy, nonatomic) NSArray *deliveryDelayTimeRange;

+ (id)itemArrayJSONTransformer;
+ (id)privilegeInfoArrayJSONTransformer;
+ (id)customDepositInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
