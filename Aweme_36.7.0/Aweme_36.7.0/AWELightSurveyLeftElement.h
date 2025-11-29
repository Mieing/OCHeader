@class NSString, UIView;

@interface AWELightSurveyLeftElement : AWEPlayInteractionBaseActionButtonElement <AWEPlayInteractionBottomButtonPriorityProtocol>

@property (retain, nonatomic) UIView *dislikeButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initializeElement;
- (void)viewController_willDisplay;
- (void)setAppear:(BOOL)a0;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (BOOL)shouldActivateButtonWithData:(id)a0;
- (BOOL)priorityAvoidNeedHidden;
- (BOOL)shouldShowLeftLightV2Survey:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;

@end
