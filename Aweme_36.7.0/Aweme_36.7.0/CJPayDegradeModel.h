@class NSString;

@interface CJPayDegradeModel : JSONModel

@property (copy, nonatomic) NSString *bdpayAppId;
@property (copy, nonatomic) NSString *cjpayAppId;
@property (copy, nonatomic) NSString *bdpayMerchantId;
@property (copy, nonatomic) NSString *cjpayMerchantId;
@property (nonatomic) BOOL isPayUseH5;
@property (nonatomic) BOOL isBalanceWithdrawUseH5;
@property (nonatomic) BOOL isBalanceRechargeUseH5;
@property (nonatomic) BOOL isCardListUseH5;
@property (nonatomic) BOOL isBDPayUseH5;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
