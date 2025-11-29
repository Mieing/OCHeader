@class UIButton, IESLiveSlideUserFeedbackViewModel;

@interface IESLiveSlideUserFeedbackMultiLiveOption : UIView

@property (retain, nonatomic) IESLiveSlideUserFeedbackViewModel *viewModel;
@property (retain, nonatomic) UIButton *leftButton;
@property (retain, nonatomic) UIButton *rightButton;
@property (copy, nonatomic) id /* block */ optionClick;

- (void)configViewModel:(id)a0;
- (void)rightButtonAction;
- (void)leftButtonAction;
- (void)updateNegativeButton:(BOOL)a0;
- (void)updatePositiveButton:(BOOL)a0;
- (void)updateToDefaultStyle;
- (void)updateUIWithOptions:(id)a0;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)setupUI;

@end
