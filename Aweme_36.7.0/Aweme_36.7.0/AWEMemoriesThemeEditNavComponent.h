@class UIButton, UIView;

@interface AWEMemoriesThemeEditNavComponent : ACCSecondaryPageComponent

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIButton *backButton;
@property (nonatomic) BOOL isFirstAppear;

- (void)componentDidAppear;
- (id)commonTrackParams;
- (void)componentDidMount;
- (void)backButtonDidClick;
- (double)subViewHeight;
- (id)subViewInHierarchy;
- (unsigned long long)secondaryPageComponentType;
- (void)exitEditPage;
- (void)trackForEnterEditSecondaryPage;
- (void)trackForClickCancelEditPopup:(id)a0;
- (void)trackForCancelEditPopupShow;
- (void)trackForExitEditSecondaryPage;
- (void).cxx_destruct;

@end
