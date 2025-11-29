@class UIButton, UILabel, NSString;
@protocol AWEAwemeFeedVideoButtonProtocol, AFDFeedVideoButtonProtocol, AWEPlayInteractionLikeElementViewModelProtocol, AWEFeedVideoButtonProtocol;

@interface AFDStoryPlayInteractionLikeElement : AWEPlayInteractionBaseElement <AFDStoryPlayInteractionElementProtocol>

@property (retain, nonatomic) UIButton<AWEFeedVideoButtonProtocol, AWEAwemeFeedVideoButtonProtocol, AFDFeedVideoButtonProtocol> *likeButton;
@property (retain, nonatomic) id<AWEPlayInteractionLikeElementViewModelProtocol> likeViewModel;
@property (retain, nonatomic) UILabel *flatStyleLabel;
@property (nonatomic) BOOL isAnimationPlaying;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (void)initializeElement;
- (id)aAWEPadModuleAdapter;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)onAwemeDiggNotification:(id)a0;
- (void)announceAccessibility:(id)a0;
- (void)updateAccesibilityLabel;
- (void)setupPadKeyBindings;
- (void)playDiggAnimation:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1;
- (void)updateLikeTotalCountWithNotification:(id)a0;
- (double)elementWidthWithAweme:(id)a0;
- (void)likeActionWithStatus:(unsigned long long)a0;
- (void)updateLikeCount;
- (void)onLikeTapped;
- (void)updateLayout;
- (void).cxx_destruct;
- (unsigned long long)elementType;
- (void)reset;
- (void)viewDidLoad;
- (void)dealloc;
- (id)context;
- (unsigned long long)elementPosition;
- (double)imageViewWidth;
- (void)playAnimation;

@end
