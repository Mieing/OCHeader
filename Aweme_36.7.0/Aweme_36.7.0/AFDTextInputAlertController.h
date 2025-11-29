@class UIStackView, UIView, NSArray, NSString, AFDButton, UITextView, NSLayoutConstraint, AFDTextField, UILabel;

@interface AFDTextInputAlertController : UIViewController <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, AFDSelectionContainerViewDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *backgroundMaskView;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UIView *topAnchorView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UITextView *shadowView;
@property (retain, nonatomic) AFDTextField *textField;
@property (retain, nonatomic) AFDButton *clearButton;
@property (retain, nonatomic) UIStackView *buttonsStackView;
@property (retain, nonatomic) UIView *buttonsHorizontalLine;
@property (copy, nonatomic) NSArray *actionButtons;
@property (nonatomic) BOOL enablePadAdaption;
@property (copy, nonatomic) NSArray *actions;
@property (retain, nonatomic) NSLayoutConstraint *centerYConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadBizUIAdapterClass;
+ (id)alertControllerWithTitle:(id)a0 actions:(id)a1;

- (void)duxGrid_viewDidChangeBreakPointFrom:(struct { long long x0; long long x1; })a0 toBreakPoint:(struct { long long x0; long long x1; })a1;
- (void)p_clearText;
- (id)aAWEPadBizUIAdapter;
- (void)p_clickButton:(id)a0;
- (void)p_keyboardWillChangeFrame:(id)a0;
- (void)selectionContainer:(id)a0 didBeginSelectingView:(id)a1;
- (void)selectionContainer:(id)a0 didChangeSelectingView:(id)a1 lastSelectedView:(id)a2;
- (void)selectionContainer:(id)a0 didEndSelectingView:(id)a1;
- (void)selectionContainer:(id)a0 didCancelSelectingView:(id)a1;
- (void)p_setupActions;
- (id)p_createButtonForAction:(id)a0;
- (void)p_updateActionsEnabled:(id)a0;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)init;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;

@end
