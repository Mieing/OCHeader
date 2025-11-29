@class CJPayQuickBindCardModel, CJPayBizAuthInfoModel, UINavigationController, NSDictionary, UIViewController, CJPayUnionBindCardCommonModel, NSString, CJPayMemCreateBizOrderResponse, CJPayBindCardRetainInfo, CJPayUserInfo, CJPayBindCardCachedIdentityInfoModel, CJPayProcessInfo, CJPayBindPageInfoResponse;

@interface CJPayBindCardSharedDataModel : JSONModel

@property (weak, nonatomic) UINavigationController *useNavVC;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *merchantId;
@property (copy, nonatomic) NSString *jhAppId;
@property (copy, nonatomic) NSString *jhMerchantId;
@property (weak, nonatomic) UIViewController *referVC;
@property (nonatomic) long long cardBindSource;
@property (retain, nonatomic) CJPayProcessInfo *processInfo;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ dismissLoadingBlock;
@property (copy, nonatomic) NSString *firstStepBackgroundImageURL;
@property (copy, nonatomic) NSString *firstStepMainTitle;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *voucherMsgStr;
@property (copy, nonatomic) NSString *voucherBankStr;
@property (copy, nonatomic) NSString *displayIcon;
@property (copy, nonatomic) NSString *displayDesc;
@property (copy, nonatomic) NSString *orderInfo;
@property (copy, nonatomic) NSString *orderAmount;
@property (copy, nonatomic) NSString *iconURL;
@property (nonatomic) BOOL isCertification;
@property (nonatomic) BOOL isBizAuthVCShown;
@property (nonatomic) BOOL isQuickBindCard;
@property (nonatomic) BOOL isQuickBindCardListHidden;
@property (copy, nonatomic) NSString *jumpQuickBindCard;
@property (retain, nonatomic) CJPayQuickBindCardModel *quickBindCardModel;
@property (retain, nonatomic) CJPayMemCreateBizOrderResponse *memCreatOrderResponse;
@property (retain, nonatomic) CJPayBizAuthInfoModel *bizAuthInfoModel;
@property (copy, nonatomic) NSDictionary *bindCardInfo;
@property (copy, nonatomic) NSString *tokenScene;
@property (copy, nonatomic) NSString *specialMerchantId;
@property (retain, nonatomic) CJPayUserInfo *userInfo;
@property (copy, nonatomic) NSString *bankMobileNoMask;
@property (copy, nonatomic) NSString *signOrderNo;
@property (copy, nonatomic) NSString *skipPwd;
@property (copy, nonatomic) NSString *endPageUrl;
@property (nonatomic) long long bindUnionCardSourceType;
@property (nonatomic) BOOL isBindUnionCardNeedLoading;
@property (nonatomic) BOOL isSyncUnionCard;
@property (nonatomic) long long bindUnionCardType;
@property (retain, nonatomic) CJPayUnionBindCardCommonModel *unionBindCardCommonModel;
@property (nonatomic) BOOL isEcommerceAddBankCardAndPay;
@property (nonatomic) unsigned long long independentBindCardType;
@property (copy, nonatomic) NSString *bizAuthExperiment;
@property (nonatomic) unsigned long long bizAuthType;
@property (copy, nonatomic) NSString *jumpOneKeySignOptimizeExp;
@property (copy, nonatomic) NSDictionary *trackerParams;
@property (copy, nonatomic) NSDictionary *trackInfo;
@property (copy, nonatomic) NSString *frontIndependentBindCardSource;
@property (nonatomic) double startTimestamp;
@property (nonatomic) double firstStepVCTimestamp;
@property (copy, nonatomic) NSDictionary *outerPayTrackDict;
@property (nonatomic) BOOL dismissProcessAnimated;
@property (retain, nonatomic) CJPayBindPageInfoResponse *bankListResponse;
@property (retain, nonatomic) CJPayBindCardRetainInfo *retainInfo;
@property (nonatomic) BOOL isHadShowRetain;
@property (retain, nonatomic) CJPayBindCardCachedIdentityInfoModel *cachedIdentityModel;
@property (nonatomic) unsigned long long lynxBindCardBizScence;
@property (nonatomic) BOOL isSaasScene;
@property (copy, nonatomic) NSDictionary *addSharePayParams;
@property (copy, nonatomic) NSString *bindCardExtParam;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (BOOL)propertyIsIgnored:(id)a0;
+ (id)p_keyMapperDict;

- (void).cxx_destruct;

@end
