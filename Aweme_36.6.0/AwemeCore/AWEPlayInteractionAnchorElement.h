@class NSString, NSMutableSet;

@interface AWEPlayInteractionAnchorElement : AWEPlayInteractionLeftElement <AWEElementSelfFilterProtocol, AWEElementStrategiesProtocol, AWEPlayInteractionAnchorElementProtocol>

@property (retain, nonatomic) NSMutableSet *prefetchedImages;
@property (copy, nonatomic) id /* block */ commerceTimerCallBack;
@property (nonatomic) BOOL isCellDisplaying;
@property (nonatomic) BOOL poiDidCheckShouldShow;
@property (nonatomic) BOOL isPageShowing;
@property (nonatomic) BOOL enableRevertAnchorResultCache;
@property (nonatomic) BOOL shouldRevertAnchorElementResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;
+ (id)subTypeWithContext:(id)a0 strategies:(id)a1;
+ (void)removeByElementStrategies:(id)a0 context:(id)a1;
+ (void)reportCommonAnchorMissWithContext:(id)a0;
+ (BOOL)enableUnusedLogicRemove;
+ (BOOL)enableAnchorFixReset;

- (void)initializeElement;
- (void)viewController_willDisplay;
- (void)viewController_didEndDisplaying;
- (void)viewController_didEndDisplayingBeforeReset;
- (void)viewController_viewWillAppear;
- (void)viewController_viewDidAppear;
- (void)viewController_viewDidDisappear;
- (void)setAppear:(BOOL)a0;
- (void)videoPlayerWillTrackPlayTime;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (id)currentInfoForSubUnits;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })realFrame;
- (void)updateAnchorView;
- (void)setAnchorHidden:(BOOL)a0;
- (BOOL)isAnchorHidden;
- (void)updateAnchorWithPlayBackTime:(double)a0;
- (BOOL)shouldRevertAnchorElement;
- (void)setAnchorHidden:(BOOL)a0 animation:(BOOL)a1;
- (void)checkAnchorTypeDiffWithOrigin:(id)a0;
- (void)addDelayedDisplayHandler;
- (void)leftInteractionShowEventReport;
- (BOOL)shouldShowAnchorAtOnceWhenVideoShow;
- (void)updateTemplateAnchorView;
- (void)commitAnchorShowStatsParams;
- (void)checkAnchorTypeDiffWithDisplay:(id)a0 anchorConfig:(id)a1;
- (void)removeDelayedDisplayHandler;
- (void)updateAnchorViewLayout;
- (void)leftInteractionEventReport:(unsigned long long)a0;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)play;
- (void)reset;
- (void)viewDidLoad;
- (id)currentInfo;
- (void)onApplicationDidEnterBackground:(id)a0;

@end
