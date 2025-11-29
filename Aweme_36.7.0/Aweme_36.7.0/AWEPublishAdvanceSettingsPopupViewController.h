@class UINavigationController, AFDModalViewHelper, AWEPublishAdvanceSettingsTableViewController, NSString, UIViewController;
@protocol AWEPublishAdvanceSettingsDataControllerProtocol;

@interface AWEPublishAdvanceSettingsPopupViewController : UIViewController <AWEPanelTransitionWithBackground, AWEPublishAdvanceSettingsPopupMenuViewControllerDelegate>

@property (retain, nonatomic) AFDModalViewHelper *helper;
@property (retain, nonatomic) UINavigationController *innerNavigation;
@property (retain, nonatomic) AWEPublishAdvanceSettingsTableViewController *contentVC;
@property (retain, nonatomic) id<AWEPublishAdvanceSettingsDataControllerProtocol> dataController;
@property (copy, nonatomic) id /* block */ delayUpdateBlock;
@property (copy, nonatomic) id /* block */ innerDismissBlock;
@property (copy, nonatomic) id /* block */ finalDismissBlock;
@property (weak, nonatomic) UIViewController *sourceViewController;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)wantsDimmingTransitionBackground;
- (void)transitionBackgroundViewTapped:(id)a0;
- (void)presentedViewPanFinished;
- (void)dismissHalfScreen;
- (void)dismissHalfScreenWithChildVC;
- (void)updateLayoutIfNeed;
- (id)initWithDataController:(id)a0 popup:(id)a1 shouldAddNavigationView:(BOOL)a2;
- (id)initWithDataController:(id)a0 popup:(id)a1;
- (void)popupCleanUpIfNeeded;
- (id)p_modalTransitionController;
- (double)contentHeight;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)loadView;

@end
