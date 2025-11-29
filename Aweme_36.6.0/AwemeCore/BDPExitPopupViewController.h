@class BDPModel, BDPExitPopupView;

@interface BDPExitPopupViewController : BDPBaseAlertViewController

@property (retain, nonatomic) BDPModel *model;
@property (retain, nonatomic) BDPExitPopupView *exitPopupView;
@property (copy, nonatomic) id /* block */ exitAction;

+ (BOOL)shouldShowExitPopupViewWithModel:(id)a0;

- (id)initWithAppModel:(id)a0 exitAction:(id /* block */)a1;
- (void)_eventWithName:(id)a0 params:(id)a1;
- (void).cxx_destruct;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (id)alertView;

@end
