@class CAGradientLayer, NSString, NSDictionary, AWEEcomSearchTopSectionGoodsView, UIView, UIPanGestureRecognizer, UIViewController;
@protocol AWEEcomImageSearchViewControllerProtocol, AWESearchInlayScrollPanelScreenShotViewProtocol;

@interface AWESearchPhotoSearchSevenSplitViewController : UIViewController <UIGestureRecognizerDelegate, AWEEcomScreenShotPanelActionDelegate>

@property (copy, nonatomic) NSDictionary *extra;
@property (retain, nonatomic) UIViewController<AWEEcomImageSearchViewControllerProtocol> *resultVC;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *effectView;
@property (retain, nonatomic) UIView *indicatorBar;
@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) AWEEcomSearchTopSectionGoodsView *goodsView;
@property (retain, nonatomic) UIView<AWESearchInlayScrollPanelScreenShotViewProtocol> *screenShotPanelView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) struct CGPoint { double x; double y; } startPoint;
@property (retain, nonatomic) UIPanGestureRecognizer *pan;
@property (nonatomic) double toppest;
@property (nonatomic) double floatScreen;
@property (nonatomic, getter=isFirstAppear) BOOL firstAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addPanGR;
- (void)hostInjectionViewWillDisappear;
- (void)hostInjectionDidOpenPage;
- (void)panGestureRecognizerAction;
- (void)hostInjectionWillClosePage;
- (void)hostInjectionWillOpenNextPage;
- (void)resetStatusBarStyle;
- (void)hostInjectionPageWillAppearAgain;
- (void)ecomScreenShotPanelButtonClickWithCompletion:(id /* block */)a0;
- (void)showGoodsViewWithModel:(id)a0;
- (BOOL)showScreenShotPanel;
- (id)shotFilePath;
- (void)removeGoodsScanViewInViewControllerStack;
- (void)postDidClosedNotification;
- (void)p_setScreenShotPanelViewOriginUI;
- (void)updateShareImageWithFilePath:(id)a0;
- (id)initWithPhotoSearchResultVC:(id)a0 floatScreen:(double)a1 extra:(id)a2;
- (void)closePageWithType:(id)a0;
- (void)updateUIStyle;
- (BOOL)canSwipeUp;
- (void)goodsViewAnimateWithOffsetY:(double)a0 progress:(double)a1;
- (void)tapGestureAction;
- (void)reportPageCloseWithType:(id)a0;
- (double)sevenPageContainerY;
- (BOOL)canSwipeDownClose;
- (void)animateWithOffsetY:(double)a0;
- (void)changeStatusBarStyle;
- (BOOL)needSendCloseMessage;
- (BOOL)isPanInNotRespondAreaWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)updateSearchViewUI;
- (void).cxx_destruct;
- (void)panGestureRecognizerAction:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupUI;

@end
