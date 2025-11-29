@class UIPanGestureRecognizer, NSString, UILabel, UIView, UIButton;

@interface DYReBindHighRiskPhoneNumberAlertViewController : UIViewController <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) double containerHeight;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UILabel *subDetailLabel;
@property (retain, nonatomic) UIButton *dismissButton;
@property (retain, nonatomic) UIButton *acceptButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (nonatomic) struct CGPoint { double x; double y; } lastLocation;
@property (retain, nonatomic) UIPanGestureRecognizer *panGes;
@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) NSString *detailText;
@property (retain, nonatomic) NSString *subDetailText;
@property (copy, nonatomic) id /* block */ acceptBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ dismissKeyBoardBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)selfPanned:(id)a0;
- (void)acceptAction;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)viewDidLayoutSubviews;
- (void)cancelAction;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dismissAction;
- (void)dismiss:(id /* block */)a0;
- (void)presentWithCompletion:(id /* block */)a0;

@end
