@class NSString, QryCancelECardDescRes;
@protocol WCPayECardDetailControlLogicDelegate;

@interface WCPayECardDetailControlLogic : WCPayECardBaseControlLogic <WCPayECardDetailViewControllerDelegate, WCPayECardSuccessViewControllerDelegate>

@property (retain, nonatomic) QryCancelECardDescRes *cancelDetail;
@property (weak, nonatomic) id<WCPayECardDetailControlLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithData:(id)a0 delegate:(id)a1;
- (void)startLogic;
- (void)WCPayViewControllerDidBeRemoved:(id)a0;
- (void)ecardDetailVC:(id)a0 didClickCloseWith:(id)a1;
- (void)VerifyPayPwdNext:(id)a0;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)OnUnBindCard:(id)a0 Error:(id)a1;
- (void)successVCFinished:(id)a0;
- (void).cxx_destruct;

@end
