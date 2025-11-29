@interface TingObjcNativeControllerTingDataObjcStatic : NSObject

+ (void)addOrRevertBlackList:(id)a0 addOrRevert:(BOOL)a1 callback:(id /* block */)a2;
+ (void)deleteFavBySourceId:(id)a0 callback:(id /* block */)a1;
+ (void)getIdentityType:(id /* block */)a0;
+ (void)hasAddedInFavDB:(id)a0 callback:(id /* block */)a1;
+ (void)onPlayerAction:(id)a0 action:(long long)a1 callback:(id /* block */)a2;
+ (void)onPlayerLike:(id)a0 isLike:(BOOL)a1 callback:(id /* block */)a2;
+ (void)onTingCommonEvent:(long long)a0 paramsJson:(id)a1 callback:(id /* block */)a2;
+ (void)preloadMiniProgram:(long long)a0 preloadScene:(long long)a1 callback:(id /* block */)a2;
+ (void)showAudioRedDot:(id /* block */)a0;
+ (void)uploadRecordFileToCdn:(id)a0 callback:(id /* block */)a1;
+ (void)setShowAudioRedDot:(BOOL)a0 callback:(id /* block */)a1;
+ (BOOL)isEngineCategoryInfoEvent:(id)a0;
+ (BOOL)isOpenFullscreenPlayerEvent:(id)a0;
+ (BOOL)isEngineListenItemInfoEvent:(id)a0;
+ (void)trySyncPlayerActionToWeAppTask:(id)a0 action:(unsigned long long)a1;
+ (void)playMusicChatVoice:(id)a0;
+ (void)playChatVoice:(id)a0 callback:(id /* block */)a1;
+ (id)getMusicChatPlayTask;
+ (BOOL)hanldeMusicChatPlayControl:(int)a0 extraData:(id)a1;
+ (int)getVolume;
+ (void)playOnceTimeAudioWithURL:(id)a0 isAbandonFocusForce:(BOOL)a1 completion:(id /* block */)a2;
+ (void)containsInStar:(id)a0 music:(BOOL)a1 callback:(id /* block */)a2;

@end
