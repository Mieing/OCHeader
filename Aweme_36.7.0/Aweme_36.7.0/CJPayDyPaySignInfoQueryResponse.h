@class CJPaySignInformation, NSString, CJPayVoucherRetainModel, NSArray, CJPayUserInfo, NSDictionary, CJPayErrorButtonInfo, CJPayRiskVerifyInfo, CJPayDyPayPromotionVoucherInfo, CJPayMerchantInfo, CJPayDoubleConfirmPageInfo, CJPayLoadingStyleInfo;
@protocol CJPayMemAgreementModel;

@interface CJPayDyPaySignInfoQueryResponse : CJPayBaseResponse

@property (retain, nonatomic) CJPayUserInfo *userInfo;
@property (retain, nonatomic) CJPayMerchantInfo *merchantInfo;
@property (retain, nonatomic) CJPaySignInformation *signInformation;
@property (copy, nonatomic) NSDictionary *retainInfoV2;
@property (copy, nonatomic) NSString *preEntrustwebId;
@property (retain, nonatomic) CJPayVoucherRetainModel *voucherRetainInfo;
@property (retain, nonatomic) CJPayDyPayPromotionVoucherInfo *promotionVoucherInfo;
@property (copy, nonatomic) NSDictionary *promotionVoucherInfoDic;
@property (copy, nonatomic) NSString *protocolGuideDesc;
@property (copy, nonatomic) NSString *protocolShowPosition;
@property (copy, nonatomic) NSArray<CJPayMemAgreementModel> *protocolInfo;
@property (copy, nonatomic) NSDictionary *protocolGroupNames;
@property (retain, nonatomic) CJPayErrorButtonInfo *buttonInfo;
@property (retain, nonatomic) CJPayRiskVerifyInfo *riskVerifyInfo;
@property (retain, nonatomic) CJPayDoubleConfirmPageInfo *doubleConfirmInfo;
@property (retain, nonatomic) CJPayLoadingStyleInfo *loadingStyleInfo;
@property (copy, nonatomic) NSString *signPageStyle;
@property (copy, nonatomic) NSString *signPageHeight;
@property (copy, nonatomic) NSString *promptToastMsg;
@property (nonatomic) long long countNum;
@property (copy, nonatomic) NSString *confirmSignButton;
@property (copy, nonatomic) NSDictionary *exts;
@property (copy, nonatomic) NSString *cancelReturnUrl;
@property (nonatomic) BOOL supportAutoConfirm;
@property (copy, nonatomic) NSDictionary *traceParams;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)basicDict;

- (id)getDefaultConfig;
- (id)getTrackerMemberPayList;
- (id)getDefaultAssetInfoModel;
- (id)getTrackerAssetList;
- (BOOL)isNeedDisableRepeatVerify;
- (BOOL)isAssetStandard;
- (id)memberPayListShowConfigs;
- (void)changePayTypeChosenStatus:(id)a0;
- (void).cxx_destruct;
- (BOOL)isSuccess;
- (id)getSelectedItem;

@end
