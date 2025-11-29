@class UINavigationController, NSString, UIView, UIViewController;

@interface WCFinderLimitModeRestViewController : MMUIViewController

@property (retain, nonatomic) UIView *detailView;
@property (weak, nonatomic) UINavigationController *navVC;
@property (weak, nonatomic) UIViewController *targetVC;
@property (nonatomic) long long themeStyle;
@property (retain, nonatomic) NSString *feedID;
@property (nonatomic) int commentScene;

+ (void)displayToRootView:(id)a0 feedID:(id)a1 commentScene:(int)a2;
+ (void)presendRestVC:(id)a0 toTargetVC:(id)a1;

- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)updateDetailFrame;
- (void)setupBackgroundView;
- (void)addTapClaseActionToView:(id)a0;
- (void)showDetailWithAnimation;
- (void)reportWithActionType:(long long)a0 targetView:(id)a1;
- (struct pair<double, double> { double x0; double x1; })animationPosition;
- (id)createDetailLabel:(double)a0 contentAttrs:(id)a1;
- (id)wrapDetailView:(id)a0;
- (id)createIKnowButton:(double)a0 verticalPadding:(double)a1;
- (id)createBottomIKnowButton:(double)a0;
- (id)createIcon:(BOOL)a0;
- (id)cornerView:(id)a0 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 cornerRadius:(double)a2 needShadow:(BOOL)a3;
- (id)buildMiddleGuildView;
- (id)buildBottomGuideView;
- (void)addCloseIconToView:(id)a0;
- (void)onTapBlankArea:(id)a0;
- (void)onClickIKnow:(id)a0;
- (void)onClickCloseBtn:(id)a0;
- (void)close;
- (void).cxx_destruct;

@end
