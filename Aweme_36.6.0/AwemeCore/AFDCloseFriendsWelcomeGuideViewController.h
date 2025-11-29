@class AFDModalViewHelper, AWEButton, NSString, UIView;

@interface AFDCloseFriendsWelcomeGuideViewController : UIViewController <AWEPanelTransitionWithBackground>

@property (retain, nonatomic) AFDModalViewHelper *helper;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWEButton *entryButton;
@property (nonatomic) double contentHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)wantsDimmingTransitionBackground;
- (void)p_setupUINew;
- (id)configContentLabelViewWithContentView:(id)a0 icon:(id)a1 title:(id)a2 subTitle:(id)a3;
- (id)p_configContentLabelViewWithContentView:(id)a0 icon:(id)a1 title:(id)a2 subTitle:(id)a3;
- (void)entryButtonClicked;
- (void).cxx_destruct;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)setupUI;

@end
