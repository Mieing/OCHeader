@class NSString;

@interface CJPayTransferPayController : NSObject <CJPayBaseLoadingProtocol>

@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ customLoadingBlock;
@property (copy, nonatomic) NSString *bankCodeStr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)event:(id)a0 params:(id)a1;
- (void)p_callbackWithResult:(long long)a0;
- (void)startPaymentWithParams:(id)a0 completion:(id /* block */)a1;
- (void)p_bindCardWithTransferModel:(id)a0 params:(id)a1;
- (void)p_openAccountWithTransferModel:(id)a0 params:(id)a1;
- (void)p_transferPayWithTransferModel:(id)a0;
- (void)p_openBigPayLynxPageWithSchema:(id)a0 transferModel:(id)a1;
- (void)p_tryOpenBankListWithTransferModel:(id)a0 isDelayOpenLynx:(BOOL)a1;
- (void)p_queryIdentityAndTransferPayWithTransferModel:(id)a0;
- (void)p_startVerifyWithTransferModel:(id)a0;
- (void)p_verifyDataWithResultModel:(id)a0 transferModel:(id)a1;
- (void).cxx_destruct;
- (void)startLoading;
- (void)stopLoading;

@end
