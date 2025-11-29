@class NSNumber, NSString;

@interface IESLivePaidLinkMicApplyPaidLinkmicDiscountInfoModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *discountMode;
@property (retain, nonatomic) NSNumber *discountAmount;
@property (copy, nonatomic) NSString *discountText;

+ (id)modelCustomPropertyMapper;

@end
