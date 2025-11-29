@class NSString, MegaVideoPlayerCallbackApi;

@interface LVPlayerServicePlugin : NSObject <MMFlutterPlugin, MegaVideoPlayerService>

@property (retain, nonatomic) MegaVideoPlayerCallbackApi *playerApiCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAttachedToEngine:(id)a0;
- (void)onDetachedFromEngine:(id)a0;
- (void)onAttachedToViewController:(id)a0;
- (void)onDetachedToViewController;
- (void)createPlayerTexturePlayItem:(id)a0 autoPlay:(BOOL)a1 playOffset:(long long)a2 completion:(id /* block */)a3;
- (void)releasePlayerId:(long long)a0 error:(id *)a1;
- (void)playPlayerId:(long long)a0 error:(id *)a1;
- (void)stopPlayerId:(long long)a0 error:(id *)a1;
- (void)pausePlayerId:(long long)a0 error:(id *)a1;
- (id)getCurrentPlayMsPlayerId:(long long)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
