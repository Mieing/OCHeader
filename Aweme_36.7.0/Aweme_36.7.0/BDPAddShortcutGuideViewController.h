@class BDPUniqueID, BDPAddShortcutGuideView;

@interface BDPAddShortcutGuideViewController : BDPBaseAlertViewController

@property (weak, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPAddShortcutGuideView *guideView;
@property (copy, nonatomic) id /* block */ addToDesktopAction;

- (void).cxx_destruct;
- (void)prepareLayout;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (id)alertView;
- (id)initWithUniqueID:(id)a0;

@end
