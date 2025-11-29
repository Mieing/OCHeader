@class CJPaySignCardModel, CJPayOrderConfirmResponse, CJPayUnifyPayProcessModel, CJPayDefaultChannelShowConfig, CJPaySignCardManager;

@interface CJPayUnifyCashDeskReVerifyManager : NSObject

@property (retain, nonatomic) CJPayUnifyPayProcessModel *processModel;
@property (retain, nonatomic) CJPaySignCardModel *signCardModel;
@property (retain, nonatomic) CJPaySignCardManager *signCardManager;
@property (retain, nonatomic) CJPayOrderConfirmResponse *response;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ trackBlock;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *selectedShowConfig;

- (BOOL)shouldHandleVerifyResponse:(id)a0;
- (void)p_resultWithCancelAndException:(unsigned long long)a0;
- (void)p_showSignCardTipsWithSignCardInfo:(id)a0;
- (void)p_buildLynxSignCardModel:(id)a0;
- (void)p_buildSignCardModel;
- (void)p_handleSignCardResult:(id)a0;
- (void)handleVerifyResponse:(id)a0 withProcessModel:(id)a1 withCompletion:(id /* block */)a2;
- (void).cxx_destruct;

@end
