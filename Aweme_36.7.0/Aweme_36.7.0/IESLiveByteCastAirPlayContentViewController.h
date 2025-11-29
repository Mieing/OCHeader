@class IESLiveDI, NSString, HTSLiveStreamPlayer, UIView;
@protocol IESLiveRoomService, HTSLiveStreamPlayerProvider, IESLiveByteCastAirPlayContentViewControllerDelegate;

@interface IESLiveByteCastAirPlayContentViewController : BDSCAirPlayContentViewController <HTSLiveStreamPlayerDelegate>

@property (weak, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) IESLiveDI *innerDI;
@property (nonatomic) BOOL useOwnedPlayer;
@property (retain, nonatomic) HTSLiveStreamPlayer *ownedPlayer;
@property (readonly, nonatomic) BOOL isAttached;
@property (nonatomic) long long viewDidAppearCount;
@property (nonatomic) BOOL didAutoPaused;
@property (readonly, nonatomic) id<HTSLiveStreamPlayerProvider> playerProvider;
@property (readonly, nonatomic) UIView *playerContainerView;
@property (readonly, nonatomic) UIView *danmakuContainerView;
@property (weak, nonatomic) id<IESLiveByteCastAirPlayContentViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)a0 playbackStateDidChange:(unsigned long long)a1;
- (id)streamPlayerGetCurrentRoomModel;
- (void)streamPlayerDidReadyToRender:(id)a0;
- (void)streamPlayer:(id)a0 didReceiveError:(id)a1;
- (void)setupWithRoom:(id)a0;
- (void)setupPlayerIfNeeded;
- (void)switchResolutionWithSDKKey:(id)a0;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)didEnterBackground;
- (void)viewWillAppear:(BOOL)a0;
- (void)detach;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
