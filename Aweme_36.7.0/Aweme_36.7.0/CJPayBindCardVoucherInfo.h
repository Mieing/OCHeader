@class NSString, NSArray;

@interface CJPayBindCardVoucherInfo : JSONModel

@property (copy, nonatomic) NSString *voucherMsg;
@property (copy, nonatomic) NSArray *vouchers;
@property (copy, nonatomic) NSString *binVoucherMsg;
@property (copy, nonatomic) NSString *aggregateVoucherMsg;
@property (nonatomic) long long isNotShowPromotion;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
