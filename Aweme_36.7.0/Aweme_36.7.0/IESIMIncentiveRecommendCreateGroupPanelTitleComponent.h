@class UILabel, UIView;

@interface IESIMIncentiveRecommendCreateGroupPanelTitleComponent : AWEIMComponentBase

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_viewDidLoad;
- (id)createGroupContext;
- (void).cxx_destruct;
- (id)componentView;
- (void)setupUI;

@end
