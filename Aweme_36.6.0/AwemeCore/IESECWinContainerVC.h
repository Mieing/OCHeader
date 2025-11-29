@class IESECWinFeedVC, NSString, IESECWinFloatVC, IESECWinContext, IESECWinNavBarVC, IESECWinDataController, IESECWinContainerStatusVC, FBKVOController, UIViewController, IESECServiceProxy;
@protocol IESECWinDataService, IESECWinPadSplitService, IESECWinPageCardService, IESECWinComponentService, IESECWinOpportunityService, IESECWinLiveService, UIGestureRecognizerDelegate, IESECWinSplitService, IESECWinCommonTrackService;

@interface IESECWinContainerVC : UIViewController <UIGestureRecognizerDelegate, IESECPadSplitContainer> {
    IESECWinContext *_context;
}

@property (retain, nonatomic) IESECWinFeedVC *feedVC;
@property (retain, nonatomic) IESECWinNavBarVC *navVC;
@property (retain, nonatomic) FBKVOController *kvoCtrl;
@property (retain, nonatomic) IESECWinFloatVC *floatVC;
@property (retain, nonatomic) UIViewController *backVC;
@property (retain, nonatomic) UIViewController *liveVC;
@property (retain, nonatomic) IESECWinContainerStatusVC *statusVC;
@property (retain, nonatomic) IESECWinDataController *dataController;
@property (retain, nonatomic) IESECServiceProxy<IESECWinDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinLiveService> *liveService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinSplitService> *splitService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinPageCardService> *pageCardService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinComponentService> *componentService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinOpportunityService> *opportunityService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinCommonTrackService> *commonTrackService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinPadSplitService> *padSplitService;
@property (weak, nonatomic) id<UIGestureRecognizerDelegate> systemInteractivePopGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isViewAppeared;
- (long long)padSplitMode;
- (BOOL)isFullMode;
- (void)close:(id)a0 animate:(BOOL)a1 completion:(id /* block */)a2;
- (void)configBcmPageParams;
- (BOOL)ttHideNavigationBar;
- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (long long)preferredStatusBarStyle;
- (void)didMoveToParentViewController:(id)a0;
- (void)_addObserver;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithParams:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupUI;

@end
