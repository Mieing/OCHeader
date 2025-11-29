@class CJPayUnifyCashierRenderModel, NSDictionary, CJPayAssetJumpInfoModel, CJPayDefaultChannelShowConfig, CJPaySignCardManager;

@interface CJPayUnifyPreFlowUtil : NSObject

@property (copy, nonatomic) NSDictionary *extParams;
@property (retain, nonatomic) CJPayAssetJumpInfoModel *jumpModel;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *curSelectedConfig;
@property (retain, nonatomic) CJPaySignCardManager *signCardManager;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ willSuccessBlock;
@property (copy, nonatomic) id /* block */ trackBlock;
@property (copy, nonatomic) id /* block */ btmTrackerBlock;
@property (copy, nonatomic) id /* block */ customLoadingBlock;
@property (retain, nonatomic) CJPayUnifyCashierRenderModel *renderModel;
@property (copy, nonatomic) id /* block */ buildRefreshCreateExtParams;

- (void)p_stopLoading;
- (void)p_startLoading;
- (void)p_bindCardAndPay;
- (void)p_gotoLynxSetPasswordWithSchema:(id)a0;
- (BOOL)p_isValidMemBankInfo:(id)a0;
- (BOOL)hasPrePaymentFlowForAsset:(id)a0;
- (void)startUnifyPreFlowProcessWithShowConfig:(id)a0 withParams:(id)a1 withWillSuccessBlock:(id /* block */)a2 withCompletion:(id /* block */)a3;
- (void)p_handleWillSuccessNotification;
- (void)p_handleCreditActiveSuccessWithVerifyInfo:(id)a0 withToken:(id)a1;
- (void)p_callbackWithResultCode:(unsigned long long)a0 preFlowType:(unsigned long long)a1 errorMsg:(id)a2;
- (void)p_activeCreditAndPayWithTrackSourceStr:(id)a0 jumpModel:(id)a1 completion:(id /* block */)a2;
- (void)p_gotoLynxDirectBankSignWithSchema:(id)a0;
- (void)p_reSignBankCardWithLynxSchema:(id)a0;
- (id)p_getBindCardExtParams;
- (void)p_bindCardSuccessAddOptionType:(id)a0;
- (void)p_bindCardSuccessWithResModel:(id)a0;
- (id)p_buildTopAssetListParamsWithBankCardId:(id)a0;
- (void)p_callbackWithResultCode:(unsigned long long)a0 preFlowType:(unsigned long long)a1 errorMsg:(id)a2 confirmParams:(id)a3 createAgainParams:(id)a4;
- (id)p_buildTopAssetListParamsWithDefaultConfig;
- (void)p_callbackWithResultCode:(unsigned long long)a0 preFlowType:(unsigned long long)a1 errorMsg:(id)a2 jhConfirmParams:(id)a3 confirmParams:(id)a4 context:(id)a5 createAgainParams:(id)a6;
- (void)p_handleResultForForeignCard:(id)a0 completion:(id /* block */)a1;
- (void)p_handleResultForNormalBindCard:(id)a0 completion:(id /* block */)a1;
- (id)p_encryptContext;
- (id)p_getTopAssetMetaInfoStr;
- (void)p_foreignCardSecondaryConfirmWithResponse:(id)a0 cancelBlock:(id /* block */)a1 confirmBlock:(id /* block */)a2;
- (id)p_buildConfirmParamsWithToken:(id)a0;
- (id)p_buildTopMetaInfo:(id)a0;
- (id)p_assetMetaInfoListParamsWithBankCardId:(id)a0;
- (void)p_callbackWithResultCode:(unsigned long long)a0 preFlowType:(unsigned long long)a1 errorMsg:(id)a2 confirmParams:(id)a3;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
