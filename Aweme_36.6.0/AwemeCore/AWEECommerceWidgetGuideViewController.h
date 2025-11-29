@class AWEPanelTransitionController, NSString, AWEEComWidgetGuidePanelPage, AWEEComWidgetGuideViewModel;

@interface AWEECommerceWidgetGuideViewController : UIViewController <AWEEComWidgetGuidePanelPageDelegate, AWEPanelTransitionWithBackground, UIGestureRecognizerDelegate>

@property (retain, nonatomic) AWEEComWidgetGuideViewModel *viewModel;
@property (retain, nonatomic) AWEEComWidgetGuidePanelPage *panelView;
@property (retain, nonatomic) AWEPanelTransitionController *transitionController;
@property (nonatomic) BOOL needMask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)panelHeight;
- (BOOL)wantsDimmingTransitionBackground;
- (void)fetchDataWithCompletion:(id /* block */)a0;
- (void)trackGuideShowWithParams:(id)a0;
- (void)trackUGGuideShowWithParams;
- (void)backgroundClick;
- (void)trackWidgetClickWithTarget:(id)a0 params:(id)a1;
- (void)trackUGGuideClickWithClickTarget:(id)a0;
- (void)closeBtnCallback;
- (void)retryBtnCallback;
- (void)notAddBtnCallback;
- (void)goHomeBtnCallback;
- (void)nextStepBtnCallback;
- (id)nodeListModel;
- (void).cxx_destruct;
- (id)init;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setupView;
- (void)addAction;
- (struct CGSize { double x0; double x1; })boundsSize;

@end
