@class AWETemplatePlayletView, AWEPlayInteractionPlayletElementViewModel, NSString;
@protocol AWEShowCommunicationRTSControllerProtocol, AWEShowShrinkTransitionWrapperProtocol;

@interface AWETemplatePlayletViewModel : AWETemplateBaseViewModel <AWEPlayInteractionPlayletElementViewModelDelegate>

@property (weak, nonatomic) AWETemplatePlayletView *barView;
@property (retain, nonatomic) AWEPlayInteractionPlayletElementViewModel *countDownViewModel;
@property (weak, nonatomic) id<AWEShowCommunicationRTSControllerProtocol> rtsController;
@property (retain, nonatomic) id<AWEShowShrinkTransitionWrapperProtocol> shrinkTransitionWrapper;
@property (nonatomic) BOOL readyToSendShowEvent;
@property (nonatomic) BOOL countDownEventSended;
@property (nonatomic) BOOL jumpToNextPlaylet;
@property (nonatomic) BOOL willGoToPlayletInnerFeed;
@property (nonatomic) BOOL willReloadForSkipInsertAD;
@property (copy, nonatomic) NSString *externalEnterMethod;

+ (BOOL)shouldActiveWithData:(id)a0 scene:(unsigned long long)a1 context:(id)a2;
+ (BOOL)shouldActiveWithData:(id)a0 context:(id)a1 scene:(unsigned long long)a2 extraInfo:(id)a3;

- (void)viewController_didEndDisplayingBeforeReset;
- (void)viewController_viewDidAppear;
- (void)viewController_viewDidDisappear;
- (void)sendEvent:(id)a0 params:(id)a1;
- (id)commonParams;
- (BOOL)shouldDisableTransferToNextWithModel:(id)a0;
- (void)viewDidTriggerAction:(unsigned long long)a0 withData:(id)a1;
- (id)cellViewController;
- (void)trackForTemplateViewShow;
- (void)trackForTemplateViewClick;
- (void)viewController_viewWillDisplay;
- (void)viewController_viewDidDisplay;
- (void)didInitialized;
- (void)viewTransfer;
- (id)showTrackerRegisterParams;
- (void)trackShowPlayletEntrance;
- (id)bottomBarTrackParams;
- (void)trackAdWithModel:(id)a0;
- (BOOL)skipInsertADToPlayletInnerFeed;
- (void)transferToNextForInsertAD:(BOOL)a0 from:(id)a1 otherParameters:(id)a2;
- (id)playletFeedInsertADParameters;
- (void)trackForCountDownShow;
- (BOOL)notEnableRtsAutoPlayAB;
- (id)schemeForClick:(id)a0 forceHidePanel:(BOOL)a1 originParams:(id)a2;
- (id)schemaParamsForClick:(id)a0 forceHidePanel:(BOOL)a1 originParams:(id)a2;
- (id)getBtnTextFromConfig;
- (BOOL)highlightSkipInsertADButton;
- (void)trackForNextButtonClick;
- (void)trackPlayletTemplateViewClick;
- (void)viewTransferWithAdvertiseisNextBtnClick:(BOOL)a0;
- (void)enterPlayletWithModel:(id)a0;
- (void)fastEnterPlayletWithModel:(id)a0 needTransition:(BOOL)a1 customParams:(id)a2;
- (id)buildPlayletSchemaWithParams:(id)a0;
- (void)schemaEnterPlayletWithSchema:(id)a0;
- (BOOL)needBlockSelectEpisodePanelForEnterMethod:(id)a0;
- (void)updateBarView:(id)a0;
- (void).cxx_destruct;
- (void)reset;

@end
