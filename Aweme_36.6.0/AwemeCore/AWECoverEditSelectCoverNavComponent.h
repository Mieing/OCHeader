@class UIButton, UILabel, UIView;

@interface AWECoverEditSelectCoverNavComponent : ACCSecondaryPageComponent

@property (retain, nonatomic) UIView *navBar;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UILabel *titleLabel;

- (void)componentDidMount;
- (void)backButtonDidClick;
- (double)subViewHeight;
- (id)subViewInHierarchy;
- (unsigned long long)secondaryPageComponentType;
- (void).cxx_destruct;

@end
