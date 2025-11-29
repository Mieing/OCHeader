@class BDPSubscribe, NSMutableDictionary, BDPPermissionTableViewController, NSMutableArray;

@interface BDPSubscribeViewController : BDPBusinessXScreenViewController {
    NSMutableArray *_subscribeGroups;
}

@property (retain, nonatomic) BDPPermissionTableViewController *tableViewController;
@property (retain, nonatomic) NSMutableDictionary *allTemplateInfoDict;
@property (weak, nonatomic) BDPSubscribe *subs;

- (BOOL)XScreenWindowShouldShowCustomButton:(id)a0;
- (BOOL)XScreenWindowShouldShowLeftCustomButton:(id)a0;
- (id)indexPathWithTag:(long long)a0;
- (void)switchOnChange:(id)a0;
- (void).cxx_destruct;
- (BOOL)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)setupView;
- (id)initWithUniqueID:(id)a0;
- (void)updateNavigationTitle;

@end
