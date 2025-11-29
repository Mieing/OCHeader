@class UIView, NSString, BDImageView;

@interface AWEPlayInteractionSearchAIGCElement : AWEPlayInteractionRightElement <AWEElementSelfFilterProtocol>

@property (retain, nonatomic) BDImageView *searchAIGCImageView;
@property (retain, nonatomic) UIView *backView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;

- (void)initializeElement;
- (void)viewController_willDisplay;
- (void)viewController_didEndDisplaying;
- (void)viewController_viewWillAppear;
- (void)viewController_viewDidDisappear;
- (void)videoPlayerWillTrackPlayTime;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)searchAIGCButtonClick;
- (void)searchAIGCEntranceShowEvent;
- (void)searchAIGCEntranceClickEvent;
- (BOOL)useVoiceInput;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;

@end
