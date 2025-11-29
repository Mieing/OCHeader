@class CJPayVoucherRetainModel, NSDictionary, CJPayRecommendPopup, CJPaySignInformation, CJPayCreditRiskFundModel, CJPayErrorButtonInfo, NSString, CJPayMerchantInfo, CJPayDyPayPromotionVoucherInfo, NSArray, CJPayRiskVerifyInfo, CJPayUserInfo, CJPayRecommendUserInfo, CJPayLoadingStyleInfo;
@protocol CJPayMemAgreementModel;

@interface CJPayCreditSignPageQueryResponse : CJPayBaseResponse

@property (copy, nonatomic) NSString *authMode;
@property (copy, nonatomic) NSString *payscoreApplyToken;
@property (retain, nonatomic) CJPayErrorButtonInfo *nonBlockingPopup;
@property (retain, nonatomic) CJPayCreditRiskFundModel *riskFund;
@property (retain, nonatomic) CJPayRecommendUserInfo *recommendUserInfo;
@property (retain, nonatomic) CJPayRecommendPopup *recommendPopup;
@property (retain, nonatomic) CJPayUserInfo *userInfo;
@property (retain, nonatomic) CJPayMerchantInfo *merchantInfo;
@property (retain, nonatomic) CJPaySignInformation *signInformation;
@property (copy, nonatomic) NSDictionary *retainInfoV2;
@property (retain, nonatomic) CJPayVoucherRetainModel *voucherRetainInfo;
@property (retain, nonatomic) CJPayDyPayPromotionVoucherInfo *promotionVoucherInfo;
@property (copy, nonatomic) NSDictionary *promotionVoucherInfoDic;
@property (copy, nonatomic) NSString *protocolGuideDesc;
@property (copy, nonatomic) NSArray<CJPayMemAgreementModel> *protocolInfo;
@property (copy, nonatomic) NSArray *protocolInfoArray;
@property (copy, nonatomic) NSDictionary *protocolGroupNames;
@property (retain, nonatomic) CJPayErrorButtonInfo *buttonInfo;
@property (retain, nonatomic) CJPayRiskVerifyInfo *riskVerifyInfo;
@property (retain, nonatomic) CJPayLoadingStyleInfo *loadingStyleInfo;
@property (nonatomic) long long countNum;
@property (copy, nonatomic) NSString *confirmSignButton;
@property (copy, nonatomic) NSDictionary *exts;
@property (copy, nonatomic) NSDictionary *traceParams;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (id)getDefaultConfig;
- (id)getTrackerMemberPayList;
- (id)getDefaultAssetInfoModel;
- (unsigned long long)getScreenStyle;
- (id)getTrackerAssetList;
- (BOOL)isAssetStandard;
- (id)memberPayListShowConfigs;
- (void)changePayTypeChosenStatus:(id)a0;
- (void).cxx_destruct;
- (BOOL)isSuccess;
- (id)getSelectedItem;

@end
