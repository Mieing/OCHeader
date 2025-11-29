@class NSString, CJPaySignCardPopUpViewController, CJPaySignCardManager;

@interface CJPayVerifyItemAdditionalSignCard : CJPayVerifyItem <CJPayTrackerProtocol>

@property (copy, nonatomic) NSString *inputContent;
@property (retain, nonatomic) CJPaySignCardPopUpViewController *signCardPopUpVC;
@property (retain, nonatomic) CJPaySignCardManager *signCardManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)event:(id)a0 params:(id)a1;
- (void)handleVerifyResponse:(id)a0;
- (BOOL)shouldHandleVerifyResponse:(id)a0;
- (void)p_showSignCardTipsWithSignCardInfo:(id)a0;
- (void)p_signCardWithSignCardInfo:(id)a0 signCardVC:(id)a1;
- (void)p_signCardWithConfirmBtn:(id)a0;
- (void)p_requestVerifyWithBDPayCardSignResponse:(id)a0;
- (void)p_verifySMS;
- (void).cxx_destruct;

@end
