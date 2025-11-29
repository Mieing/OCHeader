@class NSString, IESECGoodsInstallmentDescModel;

@interface IESECGoodsInstallmentDiscountInfoModel : IESECBaseApiModel

@property (nonatomic) BOOL shouldShow;
@property (copy, nonatomic) NSString *discountDesc;
@property (retain, nonatomic) IESECGoodsInstallmentDescModel *descText;
@property (copy, nonatomic) NSString *activityType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
