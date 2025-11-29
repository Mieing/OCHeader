@class UIButton, NSMutableArray, AWEEnterpriseServiceEvaluateViewModel, NSString, UILabel, UIView, AWERatingView;

@interface AWEEnterpriseServiceEvaluateView : AWEEnterpriseMessageBaseView <AWERatingViewDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWERatingView *starView;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIView *feedbacksView;
@property (retain, nonatomic) UIButton *submitButton;
@property (retain, nonatomic) NSMutableArray *feedBackButtons;
@property (weak, nonatomic) AWEEnterpriseServiceEvaluateViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onRateViewTapped:(double)a0;
- (void)bindViewModel:(id)a0;
- (void)constraintSubviews;
- (void)updateDescLabel:(long long)a0;
- (void)setupFeedbacks:(id)a0 enabled:(BOOL)a1 localFeedbackIDs:(id)a2;
- (void)changeFeedbackButtonColor:(id)a0;
- (void)handleSubmitButtonClick;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })currentContentSize;
- (void)layoutSubviews;
- (void)setupUI;
- (id)feedbackButton;

@end
