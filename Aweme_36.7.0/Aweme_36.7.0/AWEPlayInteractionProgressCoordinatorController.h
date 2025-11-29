@class AWEPlayInteractionVideoLoadingController, NSString, AWEPlayInteractionNewBaseController;
@protocol AWEPlayInteractionPaginatedProgressControllerProtocol, AFDRichContentProgressControllerDelegate, AWEPlayInteractionProgressCommonProtocol;

@interface AWEPlayInteractionProgressCoordinatorController : AWEPlayInteractionBaseController <AWEPlayInteractionProgressCoordinatorControllerProtocol>

@property (nonatomic) BOOL isProgressControllerTriggerViewDidLoad;
@property (nonatomic) BOOL isProgressControllerTriggerViewWillAppear;
@property (retain, nonatomic) AWEPlayInteractionNewBaseController<AWEPlayInteractionProgressCommonProtocol> *interactionProgressController;
@property (retain, nonatomic) AWEPlayInteractionNewBaseController<AWEPlayInteractionPaginatedProgressControllerProtocol, AWEPlayInteractionProgressCommonProtocol, AFDRichContentProgressControllerDelegate> *paginatedProgressController;
@property (retain, nonatomic) AWEPlayInteractionVideoLoadingController *loadingController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHide:(BOOL)a0;
- (void)onPlayer:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (long long)progressBarType;
- (void)updateAllSubViews;
- (void)onPlayerDidReadyForDisplay:(id)a0;
- (void)removeControllerFromSuperView;
- (void)viewDidChangeBreakPoint;
- (void)splitStatusChanged;
- (BOOL)enableMemoryOptimizeWithNunki;
- (void)didReceiveMemeoryDangerLevelTopNotification;
- (void)_addNotifications;
- (id)currentInfoForSubUnits;
- (void)configControllers;
- (void)viewDidAppear;
- (void)prepareForDisplay;
- (id)controllers;
- (void).cxx_destruct;
- (void)pause;
- (void)didReceiveMemoryWarning;
- (void)setData:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear;
- (void)reset;
- (void)resume;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)didEndDisplaying;
- (void)viewDidDisappear;
- (void)hideAllViews;
- (void)willDisplay;
- (void)viewWillDisappear;

@end
