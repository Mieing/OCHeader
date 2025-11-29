@class CJPayBioPaymentInfo, CJPaySkipPwdGuideInfoModel, CJPayResultPageGuideInfoModel, CJPayFEGuideInfoModel, NSDictionary, CJPayResultShowConfig, CJPayErrorButtonInfo, CJPayCombinePayLimitModel, NSString, CJPayMerchantInfo, CJPayResultPageInfoModel, CJPayProcessingGuidePopupInfo, NSArray, CJPayUserInfo, CJPayProcessInfo, CJPayBDTypeInfo, CJPayBDTradeInfo;
@protocol CJPayPaymentInfo, CJPayTradeQueryContentList, CJPayResultPayInfo;

@interface CJPayBDOrderResultResponse : CJPayBaseResponse

@property (nonatomic) BOOL skipPwdOpenStatus;
@property (copy, nonatomic) NSString *skipPwdOpenMsg;
@property (nonatomic) BOOL recommendOpenStatus;
@property (copy, nonatomic) NSString *recommendOpenMsg;
@property (retain, nonatomic) CJPayCombinePayLimitModel *limitModel;
@property (copy, nonatomic) NSDictionary *extParams;
@property (retain, nonatomic) CJPayMerchantInfo *merchant;
@property (copy, nonatomic) NSArray<CJPayResultPayInfo> *payInfos;
@property (retain, nonatomic) CJPayBDTradeInfo *tradeInfo;
@property (retain, nonatomic) CJPayBDTypeInfo *payTypeInfo;
@property (retain, nonatomic) CJPayUserInfo *userInfo;
@property (retain, nonatomic) CJPayResultShowConfig *resultConfig;
@property (retain, nonatomic) CJPayProcessInfo *processInfo;
@property (retain, nonatomic) CJPayBioPaymentInfo *bioPaymentInfo;
@property (retain, nonatomic) CJPayErrorButtonInfo *buttonInfo;
@property (retain, nonatomic) CJPayProcessingGuidePopupInfo *processingGuidePopupInfo;
@property (retain, nonatomic) CJPaySkipPwdGuideInfoModel *skipPwdGuideInfoModel;
@property (retain, nonatomic) CJPayResultPageGuideInfoModel *resultPageGuideInfoModel;
@property (retain, nonatomic) CJPayFEGuideInfoModel *feGuideInfoModel;
@property (copy, nonatomic) NSString *payAfterUseGuideUrl;
@property (copy, nonatomic) NSArray *voucherDetails;
@property (copy, nonatomic) NSArray<CJPayTradeQueryContentList> *contentList;
@property (copy, nonatomic) NSArray<CJPayPaymentInfo> *paymentInfo;
@property (retain, nonatomic) CJPayResultPageInfoModel *resultPageInfo;
@property (copy, nonatomic) NSDictionary *originalDict;
@property (copy, nonatomic) NSString *commonResultPageStr;
@property (nonatomic) BOOL hiddenResultPage;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (int)closeAfterTime;
- (id)creditPayInstallmentDesc;
- (id)payTypeDescText;
- (id)halfScreenText;
- (void).cxx_destruct;

@end
