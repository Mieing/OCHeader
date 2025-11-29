@class NSString;

@interface CommissionInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *commissionId;
@property (nonatomic) unsigned long long spuId;
@property (nonatomic) unsigned long long skuId;
@property (nonatomic) unsigned long long predictCommission;
@property (nonatomic) unsigned int predictCommissionRate;
@property (nonatomic) unsigned long long commission;
@property (nonatomic) unsigned int commissionRate;
@property (nonatomic) unsigned int state;
@property (nonatomic) unsigned long long settleTime;
@property (nonatomic) unsigned int referType;
@property (retain, nonatomic) NSString *commissionPayId;

+ (void)initialize;

@end
