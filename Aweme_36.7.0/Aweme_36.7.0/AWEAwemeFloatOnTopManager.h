@class UINavigationController, NSString, CADisplayLink, UIViewController;
@protocol IESVideoPlayerProtocol;

@interface AWEAwemeFloatOnTopManager : AWEMediaFloatOnTopManager <IESVideoPlayerDelegate>

@property (nonatomic) BOOL ownPlayer;
@property (retain, nonatomic) id<IESVideoPlayerProtocol> player;
@property (nonatomic) double playbackTime;
@property (nonatomic) BOOL seekOnce;
@property (weak, nonatomic) UINavigationController *nav;
@property (weak, nonatomic) UIViewController *top;
@property (weak, nonatomic) UIViewController *onViewController;
@property (weak, nonatomic) UIViewController *fromViewController;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) BOOL isActive;
@property (copy, nonatomic) NSString *currentPlayingAwemeID;
@property (copy, nonatomic) NSString *tapToAwemeID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)playAweme:(id)a0 fromPlaybackTime:(double)a1 initialFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 onViewController:(id)a3 fromViewController:(id)a4 withPlayer:(BOOL)a5;
+ (id)playAweme:(id)a0 fromPlaybackTime:(double)a1 onViewController:(id)a2 fromViewController:(id)a3 withPlayer:(BOOL)a4;
+ (id)playAweme:(id)a0 onViewController:(id)a1 fromViewController:(id)a2 withPlayer:(BOOL)a3;
+ (BOOL)goods_showAwemeFloatOnTopView;
+ (id)playerForAweme:(id)a0;

- (void)player:(id)a0 playbackFailedWithError:(id)a1;
- (void)playerDidReadyForDisplay:(id)a0;
- (void)player:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (void)handleWillResignActive;
- (void)dismissWithParams:(id)a0;
- (void)seekToPresetTime;
- (void)linkPlayer:(id)a0;
- (void)handleDisplayLink:(id)a0;
- (BOOL)onScreen;
- (void).cxx_destruct;
- (void)play;
- (id)init;
- (void)pause:(id)a0;
- (void)dealloc;
- (void)handleDidBecomeActive;
- (void)handleTap;

@end
