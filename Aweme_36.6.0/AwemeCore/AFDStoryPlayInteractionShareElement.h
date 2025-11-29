@class UIButton, NSString;
@protocol AWEAwemeFeedVideoButtonProtocol, AFDFeedVideoButtonProtocol, AWEPlayInteractionShareElementViewModelProtocol, AWEFeedVideoButtonProtocol;

@interface AFDStoryPlayInteractionShareElement : AWEPlayInteractionBaseElement <AFDStoryPlayInteractionElementProtocol>

@property (retain, nonatomic) UIButton<AWEFeedVideoButtonProtocol, AWEAwemeFeedVideoButtonProtocol, AFDFeedVideoButtonProtocol> *shareButton;
@property (retain, nonatomic) id<AWEPlayInteractionShareElementViewModelProtocol> viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (void)initializeElement;
- (id)aAWEPadModuleAdapter;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)setupPadKeybindings;
- (double)elementWidthWithAweme:(id)a0;
- (void)onShareTapped;
- (void)updateLayout;
- (void).cxx_destruct;
- (unsigned long long)elementType;
- (void)viewDidLoad;
- (id)context;
- (unsigned long long)elementPosition;
- (void)playAnimation;

@end
