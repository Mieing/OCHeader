@class NSString, NSArray, CJPaySubPayTypeRecommendModel, CJPayPasswordViewRegionShowModel, CJPayBDCircularCarouselRegion, NSDictionary, CJPayToastInfo, CJPayBDRetainInfoModel, CJPayMemberVerifyInfo, CJPayVerifyDescRegionModel;
@protocol CJPaySubPayTypeDisplayInfo, BDPayCombinePayShowInfo;

@interface CJPayInfo : JSONModel

@property (copy, nonatomic) NSString *businessScene;
@property (copy, nonatomic) NSString *bankCardId;
@property (copy, nonatomic) NSString *creditPayInstallment;
@property (copy, nonatomic) NSString *payAmountPerInstallment;
@property (copy, nonatomic) NSString *originFeePerInstallment;
@property (copy, nonatomic) NSString *realFeePerInstallment;
@property (copy, nonatomic) NSArray *voucherNoList;
@property (copy, nonatomic) NSString *decisionId;
@property (copy, nonatomic) NSString *realTradeAmount;
@property (nonatomic) long long realTradeAmountRaw;
@property (copy, nonatomic) NSString *originTradeAmount;
@property (copy, nonatomic) NSString *voucherMsg;
@property (nonatomic) BOOL isCreditActivate;
@property (copy, nonatomic) NSString *creditActivateUrl;
@property (copy, nonatomic) NSString *jumpLynxUrl;
@property (nonatomic) BOOL isNeedJumpTargetUrl;
@property (copy, nonatomic) NSString *targetUrl;
@property (copy, nonatomic) NSString *voucherType;
@property (copy, nonatomic) NSString *payName;
@property (copy, nonatomic) NSArray *cashierTags;
@property (copy, nonatomic) NSString *verifyDesc;
@property (copy, nonatomic) NSString *verifyDescIcon;
@property (nonatomic) BOOL isForeignCard;
@property (copy, nonatomic) NSString *localVerifyDownGradeDesc;
@property (copy, nonatomic) NSString *verifyDowngradeReason;
@property (nonatomic) long long verifyDescType;
@property (copy, nonatomic) NSString *tradeDesc;
@property (copy, nonatomic) NSString *currency;
@property (nonatomic) BOOL hasRandomDiscount;
@property (copy, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) CJPayBDRetainInfoModel *retainInfo;
@property (retain, nonatomic) CJPayMemberVerifyInfo *memberVerifyInfo;
@property (retain, nonatomic) CJPayBDCircularCarouselRegion *circularCarouselRegion;
@property (copy, nonatomic) NSDictionary *retainInfoV2;
@property (copy, nonatomic) NSDictionary *retainInfoBatchDict;
@property (copy, nonatomic) NSString *combineType;
@property (copy, nonatomic) NSString *primaryPayType;
@property (copy, nonatomic) NSArray<BDPayCombinePayShowInfo> *combineShowInfo;
@property (readonly, nonatomic) BOOL isCombinePay;
@property (copy, nonatomic) NSString *guideVoucherLabel;
@property (copy, nonatomic) NSString *showCombineStyleStr;
@property (nonatomic) long long showCombineStyle;
@property (nonatomic) BOOL isGuideCheck;
@property (copy, nonatomic) NSString *priceZoneShowStyle;
@property (copy, nonatomic) NSString *standardRecDesc;
@property (copy, nonatomic) NSString *standardShowAmount;
@property (readonly, nonatomic) BOOL needShowStandardVoucher;
@property (copy, nonatomic) NSArray<CJPaySubPayTypeDisplayInfo> *subPayTypeDisplayInfoList;
@property (retain, nonatomic) CJPayPasswordViewRegionShowModel *pwdRegionShowModel;
@property (copy, nonatomic) NSString *showAmountView;
@property (copy, nonatomic) NSString *showChangePayType;
@property (retain, nonatomic) CJPaySubPayTypeRecommendModel *subPayTypeRecommend;
@property (retain, nonatomic) CJPayVerifyDescRegionModel *verifyDescRegionModel;
@property (copy, nonatomic) NSString *recipientDesc;
@property (copy, nonatomic) NSString *shareAssetID;
@property (copy, nonatomic) NSString *shareAssetCode;
@property (copy, nonatomic) NSString *smsVerifyMobileMask;
@property (retain, nonatomic) CJPayToastInfo *toastInfo;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (BOOL)isDynamicLayout;
- (BOOL)useNewCreditDescription;
- (id)buildCreditPayMethodModel;
- (void).cxx_destruct;

@end
