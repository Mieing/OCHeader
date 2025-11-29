@class NSTimer, NSString;
@protocol AWERichAwemeButtonElementViewControllerProtocol;

@interface AWEPlayInteractionRichAwemeButtonElement : AWEPlayInteractionBaseActionButtonElement <AWEPlayInteractionBottomButtonPriorityProtocol>

@property (retain, nonatomic) id<AWERichAwemeButtonElementViewControllerProtocol> buttonViewController;
@property (retain, nonatomic) NSTimer *appearTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewController_willDisplay;
- (void)viewController_didEndDisplaying;
- (void)viewController_viewDidAppear;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (BOOL)shouldActivateButtonWithData:(id)a0;
- (void)startAppearTimer;
- (void)stopAppearTimer;
- (BOOL)shouldShowSpeicalAwemeBottomButton;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)reset;

@end
