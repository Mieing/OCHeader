@class DYABindMobileAlertModel, DYBindPhoneGuideAlertView;
@protocol DYBindPhoneGuideAlertViewControllerDelegate;

@interface DYBindPhoneGuideAlertViewController : UIViewController

@property (retain, nonatomic) DYABindMobileAlertModel *model;
@property (retain, nonatomic) DYBindPhoneGuideAlertView *alertView;
@property (weak, nonatomic) id<DYBindPhoneGuideAlertViewControllerDelegate> delegate;

- (void)clickCloseButton;
- (void)alertDismissWithCompletion:(id /* block */)a0;
- (void)clickBindButton;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;

@end
