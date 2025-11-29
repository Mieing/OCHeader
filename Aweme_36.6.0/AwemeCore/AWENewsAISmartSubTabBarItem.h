@class UIView, DUXBaseLabel, AWENewsAISmartTabConfig;

@interface AWENewsAISmartSubTabBarItem : UIView

@property (retain, nonatomic) AWENewsAISmartTabConfig *tabConfig;
@property (nonatomic) long long status;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) DUXBaseLabel *titleLabel;

- (void)p_configUI;
- (void)p_makeConstraint;
- (id)initWithTabConfig:(id)a0 status:(long long)a1;
- (void)p_configLabel;
- (void)p_configForDefaultMode;
- (void)p_configForSelectedMode;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;

@end
