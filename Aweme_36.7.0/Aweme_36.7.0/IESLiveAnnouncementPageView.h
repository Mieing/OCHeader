@class NSArray, UILabel, UIView, IESLiveWebpLoadingView;

@interface IESLiveAnnouncementPageView : UIView

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *navBar;
@property (retain, nonatomic) UIView *buttonContainer;
@property (retain, nonatomic) UIView *topContainer;
@property (retain, nonatomic) UIView *centerContainer;
@property (retain, nonatomic) UIView *bottomContainer;
@property (retain, nonatomic) UIView *bottomContainerDivideLine;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *leftContainerView;
@property (retain, nonatomic) UIView *rightContainerView;
@property (copy, nonatomic) NSArray *leftActions;
@property (copy, nonatomic) NSArray *rightActions;
@property (retain, nonatomic) IESLiveWebpLoadingView *loadingView;

+ (long long)popupItemType;
+ (BOOL)isShowing;

- (void)updateButtons:(id)a0;
- (id)buttonWithTitle:(id)a0 titleColor:(id)a1 backgroundColor:(id)a2;
- (id)createButtons;
- (id)titleForNavBar;
- (id)rightActionsForNavBar;
- (id)leftActionsForNavBar;
- (void)reloadNavBarRightData;
- (void)reloadNavBarAllData;
- (void)reloadNavBarTitle;
- (void)reloadNavBarLeftData;
- (void)fillContainerWithActions:(id)a0 isLeft:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void)show;
- (void)setupUI;
- (void)setupData;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;
- (void)hideWithCompletion:(id /* block */)a0;
- (void)setupLayout;

@end
