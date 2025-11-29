@class DUXBaseButton, AWENewsAISmartExitButtonViewModel;

@interface AWENewsAISmartExitButton : UIView

@property (retain, nonatomic) AWENewsAISmartExitButtonViewModel *viewModel;
@property (retain, nonatomic) DUXBaseButton *exitButton;

- (void)p_configUI;
- (void)p_makeConstraint;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)layoutSubviews;

@end
