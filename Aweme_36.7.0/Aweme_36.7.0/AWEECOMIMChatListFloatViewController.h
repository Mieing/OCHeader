@class AWEECOMIMFloatChatListBiz, NSString, UIView, UIPanGestureRecognizer, UIViewController;

@interface AWEECOMIMChatListFloatViewController : AWEECOMChatListViewController <UIGestureRecognizerDelegate, AWEECOMIMFloatContainerDetailViewControllerProtocol>

@property (nonatomic) BOOL isFolded;
@property (retain, nonatomic) UIView *slideView;
@property (retain, nonatomic) UIPanGestureRecognizer *pan;
@property double floatMode;
@property (retain, nonatomic) AWEECOMIMFloatChatListBiz *biz;
@property (nonatomic) BOOL notFirstTimeAppear;
@property (weak, nonatomic) UIViewController *fromVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UIViewController *containerVC;
@property (copy, nonatomic) id /* block */ ecomim_closeDetailFloatBlock;

- (void)closeFloatMessagePage;
- (void)configNavigationBar;
- (void)p_dismissAndPopViewControllerWithAnimation:(BOOL)a0;
- (void)tryToShowSurveyAlert;
- (void)createBiz;
- (void)refreshWithIsDarkTheme;
- (void)willClosePage;
- (void)transferToFullVC;
- (void)addPanGR;
- (void)hostInjectionDidOpenPage;
- (void)panGestureRecognizerAction;
- (void)layoutUIIfNeeded;
- (long long)getPageContentMode:(BOOL)a0;
- (id)getHostInjectionExtraParams;
- (void)hostInjectionWillClosePage;
- (void).cxx_destruct;
- (void)panGestureRecognizerAction:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;

@end
