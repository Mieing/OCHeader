@class CJPayUnionBindCardCommonModel, NSString, NSDictionary, CJPayProcessInfo, CJPayUserInfo;

@interface CJPayHalfSignCardVerifySMSViewModel : CJPayBindCardPageBaseModel

@property (nonatomic) long long cardBindSource;
@property (nonatomic) BOOL outerClose;
@property (retain, nonatomic) CJPayProcessInfo *processInfo;
@property (nonatomic) BOOL isQuickBindCard;
@property (copy, nonatomic) NSString *specialMerchantId;
@property (retain, nonatomic) CJPayUserInfo *userInfo;
@property (copy, nonatomic) NSString *signOrderNo;
@property (copy, nonatomic) NSString *frontIndependentBindCardSource;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *displayDesc;
@property (copy, nonatomic) NSDictionary *bindCardInfo;
@property (copy, nonatomic) NSDictionary *trackerParams;
@property (nonatomic) BOOL isCertification;
@property (nonatomic) long long bindUnionCardType;
@property (retain, nonatomic) CJPayUnionBindCardCommonModel *unionBindCardCommonModel;
@property (nonatomic) double firstStepVCTimestamp;
@property (readonly, nonatomic) BOOL isAuthorized;
@property (nonatomic) BOOL isEcommerceAddBankCardAndPay;

+ (id)keyMapperDict;

- (id)timeIntervalSinceFirstStepVC;
- (void).cxx_destruct;

@end
