@class NSString;

@interface CJPayVoucherModel : JSONModel

@property (copy, nonatomic) NSString *voucherNo;
@property (copy, nonatomic) NSString *batchNo;
@property (copy, nonatomic) NSString *promotionProductCode;
@property (copy, nonatomic) NSString *voucherType;
@property (copy, nonatomic) NSString *voucherName;
@property (nonatomic) long long reduceAmount;
@property (nonatomic) long long randomMaxReductAmount;
@property (nonatomic) long long reachedAmount;
@property (nonatomic) long long usedAmount;
@property (copy, nonatomic) NSString *label;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
