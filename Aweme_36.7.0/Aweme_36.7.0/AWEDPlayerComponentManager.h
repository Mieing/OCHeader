@class NSArray, NSMutableDictionary, NSString, UIViewController;
@protocol AWEAwemePlayVideoViewControllerProtocol;

@interface AWEDPlayerComponentManager : NSObject <AWEDPlayerComponentProtocol>

@property (weak, nonatomic) UIViewController<AWEAwemePlayVideoViewControllerProtocol> *playerController;
@property (copy, nonatomic) NSArray *handlers;
@property (retain, nonatomic) NSMutableDictionary *cacheDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)a0 playbackFailedWithError:(id)a1;
- (void)playerDidReadyForDisplay:(id)a0;
- (void)player:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (id)controllerByProtocol:(id)a0;
- (void)updatePlayerController:(id)a0 withPlayVideoVC:(id)a1;
- (void)updatePlayerIfNeeded;
- (void)prepareForDisplayWithoutCoverImage;
- (BOOL)pauseIfNotStop;
- (id)controllersByProtocol:(id)a0;
- (void)insertPlayerViewDidSuccess;
- (id)handlerClasses;
- (void)playerWillLoopPlaying:(id)a0;
- (void)setPlayerSeekTime:(double)a0 completion:(id /* block */)a1;
- (void)prepareForDisplay;
- (void)setModel:(id)a0;
- (void).cxx_destruct;
- (BOOL)pause;
- (void)setupHandlers;
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
