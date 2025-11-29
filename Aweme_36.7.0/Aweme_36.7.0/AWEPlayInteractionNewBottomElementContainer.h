@class AWEBaseElement, AWEPlayInteractionContext, AWEAwemeModel, NSPointerArray, NSString, UIViewController;
@protocol AWEPlayInteractionContainerTempAnimationProtocol, AWEPlayInteractionContainerFilterProtocol;

@interface AWEPlayInteractionNewBottomElementContainer : AWEPlayInteractionElementContainer <AWEPlayInteractionControllerDispatchProtocol, AWEPlayInteractionUIInfoProtocol, AWEPlayInteractionNewBottomElementContainerProtocol>

@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) AWEPlayInteractionContext *context;
@property (retain, nonatomic) id<AWEPlayInteractionContainerFilterProtocol> filterHandler;
@property (retain, nonatomic) id<AWEPlayInteractionContainerTempAnimationProtocol> tempAnimationManager;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) NSPointerArray *activateElements;
@property (readonly, weak, nonatomic) AWEBaseElement *currentShownElement;
@property (nonatomic) unsigned long long playerStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWETemplateHotspotViewProviderAdapterClass;

- (void)setHide:(BOOL)a0;
- (void)videoDidActivity;
- (void)didDisplay;
- (void)videoPlayerWillTrackPlayTime;
- (void)didEndDisplayingBeforeReset;
- (void)viewDidChangeBreakPoint;
- (id)currentInfoForSubUnits;
- (id)currentInfoForUnitWithIdentifier:(id)a0;
- (id)currentInfoForUnitWithClassName:(id)a0;
- (void)addElementToArray:(id)a0;
- (void)renderAppearElement:(id)a0;
- (id)mElementArray;
- (void)addElementByClassName:(id)a0 withParamDict:(id)a1;
- (void)bizDowngradeWithData:(id)a0 andElement:(id)a1;
- (void)showTempElement:(id)a0 shouldHideOtherTempElement:(BOOL)a1 animateBlock:(id /* block */)a2;
- (void)resetElements;
- (void)hideTempElement:(id)a0 animateBlock:(id /* block */)a1;
- (id)initWithViewController:(id)a0 context:(id)a1 filterHandler:(id)a2 tempElementAnimationManager:(id)a3;
- (void)showTempElement:(id)a0 animateBlock:(id /* block */)a1;
- (void)hideTempElement:(id)a0 withDelay:(long long)a1 animateBlock:(id /* block */)a2;
- (void)bizDowngradeWithElement:(id)a0 andBlock:(id /* block */)a1;
- (void)bizDowngradeWillDisplayWithElement:(id)a0;
- (void)bizDowngradePrepareForDisplayWithElement:(id)a0;
- (void)bizDowngradeViewDidAppearWithElement:(id)a0;
- (void)bizDowngradeResetWithElement:(id)a0;
- (void)updateTopAppearElementAndHideOthers:(id)a0;
- (void)hideTempElement:(id)a0;
- (id)aAWETemplateHotspotViewProviderAdapter;
- (id)lifeCycleActiveElements;
- (void)initializeElement:(id)a0 withParamDic:(id)a1;
- (void)addElement:(id)a0 withParams:(id)a1;
- (void)viewDidAppear;
- (void)prepareForDisplay;
- (void)addElement:(id)a0;
- (void).cxx_destruct;
- (void)pause;
- (void)setData:(id)a0;
- (void)viewWillAppear;
- (void)reset;
- (void)resetCache;
- (void)resume;
- (void)viewDidLoad;
- (void)didEndDisplaying;
- (void)viewDidDisappear;
- (void)willDisplay;
- (void)viewWillDisappear;

@end
