@class NSDictionary, CJPayUnifyPayAgainDisplayInfoModel, NSString, CJPaySwitchAreaInfoModel, CJPayResultShowConfig, CJPayRecommendPopup, CJPayVerifyDescRegionModel, CJPayBindCardPayReConfirmInfo, CJPayAssetInfoModel, CJPayBDTradeInfo, CJPayBioOpenAndPayInfo, CJPayCommonRecInfo, CJPayAssetMetaInfoModel, CJPayProcessInfo, CJPayToastInfo, CJPayBDCircularCarouselRegion, CJPayUserInfo, CJPayLoadingStyleInfo, CJPayBDDeskConfig, CJPayMerchantInfo, CJPayPayAndXShowInfoModel, CJPayDoubleConfirmPageInfo, CJPaySubPayTypeRecommendModel;

@interface CJPayUnifyCashierRenderModel : JSONModel

@property (retain, nonatomic) CJPayAssetInfoModel *assetInfoModel;
@property (retain, nonatomic) CJPayLoadingStyleInfo *loadingStyleInfo;
@property (copy, nonatomic) NSDictionary *collectedAssetExtMap;
@property (copy, nonatomic) NSString *initialShowStyle;
@property (retain, nonatomic) CJPayProcessInfo *byteProcessInfo;
@property (retain, nonatomic) CJPayUserInfo *userInfo;
@property (retain, nonatomic) CJPayMerchantInfo *merchantInfo;
@property (retain, nonatomic) CJPaySwitchAreaInfoModel *topRightBtnInfo;
@property (retain, nonatomic) CJPaySwitchAreaInfoModel *backTopRightBtnInfo;
@property (retain, nonatomic) CJPayAssetMetaInfoModel *recommendAssetMetaInfo;
@property (retain, nonatomic) CJPaySubPayTypeRecommendModel *recommendModel;
@property (retain, nonatomic) CJPayUnifyPayAgainDisplayInfoModel *payAgainDisplayInfoModel;
@property (retain, nonatomic) CJPayBindCardPayReConfirmInfo *bindCardPayReConfirmInfo;
@property (retain, nonatomic) CJPayDoubleConfirmPageInfo *prePayDoubleConfirmInfo;
@property (copy, nonatomic) NSString *extParam;
@property (copy, nonatomic) NSDictionary *extInfo;
@property (retain, nonatomic) CJPayPayAndXShowInfoModel *payAndXShowInfo;
@property (retain, nonatomic) CJPayBDCircularCarouselRegion *circularCarouselRegion;
@property (retain, nonatomic) CJPayBDTradeInfo *tradeInfo;
@property (retain, nonatomic) CJPayBioOpenAndPayInfo *bioOpenAndPayInfo;
@property (retain, nonatomic) CJPayRecommendPopup *recommendPopup;
@property (retain, nonatomic) CJPayToastInfo *toastInfo;
@property (retain, nonatomic) CJPayResultShowConfig *resultConfig;
@property (retain, nonatomic) CJPayCommonRecInfo *commonRecInfo;
@property (copy, nonatomic) NSDictionary *forgetPwdInfo;
@property (retain, nonatomic) CJPayBDDeskConfig *deskConfig;
@property (copy, nonatomic) NSString *autoConfirmPay;
@property (retain, nonatomic) CJPayVerifyDescRegionModel *verifyDescRegionModel;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (id)getDefaultShowConfig;
- (id)p_extExperimentList;
- (id)convertToBDCreateResponse;
- (BOOL)isSelectChannelNotProcessed;
- (BOOL)isVerifyTriggerRetain;
- (BOOL)isRetainSyncRequest;
- (BOOL)isDirectSetPasswordProcess;
- (void).cxx_destruct;

@end
