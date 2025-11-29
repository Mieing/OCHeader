@class BDPUniqueID, BDPExitPopupTaskNoticeView;

@interface BDPExitPopupTaskNoticeViewController : BDPBaseAlertViewController

@property (weak, nonatomic) BDPUniqueID *uniqueID;
@property (copy, nonatomic) id /* block */ exitAction;
@property (retain, nonatomic) BDPExitPopupTaskNoticeView *exitPopupTaskNoticeView;

+ (id)getSettings;
+ (BOOL)shouldShowTaskNoticeViewWithUniqueID:(id)a0;

- (void)eventWithName:(id)a0 params:(id)a1;
- (id)initWithUniqueID:(id)a0 exitAction:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (id)alertView;

@end
