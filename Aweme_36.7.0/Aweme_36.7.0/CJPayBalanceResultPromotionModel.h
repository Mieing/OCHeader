@class NSString;

@interface CJPayBalanceResultPromotionModel : JSONModel

@property (copy, nonatomic) NSString *leftDiscountAmount;
@property (copy, nonatomic) NSString *leftDiscountDesc;
@property (copy, nonatomic) NSString *rightTopDesc;
@property (copy, nonatomic) NSString *rightBottomDesc;
@property (copy, nonatomic) NSString *voucherEndTime;
@property (copy, nonatomic) NSString *jumpUrl;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
