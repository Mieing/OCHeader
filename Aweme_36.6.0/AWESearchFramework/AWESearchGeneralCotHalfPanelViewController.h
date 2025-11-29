@class AWESearchGeneralCotSearchBarView, AWEGeneralSearchCotViewController, AWESearchGeneralCotHalfPanelContainerViewController, UIView, AWESearchGeneralCotTipsView, NSString, UIButton, UIPanGestureRecognizer, AWESearchGeneralCotHalfPanelHeaderView, AWESearchGeneralCotHalfPanelMaskView, AWESearchGeneralCotHalfPanelConfig;

@interface AWESearchGeneralCotHalfPanelViewController : UIViewController

@property (nonatomic) double screenRatio;
@property (retain, nonatomic) AWESearchGeneralCotHalfPanelConfig *config;
@property (retain, nonatomic) AWESearchGeneralCotHalfPanelHeaderView *headerView;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) UIButton *largeCloseBtn;
@property (retain, nonatomic) AWESearchGeneralCotHalfPanelContainerViewController *container;
@property (retain, nonatomic) AWESearchGeneralCotSearchBarView *inputView;
@property (retain, nonatomic) AWEGeneralSearchCotViewController *cotResultVC;
@property (retain, nonatomic) AWESearchGeneralCotTipsView *tipsView;
@property (retain, nonatomic) AWESearchGeneralCotHalfPanelMaskView *maskView;
@property (retain, nonatomic) UIPanGestureRecognizer *pan;
@property (retain, nonatomic) UIPanGestureRecognizer *headerPan;
@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic) double containerWidth;
@property (nonatomic) double startTime;
@property (copy, nonatomic) id /* block */ closeCotHalfPanelBlock;
@property (nonatomic) BOOL userEnableAI;
@property (retain, nonatomic) NSString *originKeyword;

- (void)setupContainer;
- (id)btm;
- (void)clickCloseButton;
- (void)setupInputView;
- (id)initWithContainerWidth:(double)a0 config:(id)a1;
- (void)trackCotPanelShow;
- (void)sendQuery:(id)a0;
- (void)dismissInputKeyboard;
- (void)handlePanRecognizer:(id)a0;
- (void)checkContainerState:(id)a0;
- (void)closePanelView;
- (void)backToSeventhScreen;
- (void)closePanelViewWithCompletion:(id /* block */)a0;
- (void)trackCotPanelExit;
- (id)cotInfoLog;
- (void)clickSearchBar;
- (void)handleMaskPanRecognizer:(id)a0;
- (void)cotPanelSearch:(id)a0;
- (void)handleHeaderPanRecognizer:(id)a0;
- (BOOL)enableUseNewStyle;
- (void).cxx_destruct;
- (void)keyboardWillShow:(id)a0;
- (id)init;
- (void)keyboardWillHide:(id)a0;
- (void)addObserver;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)setupUI;
- (void)setupHeaderView;

@end
