@class NSString, AWEPageContext, UIView, AWEPlayInteractionBottomButtonElementViewModel;
@protocol AWEPlayInteractionBottomButtonContextProtocol, AWEPlayInteractionBottomButtonViewProtocol;

@interface AWEPlayInteractionBottomButtonElement : AWEPlayInteractionBaseActionButtonElement <AWEPlayInteractionBottomButtonCoordinatorDelegate, AWEPlayInteractionBottomButtonPriorityProtocol, AWEElementSelfFilterProtocol, AWEElementStrategiesProtocol, AWEPlayInteractionComponentGlobalPriorityComponentProtocol, AWEPlayInteractionBottomButtonElementProtocol>

@property (retain, nonatomic) AWEPageContext<AWEPlayInteractionBottomButtonContextProtocol> *btnContext;
@property (retain, nonatomic) AWEPlayInteractionBottomButtonElementViewModel *viewModel;
@property (retain, nonatomic) UIView<AWEPlayInteractionBottomButtonViewProtocol> *btnView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;
+ (id)subTypeWithContext:(id)a0 strategies:(id)a1;
+ (id)videoPlayParamsForModel:(id)a0;

- (void)videoDidActivity;
- (void)initializeElement;
- (void)viewController_willDisplay;
- (void)viewController_didDisplay;
- (void)viewController_didEndDisplaying;
- (void)viewController_didEndDisplayingBeforeReset;
- (void)viewController_viewWillAppear;
- (void)viewController_viewDidAppear;
- (void)viewController_viewWillDisappear;
- (void)viewController_viewDidDisappear;
- (void)setAppear:(BOOL)a0;
- (BOOL)isBottomButtonElementAppear;
- (double)bottomButtonElementWidth;
- (void)videoPlayerWillTrackPlayTime;
- (void)handleElementWhenPriorityAvoid:(id)a0;
- (void)viewDidChangeBreakPoint;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)prepareForActivate;
- (void)showWithAnimation:(BOOL)a0;
- (BOOL)shouldActivateButtonWithData:(id)a0;
- (void)handleAvoidWithComponentID:(id)a0 componentType:(id)a1;
- (id)searchButtonList;
- (void)showBottomButtonElementWithAnimation:(BOOL)a0;
- (void)hideBottomButtonElement;
- (void)trackButtonAppear;
- (void)resetButtonAppearInfo;
- (BOOL)isCurrentBtnBelongToOGC;
- (BOOL)isCurrentBtnBelongToPlatform;
- (long long)breakPointColumnNum;
- (id)buttonCategoryMap;
- (id)OGCButtonList;
- (BOOL)isCurrentBtnBelongToSearch;
- (void)hideButtonView;
- (void)prepareForDisplay;
- (void)updateLayout;
- (void)setModel:(id)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)reset;
- (void)viewDidLoad;
- (id)identifier;

@end
