@class NSString, AWEAwemeModel, UIView, AWEFeedDynamicCardContext, AWEAwemePageContext;
@protocol AWEFeedDynamicContainerProtocol, AWEFeedHotSpotPanelDelegate, AWEFeedDynamicCardManagerProtocol, AWEPlayInteractionViewControllerProtocol, AWESpecialCardMonitorProtocol;

@interface AWEDiscoverDFeedLynxPanelViewController : UIViewController <AWEBottomContainerViewLifeCycleDelegate, AWEFeedHotSpotPanelProtocol, AWESpecialCardLynxPanelProtocol>

@property (retain, nonatomic) UIView<AWEFeedDynamicContainerProtocol> *lynxContainer;
@property (retain, nonatomic) id<AWEFeedDynamicCardManagerProtocol> cardManager;
@property (retain, nonatomic) AWEFeedDynamicCardContext *cardContext;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL isAppearing;
@property (nonatomic) BOOL hasAppeard;
@property (nonatomic) BOOL lynxPageLoadFail;
@property (nonatomic) BOOL finishFirstRenderArticle;
@property (nonatomic) BOOL isViewAppearCalled;
@property (nonatomic) BOOL useNewLifeCycleMethod;
@property (retain, nonatomic) id<AWESpecialCardMonitorProtocol> specialCardInnerMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEFeedHotSpotPanelDelegate> panelDelegate;
@property (copy, nonatomic) NSString *referString;
@property (weak, nonatomic) AWEAwemePageContext *outerPageContext;
@property (weak, nonatomic) id<AWESpecialCardMonitorProtocol> specialCardMonitor;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) id<AWEPlayInteractionViewControllerProtocol> interactionDelegate;

+ (BOOL)shouldMonitorForArticleLynx:(id)a0;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (double)topGradientHeight;
- (void)onApplicationDidChangeStatusBarOrientation:(id)a0;
- (void)videoWillPlay;
- (void)videoWillStop;
- (void)videoWillPause;
- (void)videoWillReset;
- (void)videoWillLoopPlay;
- (void)onlySendPlayEvent;
- (id)currentLynxContainerView;
- (id)currentDynamicContainer;
- (void)updateWithModel:(id)a0 extraInfo:(id)a1;
- (void)containerViewDidFinishLoadWithURL:(id)a0;
- (void)containerViewDidLoadFailedWithURL:(id)a0 error:(id)a1;
- (void)registerSubscriber;
- (void)handleAppBecomeActive;
- (BOOL)disableSendEvent;
- (void)addElderParamsForSurveyIfNeed:(id)a0;
- (void)checkShouldUseNewLifeCycle;
- (BOOL)contentEmpty;
- (void)handleNotification:(id)a0;
- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)reset;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (id)topGradientColor;
- (void)updateWithModel:(id)a0;
- (void)handleAppWillResignActive;
- (void)willDisplay;

@end
