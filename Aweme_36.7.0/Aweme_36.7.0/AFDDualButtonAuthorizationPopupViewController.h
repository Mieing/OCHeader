@class NSString, AFDDualButtonAuthorizationPopupConfigModel, UIImageView, AWEButton, UILabel, AFDModalViewHelper, UIButton;

@interface AFDDualButtonAuthorizationPopupViewController : UIViewController <AWEPanelTransitionWithBackground>

@property (retain, nonatomic) AFDDualButtonAuthorizationPopupConfigModel *configModel;
@property (retain, nonatomic) UIImageView *titleImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) AWEButton *leftButton;
@property (retain, nonatomic) AWEButton *rightButton;
@property (retain, nonatomic) AFDModalViewHelper *helper;
@property (retain, nonatomic) UIButton *closeButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)wantsDimmingTransitionBackground;
- (void)transitionBackgroundViewTapped:(id)a0;
- (void)presentedViewPanFinished;
- (void)rightButtonClicked:(id)a0;
- (void)closeButtonClicked:(id)a0;
- (void)leftButtonClicked:(id)a0;
- (double)contentHeight;
- (void).cxx_destruct;
- (void)dismissWithCompletion:(id /* block */)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)initWithConfig:(id)a0;
- (void)viewDidLoad;
- (void)setupUI;

@end
