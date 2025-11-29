@class NSPointerArray, NSMutableDictionary, NSString;

@interface LunaPlayerPluginService : HTSService <LunaPlayerPluginService, LunaSubscriberServiceDelegate>

@property (retain, nonatomic) NSMutableDictionary *mcheckCache;
@property (retain, nonatomic) NSPointerArray *lunaPlayers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onStartPlay:(id)a0;
- (void)onSeekOver:(id)a0;
- (void)reportEvent:(id)a0 params:(id)a1;
- (void)mediaCheckPlayable:(id)a0 completion:(id /* block */)a1;
- (void)queryVideoModel:(id)a0 completion:(id /* block */)a1;
- (id)preloadVideoModel:(id)a0 completion:(id /* block */)a1;
- (void)cancelPreloadVideoModelTask:(id)a0;
- (void)reportAction:(id)a0 queue:(id)a1;
- (BOOL)canAutoShiftOnPreviewPlayOver:(id)a0 isPlaying:(BOOL)a1 isTail:(BOOL)a2;
- (void)cleanMcheckCache;
- (void)addMusicPlayer:(id)a0;
- (BOOL)canStartFromChorus:(id)a0 playerModel:(id)a1;
- (void)luna_onUserSubscriberStatusChangedFinished:(unsigned long long)a0;
- (id)p_updateModel:(id)a0 checkResponse:(id)a1;
- (void)requestInfoWithFeedViewModel:(id)a0 retryCount:(long long)a1 completion:(id /* block */)a2;
- (void)showToast:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
