@class NSString;

@interface CJPayFeeQueryResponse : CJPayBaseResponse

@property (nonatomic) long long totalAmount;
@property (nonatomic) long long realFee;
@property (nonatomic) long long freeQuotaFee;
@property (nonatomic) long long freeQuota;
@property (nonatomic) long long arrivalAmount;
@property (copy, nonatomic) NSString *feeRate;
@property (nonatomic) long long minimumFee;
@property (nonatomic) long long availableFreeQuota;
@property (nonatomic) long long decreaseBalance;
@property (copy, nonatomic) NSString *freeQuotaUrl;

+ (id)keyMapper;

- (void).cxx_destruct;

@end
