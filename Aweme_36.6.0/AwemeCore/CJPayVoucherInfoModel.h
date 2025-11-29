@class NSArray, NSString;
@protocol CJPayVoucherModel;

@interface CJPayVoucherInfoModel : JSONModel <NSCopying>

@property (copy, nonatomic) NSArray<CJPayVoucherModel> *vouchers;
@property (nonatomic) long long vouchersAmount;
@property (nonatomic) long long vouchersMaxAmount;
@property (nonatomic) long long vouchersUsedAmount;
@property (copy, nonatomic) NSString *vouchersLabel;
@property (nonatomic) long long vouchersChannelNum;
@property (nonatomic) long long vouchersPlatNum;
@property (nonatomic) long long vouchersRandomNum;
@property (copy, nonatomic) NSArray *voucherMsgList;
@property (nonatomic) long long orderSubFixedVoucherAmount;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
