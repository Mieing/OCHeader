@class UIButton, NSString, AWEVideoInteractInfo;

@interface AWEEntertainmentActivityElement : AWEPlayInteractionBaseActionButtonElement <AWEPlayInteractionBottomButtonPriorityProtocol>

@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) AWEVideoInteractInfo *currentInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initializeElement;
- (void)viewController_viewWillAppear;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)setupObserver;
- (BOOL)shouldActivateButtonWithData:(id)a0;
- (void)logForAction:(id)a0;
- (void)updateTextIfNeeded;
- (id)buttonForState:(long long)a0 withList:(id)a1;
- (void)updateStateIfNeeded;
- (BOOL)shouldShowEntertainmentElement;
- (void)showSchemaIfNeeded;
- (id)logParam;
- (BOOL)shouldActiveWithModel:(id)a0 context:(id)a1;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)viewDidLoad;
- (void)didTapButton;

@end
