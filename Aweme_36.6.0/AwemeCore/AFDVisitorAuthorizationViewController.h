@class UIView, NSString, AFDVisitorListViewModel, AFDVisitorTextSettingsModel, UIImageView, AFDModalViewHelper, UIButton, UILabel, AWEProfileToggleView;

@interface AFDVisitorAuthorizationViewController : UIViewController <AWEPanelTransitionWithBackground>

@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *minusIconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *introLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) AWEProfileToggleView *toggleView;
@property (retain, nonatomic) AFDModalViewHelper *helper;
@property (retain, nonatomic) AFDVisitorTextSettingsModel *textSettingsModel;
@property (copy, nonatomic) id /* block */ reloadBlock;
@property (weak, nonatomic) AFDVisitorListViewModel *viewModel;
@property (retain, nonatomic) NSString *previousEnterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)wantsDimmingTransitionBackground;
- (void)transitionBackgroundViewTapped:(id)a0;
- (double)p_contentHeight;
- (id)initWithTextSettingsModel:(id)a0;
- (void)updateAuthorazitionState:(BOOL)a0 animated:(BOOL)a1;
- (void)refreshVisitorListAuthorizationState;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)closeButtonTapped:(id)a0;

@end
