@class NSString, AWEFeedSubtitleContainerView;

@interface AWEPlayInteractionSubtitleElement : AWEPlayInteractionLeftElement <AWEElementSelfFilterProtocol, AWEFeedSubtitleMessage>

@property (retain, nonatomic) AWEFeedSubtitleContainerView *subtitleContainer;
@property (nonatomic) double maxWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;

- (void)initializeElement;
- (void)onPlayer:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (void)onPlayer:(id)a0 onSubtitleInfoCallBack:(id)a1;
- (void)playInteractionWillEnterLandscape;
- (void)playInteractionDidExitLandscape;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)changeSubtitleSwitchStatus:(BOOL)a0;
- (BOOL)shouldShowSubtitleView;
- (id)playerViewController;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;
- (void)dealloc;

@end
