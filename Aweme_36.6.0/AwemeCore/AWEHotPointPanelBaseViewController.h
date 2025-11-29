@class UIView, NSString, UITapGestureRecognizer, UIImage, AWEHotSpotInnerContext, UIButton, AWEHotWordsRecommendViewController, UIViewController, MASConstraint, UIPanGestureRecognizer, AWEHotSearchManager;
@protocol AWEHotPointPanelControllerProtocol;

@interface AWEHotPointPanelBaseViewController : UIViewController <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) UIView *effectView;
@property (nonatomic) struct CGPoint { double x; double y; } lastLocation;
@property (retain, nonatomic) MASConstraint *baseViewBottom;
@property (nonatomic) double baseViewBottomOffset;
@property (retain, nonatomic) AWEHotWordsRecommendViewController *hotWordsRecommendViewController;
@property (nonatomic) long long effectViewStyle;
@property (retain, nonatomic) UIImage *closeButtonImage;
@property (retain, nonatomic) UITapGestureRecognizer *tapGes;
@property (retain, nonatomic) UIViewController<AWEHotPointPanelControllerProtocol> *panelViewController;
@property (retain, nonatomic) UIView *closePanelAccessView;
@property (retain, nonatomic) UIPanGestureRecognizer *panGes;
@property (retain, nonatomic) AWEHotSearchManager *currentTabManager;
@property (retain, nonatomic) AWEHotSearchManager *currentTabRecommendManager;
@property (retain, nonatomic) AWEHotSpotInnerContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)titleLabelDefaultHeight;
+ (double)recommendDefaultHeight;
+ (double)animationDuration;

- (void)duxGrid_viewDidChangeBreakPointFrom:(struct { long long x0; long long x1; })a0 toBreakPoint:(struct { long long x0; long long x1; })a1;
- (void)showView;
- (void)selfPanned:(id)a0;
- (void)configureUI;
- (void)selfTapped:(id)a0;
- (void)hideView;
- (void)changeCurrentTabToNationIfNeeded;
- (BOOL)changeToNationTabAndFetchDataWithCompletion:(id /* block */)a0;
- (void)updatePanelLayoutWithCurrentModel:(id)a0;
- (void)resetTrackedState;
- (void)refreshWithData:(id)a0 risingHotSpotList:(id)a1 paramsModel:(id)a2 otherParams:(id)a3;
- (BOOL)shouldShowHotWordsRecommend;
- (void)refreshRecommendWords:(id)a0 currentRecommendWord:(id)a1;
- (void)scrollToNewHotSpotModel:(id)a0 isScrolled:(BOOL)a1;
- (long long)currentWordTabIndex;
- (void)doSpecificUIConfig;
- (id)currentPanelScrollView;
- (void)hideMultiPanelIfNeeded;
- (double)padSplitViewSecondaryWidth;
- (id)panelScrollView;
- (void)panelPanned:(id)a0;
- (double)totalPanelViewHeight;
- (void)reloadData;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)viewDidLayoutSubviews;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (double)titleHeight;
- (void)viewDidLoad;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)closeButtonTapped;
- (double)containerHeight;

@end
