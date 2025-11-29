@class AWEButtonSurveyViewModel, AWEDislikeTwoButtonView, NSString;

@interface AWEButtonSurveyLeftElement : AWEPlayInteractionBaseActionButtonElement <AWEDislikeTwoButtonViewDelegate, AWEPlayInteractionBottomButtonPriorityProtocol>

@property (retain, nonatomic) AWEDislikeTwoButtonView *dislikeButton;
@property (retain, nonatomic) AWEButtonSurveyViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initializeElement;
- (void)viewController_willDisplay;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (void)showDislikeButton;
- (BOOL)shouldActivateButtonWithData:(id)a0;
- (void)popUpPanelIfNeeded;
- (void)userInteractionWithType:(long long)a0;
- (void)userInteractionNotification:(id)a0;
- (void)hideDislikeButton;
- (BOOL)shouldShowLeftButtonSurvey;
- (void)didClickButtonWithIndex:(unsigned long long)a0;
- (BOOL)priorityAvoidNeedHidden;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)reset;
- (void)layoutSubviews;
- (void)viewDidLoad;

@end
