@class ACCEditBeautyEffectCompontentViewModel, UIButton, UIView;

@interface ACCBeautifulEffectNavComponent : ACCSecondaryPageComponent

@property (retain, nonatomic) ACCEditBeautyEffectCompontentViewModel *viewModel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIButton *saveBtn;
@property (retain, nonatomic) UIButton *cancelBtn;

- (void)componentDidMount;
- (void)didClickCancel:(id)a0;
- (void)didClickSave:(id)a0;
- (void)dismissNavBarWithAnimation;
- (double)subViewHeight;
- (id)subViewInHierarchy;
- (unsigned long long)secondaryPageComponentType;
- (void)dismiss;
- (void).cxx_destruct;
- (void)setupUI;

@end
