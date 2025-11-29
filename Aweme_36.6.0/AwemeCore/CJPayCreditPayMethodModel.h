@class NSString, CJPayVoucherRetainInfoModel, CJPayHomePageFoldVoucherInfoModel, CJPayVoucherInfoModel;

@interface CJPayCreditPayMethodModel : CJPayChannelModel

@property (copy, nonatomic) NSString *installment;
@property (nonatomic) long long fee;
@property (nonatomic) long long payAmountPerInstallment;
@property (nonatomic) long long totalAmountPerInstallment;
@property (copy, nonatomic) NSString *voucherFeeMsg;
@property (copy, nonatomic) NSString *voucherPlatformMsg;
@property (retain, nonatomic) CJPayVoucherInfoModel *voucherInfo;
@property (copy, nonatomic) NSString *standardRecDesc;
@property (retain, nonatomic) CJPayVoucherRetainInfoModel *voucherRetainInfoModel;
@property (copy, nonatomic) NSString *standardShowAmount;
@property (copy, nonatomic) NSString *standardVoucherLabel;
@property (copy, nonatomic) NSString *crossedPrice;
@property (copy, nonatomic) NSString *firstPageVoucherMsg;
@property (copy, nonatomic) NSString *standardRetainVoucherLabel;
@property (retain, nonatomic) CJPayHomePageFoldVoucherInfoModel *homePageFoldVoucherInfoModel;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)basicDict;
+ (id)keyMapperDict;

- (id)buildShowConfig;
- (id)requestNeedParams;
- (void).cxx_destruct;

@end
