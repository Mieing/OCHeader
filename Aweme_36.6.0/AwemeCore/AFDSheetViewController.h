@class UITapGestureRecognizer, AFDSheetTransitionController, UIView;

@interface AFDSheetViewController : UIViewController

@property (retain, nonatomic) UIView *dimmingView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *grabberView;
@property (retain, nonatomic) UITapGestureRecognizer *dimmingViewTapGestureRecognizer;
@property (retain, nonatomic) AFDSheetTransitionController *transitionController;
@property (nonatomic) BOOL shouldDismissWhenTapDimmingView;
@property (nonatomic) long long preferredViewTheme;

- (void)updatePreferredViewTheme;
- (void)p_tapDimmingView:(id)a0;
- (id)createNavigationController;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;

@end
