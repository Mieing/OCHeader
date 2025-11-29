@class NSString, NSDictionary, CJPayBindCardVoucherInfo;

@interface CJPayMemBankInfoModel : JSONModel

@property (copy, nonatomic) NSString *bankCardID;
@property (copy, nonatomic) NSString *bankCode;
@property (copy, nonatomic) NSString *bankName;
@property (copy, nonatomic) NSString *cardType;
@property (copy, nonatomic) NSString *iconURL;
@property (copy, nonatomic) NSString *cardNoMask;
@property (copy, nonatomic) NSString *cardNumStr;
@property (copy, nonatomic) NSString *perpayLimit;
@property (copy, nonatomic) NSString *perdayLimit;
@property (nonatomic) double cellHeight;
@property (copy, nonatomic) NSString *cardBinVoucher;
@property (copy, nonatomic) NSDictionary *voucherInfoDict;
@property (retain, nonatomic) CJPayBindCardVoucherInfo *debitBindCardVoucherInfo;
@property (retain, nonatomic) CJPayBindCardVoucherInfo *creditBindCardVoucherInfo;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (id)toQuickPayCardModel;
- (void).cxx_destruct;

@end
