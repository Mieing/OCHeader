@class AWEPlayInteractionDislikeLeftView, NSString, AWEPlayInteractionDislikeElementViewModel;

@interface AWEPlayInteractionDislikeLeftElement : AWEPlayInteractionBaseActionButtonElement <AWEPlayInteractionBottomButtonPriorityProtocol>

@property (retain, nonatomic) AWEPlayInteractionDislikeLeftView *dislikeLeftView;
@property (retain, nonatomic) AWEPlayInteractionDislikeElementViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initializeElement;
- (void)viewController_willDisplay;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (BOOL)p_shouldShow;
- (BOOL)shouldActivateButtonWithData:(id)a0;
- (BOOL)shouldActiveWithModel:(id)a0;
- (BOOL)shouldShowLeftDislike;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;

@end
