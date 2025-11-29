@class CJPayDefaultChannelShowConfig, CJPayOrderConfirmResponse, CJPayHintInfo, CJPayBDCreateOrderResponse, NSString, CJPayFrontCashierContext, NSDictionary, CJPayIntegratedChannelModel;

@interface CJPayPayAgainViewModel : NSObject

@property (retain, nonatomic) CJPayHintInfo *hintInfo;
@property (retain, nonatomic) CJPayBDCreateOrderResponse *createOrderResponse;
@property (retain, nonatomic) CJPayIntegratedChannelModel *cardListModel;
@property (retain, nonatomic) CJPayOrderConfirmResponse *confirmResponse;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *currentShowConfig;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *defaultShowConfig;
@property (readonly, nonatomic) CJPayFrontCashierContext *payContext;
@property (copy, nonatomic) NSDictionary *extParams;
@property (copy, nonatomic) NSString *installment;
@property (copy, nonatomic) NSString *superPayAgainExtParam;
@property (copy, nonatomic) NSDictionary *payDisabledFundID2ReasonMap;
@property (nonatomic) BOOL isGroupStyle;
@property (nonatomic) BOOL isSuperPayAgainV2;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *recShowConfig;
@property (copy, nonatomic) NSDictionary *processInfo;
@property (nonatomic) BOOL autoConfirm;

- (id)trackerParams;
- (id)initWithConfirmResponse:(id)a0 createRespons:(id)a1 isAssetStandard:(BOOL)a2;
- (void)fetchNotSufficientCardListResponseWithCompletion:(id /* block */)a0;
- (void)fetchNotSufficientCardListResponseWithTopAssetShowConfig:(id)a0 isNewCardRefresh:(BOOL)a1 completion:(id /* block */)a2;
- (void)fetchNotSufficientTradeCreateResponseWithCompletion:(id /* block */)a0;
- (id)initWithConfirmResponse:(id)a0 createRespons:(id)a1;
- (void)fetchCombinationPaymentResponseWithCompletion:(id /* block */)a0;
- (id)initWithHintInfo:(id)a0;
- (id)p_cardListParamsWithTopAssetShowConfig:(id)a0 isNewCardRefresh:(BOOL)a1;
- (id)p_createParams;
- (id)p_createCombineParams;
- (id)p_getSuperPayAgainExtParam;
- (void)p_removeSuperPayFailTradeScene;
- (id)p_getCurrentCombineTypeStr;
- (id)p_buildPreTradeParamsWithTopAssetShowConfig:(id)a0 isNewCardRefresh:(BOOL)a1;
- (void).cxx_destruct;

@end
