@class CJPayHalfScreenSMSVerificationViewController, CJPaySMSVerificationRequestModel;

@interface CJPayHalfScreenSMSVerificationH5Presenter : NSObject <CJPayHalfScreenSMSVerificationViewInterface>

@property (weak, nonatomic) CJPayHalfScreenSMSVerificationViewController *vc;
@property (retain, nonatomic) CJPaySMSVerificationRequestModel *model;
@property (copy, nonatomic) id /* block */ sendingBlock;

- (void)onReceiveH5Message:(id)a0;
- (id)initWithVC:(id)a0 model:(id)a1 sendingBlock:(id /* block */)a2;
- (void)goToHelpVC;
- (void)closeWithAction:(id)a0 delayTime:(double)a1;
- (void)didEnterCode:(id)a0;
- (void)didTapResendButton;
- (void).cxx_destruct;
- (void)render:(id)a0;
- (void)didTapCloseButton;

@end
