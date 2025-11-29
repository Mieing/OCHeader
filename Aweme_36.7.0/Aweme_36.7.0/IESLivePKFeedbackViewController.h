@class IESLiveButton, IESLiveRevenueInteractFeedbackViewModel, IESLiveCustomButton, UILabel, UIView, IESLiveRevenueInteractFeedbackView;
@protocol IESLiveCompoundSubscription, IESLivePKProvider;

@interface IESLivePKFeedbackViewController : IESLiveRevenueInteractPopupViewController

@property (retain, nonatomic) IESLiveButton *backButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *separateLine;
@property (retain, nonatomic) IESLiveRevenueInteractFeedbackView *feedbackView;
@property (retain, nonatomic) IESLiveCustomButton *submitButton;
@property (retain, nonatomic) IESLiveRevenueInteractFeedbackViewModel *viewModel;
@property (weak, nonatomic) id<IESLivePKProvider> pkProvider;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (nonatomic) long long fromSource;

- (void)bindActions;
- (void)onBackButtonClicked;
- (id)sceneString;
- (void)onSetupNavBar:(id)a0;
- (id)initWithDIContext:(id)a0 fromSource:(long long)a1;
- (void)fetchPKFeedback;
- (void)updateFeedbackViewFrame;
- (void)checkSubmitButtonStatus;
- (void)onSubmitButtonClicked;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupSubviews;

@end
