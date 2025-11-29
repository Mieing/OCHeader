@class AWEAwemeModel, UIView, NSArray, AWEPlayInteractionContext, DUXNavigationBar, NSString, NSMutableArray, AWEPadSplitPageContext;
@protocol HunterContainerProtocol, AWEPadSplitViewBizAdapter, AWEFeedAnchorTemplateDetailPageViewControllerDelegate, AWEPadSplitViewService;

@interface AWEFeedAnchorTemplateDetailPageViewController : UIViewController <HunterContainerLifeCycleProtocol, AWEPadSplitViewSecondaryController>

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) DUXNavigationBar *duxNavigationBar;
@property (retain, nonatomic) NSMutableArray *subscriberArray;
@property (nonatomic) BOOL isContentOffsetZero;
@property (retain, nonatomic) UIView<HunterContainerProtocol> *containerView;
@property (retain, nonatomic) AWEPlayInteractionContext *interactionContext;
@property (nonatomic) BOOL isViewFirstAppeared;
@property (nonatomic) BOOL isSheetWillDismiss;
@property (retain, nonatomic) NSArray *lynxScrollViews;
@property (nonatomic) BOOL isDefaultFullScreen;
@property (weak, nonatomic) id<AWEFeedAnchorTemplateDetailPageViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isPadSplitting;
@property (readonly, copy, nonatomic) NSString *splitViewScene;
@property (weak, nonatomic) AWEPadSplitPageContext *splitViewContext;
@property (weak, nonatomic) id<AWEPadSplitViewService> splitService;
@property (retain, nonatomic) id<AWEPadSplitViewBizAdapter> splitViewAdapter;

- (void)containerDidPageUpdate:(id)a0;
- (id)dux_sheetShouldRecognizeAsynchronousWithGestures;
- (void)partialSheet:(id)a0 didChangeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withUserInteraction:(BOOL)a2;
- (void)partialSheetWillDismiss:(id)a0;
- (id)dux_sheetShouldRecognizeAsynchronousScrollViewArray;
- (void)setupBinding;
- (id)initWithAwemeModel:(id)a0 context:(id)a1;
- (void)setupPanelUI;
- (void)sendViewDisappearEventToLynx;
- (void)sendViewAppearedEventToLynx;
- (void)setupFullScreenUI;
- (void)loadContainerView;
- (id)fetchLynxScrollViews;
- (void)onReturnButtonClick;
- (id)createLynxContainerView;
- (void).cxx_destruct;
- (id)registerEvent:(id)a0 callback:(id /* block */)a1;
- (id)scrollView;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setupUI;

@end
