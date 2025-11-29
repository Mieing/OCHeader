@class NSString, NSDictionary, AWEAwemeModel, UIView, UIViewController;
@protocol AWEAwemePlayInteractionPlayDelegate, IESVideoPlayerProtocol, AWEAwemePlayInteractionUpdateDelegate, AWEAwemeBizPlayVideoProtocol, AWEAwemePlayInteractionCommerceDelegate, AWEAwemePlayInteractionPanelDelegate, AWEPlayInteractionViewControllerNewProtocol, AWEPlayVideoViewControllerProtocol, AWEAwemePlayVideoViewControllerProtocol, AWEPlayInteractionBizControllerProtocol, AFDPureModePageInteractionProtocol;

@interface AWEDPlayerBaseComponent : NSObject <AWEDPlayerComponentProtocol>

@property (retain, nonatomic) id<IESVideoPlayerProtocol> playerController;
@property (retain, nonatomic) UIViewController *parentViewController;
@property (weak, nonatomic) UIViewController<AWEAwemePlayVideoViewControllerProtocol, AWEAwemeBizPlayVideoProtocol, AWEPlayVideoViewControllerProtocol> *playerViewController;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) UIView *view;
@property (weak, nonatomic) id<AWEAwemePlayInteractionPlayDelegate, AWEAwemePlayInteractionPanelDelegate, AWEAwemePlayInteractionCommerceDelegate, AWEAwemePlayInteractionUpdateDelegate, AWEPlayInteractionBizControllerProtocol> interactionDelegate;
@property (weak, nonatomic) id<AWEPlayInteractionViewControllerNewProtocol> interactionNewDelegate;
@property (weak, nonatomic) id<AFDPureModePageInteractionProtocol> pureModePageInteractionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)a0 playbackFailedWithError:(id)a1;
- (void)playerDidReadyForDisplay:(id)a0;
- (void)player:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (void)updatePlayerController:(id)a0 withPlayVideoVC:(id)a1;
- (void)updatePlayerIfNeeded;
- (void)prepareForDisplayWithoutCoverImage;
- (BOOL)pauseIfNotStop;
- (void)insertPlayerViewDidSuccess;
- (void)playerWillLoopPlaying:(id)a0;
- (void)setPlayerSeekTime:(double)a0 completion:(id /* block */)a1;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (BOOL)pause;
- (id)init;
- (BOOL)stop;
- (void)viewWillAppear:(BOOL)a0;
- (void)reset;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)play:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (id)initWithPlayerController:(id)a0;
- (BOOL)pauseIfPlaying;
- (void)willDisplay;

@end
