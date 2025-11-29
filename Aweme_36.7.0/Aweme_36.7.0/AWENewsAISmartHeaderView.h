@class DUXBaseLabel, AWENewsAISmartHeaderViewModel;

@interface AWENewsAISmartHeaderView : UIView

@property (retain, nonatomic) AWENewsAISmartHeaderViewModel *viewModel;
@property (retain, nonatomic) DUXBaseLabel *titleLabel;

- (void)p_configUI;
- (void)p_makeConstraint;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;

@end
