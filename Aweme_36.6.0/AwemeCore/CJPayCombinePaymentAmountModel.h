@class NSString;

@interface CJPayCombinePaymentAmountModel : JSONModel

@property (copy, nonatomic) NSString *totalAmount;
@property (copy, nonatomic) NSString *detailInfo;
@property (copy, nonatomic) NSString *cashAmount;
@property (copy, nonatomic) NSString *bankCardAmount;
@property (copy, nonatomic) NSString *discountStr;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
