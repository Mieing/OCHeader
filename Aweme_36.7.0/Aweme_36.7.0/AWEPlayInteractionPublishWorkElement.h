@class AWEButton, NSString;

@interface AWEPlayInteractionPublishWorkElement : AWEPlayInteractionBaseActionButtonElement <AWEPlayInteractionBottomButtonPriorityProtocol>

@property (retain, nonatomic) AWEButton *publishWorkButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initializeElement;
- (id)activateInfoWithData:(id)a0;
- (BOOL)shouldActivateButtonWithData:(id)a0;
- (void)didTapPublishWork:(id)a0;
- (BOOL)shouldShowPublishWorkElement;
- (void)showPublishWorkButtonIfNeeded;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
