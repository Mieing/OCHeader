@class CJPayDouPayProcessVerifyManagerQueen, CJPayPopUpBaseViewController, CJPaySkipPwdConfirmHalfPageViewController;
@protocol CJPayBaseLoadingProtocol;

@interface CJPayDouPayProcessVerifyManager : CJPayBaseVerifyManager

@property (retain, nonatomic) CJPayDouPayProcessVerifyManagerQueen *queen;
@property (weak, nonatomic) CJPayPopUpBaseViewController<CJPayBaseLoadingProtocol> *skipPwdVC;
@property (weak, nonatomic) CJPaySkipPwdConfirmHalfPageViewController<CJPayBaseLoadingProtocol> *skipPwdHalfPageVC;
@property (nonatomic) unsigned long long lynxBindCardBizScence;

+ (id)managerWith:(id)a0 isAssetProcess:(BOOL)a1;
+ (id)managerWith:(id)a0;

- (id)verifyManagerQueen;
- (void)onBindCardAndPayAction;
- (id)getPerformanceInfo;
- (id)buildConfirmRequestParamsByCurPayChannel;
- (void)confirmRequestSuccess:(id)a0 withChannelType:(unsigned long long)a1;
- (id)otherExtsParamsForQueryOrder;
- (id)tradeConfirmParamsFromPreFlow;
- (void)gotoBindCardWithCompletion:(id /* block */)a0;
- (void)p_showTradeConfirmResultInfo:(id)a0;
- (void)p_assetBindCardAction;
- (void)p_bindCardAction;
- (void)p_preChargeAfterBindCard:(id)a0;
- (void)p_bindCardReConfirm;
- (id)p_buildNewCardShowConfigWithBankCardId:(id)a0;
- (void)p_closeBindCardWithObject:(unsigned long long)a0;
- (void)p_preChargeSecondaryConfirm:(id)a0;
- (BOOL)p_isValidMemBankInfo:(id)a0;
- (id)p_confirmModel:(id)a0;
- (void).cxx_destruct;

@end
