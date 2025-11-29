@class NSString, AWEAwemeKeSongView;

@interface AWEPlayInteractionKeSongElement : AWEPlayInteractionLeftElement <AWEAwemeKeSongViewDelegate, AWEElementSelfFilterProtocol>

@property (retain, nonatomic) AWEAwemeKeSongView *keSongView;
@property (retain, nonatomic) NSString *keSongLabelText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;
+ (BOOL)shouldShowKeSongInfoWithModel:(id)a0 context:(id)a1;

- (void)initializeElement;
- (void)viewController_viewDidAppear;
- (void)playMusicAnimations;
- (void)stopMusicAnimations;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (void)pauseMusicAnimations;
- (void)resumeMusicAnimations;
- (id)currentInfoForSubUnits;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })realFrame;
- (void)handleKeSongButtonClicked;
- (void)handleContainerViewClick;
- (BOOL)bizDowngradeAnimations;
- (void)trackKeSongViewShow;
- (BOOL)canPlayAnimation;
- (id)handleTrackInfo;
- (void)playMusicAnimationsAfterFeedReadyDelay;
- (void)doPlayMusicAnimations;
- (void)performPause;
- (void)transferToShootPositionPage;
- (void)trackKeSongViewClick;
- (void).cxx_destruct;
- (void)pause;
- (void)reset;
- (void)resume;
- (void)viewDidLoad;

@end
