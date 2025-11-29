@class AWEPlayInteractionEcomButtonView, NSString, AWEECommerceEcomButtonModel, AWEAwemeModel;

@interface AWEPlayInteractionEcomButtonElement : AWEPlayInteractionBaseActionButtonElement <AWEPlayInteractionBottomButtonPriorityProtocol> {
    AWEAwemeModel *_model;
    AWEECommerceEcomButtonModel *_ecomButtonModel;
}

@property (retain, nonatomic) AWEPlayInteractionEcomButtonView *ecomButtonView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initializeElement;
- (void)viewController_willDisplay;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (BOOL)shouldActivateButtonWithData:(id)a0;
- (void)updateEcomButton;
- (void)ecomButtonTapped;
- (BOOL)shouldShowEcomButton;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
