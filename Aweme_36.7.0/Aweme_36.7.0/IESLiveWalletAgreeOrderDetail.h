@class NSString, StandardMoney, IESLiveWalletPaymentInfo;

@interface IESLiveWalletAgreeOrderDetail : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *walletBizIdentity;
@property (copy, nonatomic) NSString *orderId;
@property (nonatomic) long long userId;
@property (copy, nonatomic) NSString *orderName;
@property (copy, nonatomic) NSString *orderDescription;
@property (nonatomic) long long status;
@property (nonatomic) long long createTime;
@property (nonatomic) long long finishTime;
@property (nonatomic) long long unsignFinishTime;
@property (nonatomic) long long firstDeductTime;
@property (nonatomic) long long nextDeductTime;
@property (retain, nonatomic) StandardMoney *limitAmount;
@property (nonatomic) BOOL hasLimitAmount;
@property (copy, nonatomic) NSString *periodicType;
@property (nonatomic) long long frequency;
@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) NSString *skuId;
@property (retain, nonatomic) IESLiveWalletPaymentInfo *paymentInfo;
@property (nonatomic) BOOL hasPaymentInfo;
@property (nonatomic) long long userPrivilegeEndTime;
@property (copy, nonatomic) NSString *iconURL;
@property (copy, nonatomic) NSString *signChannel;
@property (copy, nonatomic) NSString *signChannelStr;

+ (id)descriptor;

@end
