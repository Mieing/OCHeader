@class CJPayThreeDSEnrollResultResonse, CJPayAssetInfoModel, CJPayHintInfo, NSDictionary, CJPayPwdErrorActionModel, CJPaySubPayTypeIconTipModel, CJPayErrorButtonInfo, CJPayCombinePayLimitModel, NSString, CJPayForgetPwdInfo, CJPaySignCardInfo, CJPayFaceVerifyInfo, CJPayTradeConfirmResultInfo, NSArray, CJPayProcessInfo, CJPayBDTypeInfo, CJPayBDOrderResultResponse;

@interface CJPayOrderConfirmResponse : CJPayBaseResponse

@property (copy, nonatomic) NSString *jumpUrl;
@property (nonatomic) long long pwdLeftRetryTime;
@property (nonatomic) long long pwdLeftLockTime;
@property (copy, nonatomic) NSString *pwdLeftLockTimeDesc;
@property (copy, nonatomic) NSString *payFlowNo;
@property (copy, nonatomic) NSString *channelTradeNo;
@property (copy, nonatomic) NSString *changePayTypeDesc;
@property (copy, nonatomic) NSString *tradeNo;
@property (retain, nonatomic) CJPayProcessInfo *processInfo;
@property (retain, nonatomic) NSDictionary *processInfoDic;
@property (retain, nonatomic) NSDictionary *pwdErrorPop;
@property (retain, nonatomic) CJPayErrorButtonInfo *buttonInfo;
@property (retain, nonatomic) CJPayFaceVerifyInfo *faceVerifyInfo;
@property (copy, nonatomic) NSString *mobile;
@property (nonatomic) BOOL cardSignSuccess;
@property (retain, nonatomic) CJPayCombinePayLimitModel *combineLimitButton;
@property (copy, nonatomic) NSString *combineType;
@property (retain, nonatomic) CJPayBDTypeInfo *payTypeInfo;
@property (copy, nonatomic) NSString *bankCardId;
@property (copy, nonatomic) NSString *outTradeNo;
@property (copy, nonatomic) NSDictionary *tradeQueryResponseDic;
@property (copy, nonatomic) NSString *frontBankName;
@property (copy, nonatomic) NSString *cardTailNum;
@property (copy, nonatomic) NSString *oneKeyPayPwdCheckMsg;
@property (retain, nonatomic) CJPayHintInfo *hintInfo;
@property (retain, nonatomic) CJPaySignCardInfo *signCardInfo;
@property (retain, nonatomic) CJPaySubPayTypeIconTipModel *iconTips;
@property (retain, nonatomic) CJPayForgetPwdInfo *forgetPwdInfo;
@property (retain, nonatomic) CJPayPwdErrorActionModel *pwdErrorAction;
@property (retain, nonatomic) CJPayTradeConfirmResultInfo *resultInfo;
@property (copy, nonatomic) NSDictionary *exts;
@property (copy, nonatomic) NSArray *cashierTag;
@property (copy, nonatomic) NSString *payType;
@property (copy, nonatomic) NSString *shareAssetId;
@property (copy, nonatomic) NSDictionary *orderResultResponseDict;
@property (retain, nonatomic) CJPayBDOrderResultResponse *orderResultResponse;
@property (retain, nonatomic) CJPayThreeDSEnrollResultResonse *dsEnrollResultResponse;
@property (retain, nonatomic) CJPayAssetInfoModel *failReasonAssetInfoModel;
@property (copy, nonatomic) NSDictionary *doubleCheckParam;

+ (id)keyMapper;

- (void).cxx_destruct;

@end
