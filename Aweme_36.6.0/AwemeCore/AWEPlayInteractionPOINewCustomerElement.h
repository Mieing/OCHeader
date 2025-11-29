@class NSString, AWEPlayInteractionPOINewCustomerView;

@interface AWEPlayInteractionPOINewCustomerElement : AWEPlayInteractionBaseActionButtonElement <AWEPlayInteractionBottomButtonPriorityProtocol, AWEElementSelfFilterProtocol>

@property (retain, nonatomic) AWEPlayInteractionPOINewCustomerView *poiView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;

- (void)viewController_willDisplay;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (void)p_configData;
- (BOOL)shouldActivateButtonWithData:(id)a0;
- (BOOL)shouldShowPOINewCustomer;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;

@end
