@class NSString;
@protocol IESLiveByteCastProvider;

@interface IESLiveByteCastInterfaceImpl : IESLiveGeneralBaseService <IESLiveByteCastProvider>

@property (weak, nonatomic) id<IESLiveByteCastProvider> provider;
@property (nonatomic) BOOL hasShowPlayerView;
@property (nonatomic) BOOL isCastDanmakuStatus;
@property (nonatomic) BOOL castDanmakuEnable;
@property (nonatomic) BOOL screenCastAdapterDelegateSetOnFragment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;

- (BOOL)isScreenCasting;
- (void)seekToProgress:(double)a0;
- (void)seekLiveToNewest;
- (BOOL)supportScreenCastInRoom;
- (BOOL)isXsgSupportSeek;
- (void)forceUpdateToPortraitInterceptWithCompletion:(id /* block */)a0;
- (void)lockControlView;
- (void)unLockControlView;
- (BOOL)canCastDanmaku;
- (BOOL)canAirPlayDanmaku;
- (void)showAirplayDeviceList;
- (BOOL)islivePlayControlViewShow;
- (BOOL)needLoadPortraitButton;
- (id)generatePortraitButton;
- (long long)castScreenExplicit;
- (void)injectProvider:(id)a0;
- (BOOL)castDanmakuShouldShow;
- (BOOL)enableCastScreen;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (BOOL)isPlaying;

@end
