@class NSString, AWEPlayInteractionContext, AWECommonButtonInfoModel, UIViewController;
@protocol AWEPlayInteractionViewControllerProtocol;

@interface AWEPlayInteractionBottomButtonElementViewModel : NSObject <AWEPlayInteractionBottomButtonElementViewModelProtocol, AWEPlayInteractionBottomButtonViewDelegateProtocol>

@property (retain, nonatomic) AWECommonButtonInfoModel *infoModel;
@property (weak, nonatomic) AWEPlayInteractionContext *context;
@property (nonatomic) BOOL hasBtnClicked;
@property (nonatomic) BOOL hasShow;
@property (nonatomic) BOOL hasActivate;
@property (weak, nonatomic) UIViewController<AWEPlayInteractionViewControllerProtocol> *viewController;
@property (nonatomic) unsigned long long playerStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)videoPlayParamsForModel:(id)a0;

- (void)videoDidActivity;
- (void)didShowViewByTriggerDelay:(BOOL)a0;
- (void)viewController_combinedDidEndDisplaying;
- (void)viewController_willDisplay;
- (void)viewController_didDisplay;
- (void)viewController_didEndDisplaying;
- (void)viewController_didEndDisplayingBeforeReset;
- (void)viewController_viewWillAppear;
- (void)viewController_viewDidAppear;
- (void)viewController_viewWillDisappear;
- (void)viewController_viewDidDisappear;
- (void)elementDidActivated;
- (void)elementDidLayoutElementView;
- (id)commonParams;
- (void)didClickViewAtPosition:(long long)a0 isDislike:(BOOL)a1;
- (void)trackShowEvent;
- (id)activateInfoWithData:(id)a0;
- (void)updateWithContext:(id)a0 btnContext:(id)a1;
- (void)resetWhenDidEndDisplaying;
- (void)trackClickEventWithClickPosition:(long long)a0 isDislike:(BOOL)a1;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)reset;
- (id)buttonView;

@end
