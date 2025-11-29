@class WAMediaCastingAirPlayDetector, NSMutableDictionary, NSString;

@interface WAWebViewPlugin_LivePlayer : WAWebViewPlugin_embedView <TXLivePlayJSAdapterDelegate, WAMediaCastingAirPlayDetectorDelegate, WABGAudioMinimizationHostPlayerProtocol, IWAWebViewPlugin_LivePlayer> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _webViewFrame;
    BOOL _tabBarVisible;
    struct CGPoint { double x; double y; } _contentOffset;
    BOOL _statusBarBlack;
    BOOL _scrollEnabled;
}

@property (nonatomic) long long lastOrientation;
@property (retain, nonatomic) NSMutableDictionary *playerDic;
@property (nonatomic) BOOL isInBackground;
@property (copy, nonatomic) id /* block */ operateCallback;
@property (retain, nonatomic) WAMediaCastingAirPlayDetector *airPlayDetector;
@property (nonatomic) BOOL isInLiveFullScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onWeAppWillEnterBackground:(id)a0;
- (void)onWeAppDidEnterBackground:(id)a0;
- (void)onWeAppEnterForeground:(id)a0;
- (void)onAppEnterForeground;
- (void)dealloc;
- (void)updateParentId:(unsigned int)a0 forChild:(unsigned int)a1;
- (unsigned int)insertLivePlayer:(unsigned int)a0 parentId:(unsigned int)a1 pos:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 configs:(id)a3;
- (void)updateLivePlayer:(unsigned int)a0 configs:(id)a1 pos:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)updateLivePlayer:(unsigned int)a0 configs:(id)a1;
- (void)operateLivePlayer:(unsigned int)a0 type:(id)a1 data:(id)a2 completion:(id /* block */)a3;
- (void)onLivePlayerCallBack:(BOOL)a0 errNo:(long long)a1 errMsg:(id)a2;
- (void)_sendLiveBackgroundPlaybackChangeEvent:(BOOL)a0 liveId:(long long)a1;
- (id)minimizationItemInfoWithLivePlayer:(id)a0;
- (void)snapshotLivePlayer:(unsigned int)a0 needCompress:(BOOL)a1 isSnapshotStream:(BOOL)a2 finish:(id /* block */)a3;
- (BOOL)removeLivePlayer:(unsigned int)a0;
- (id)getLivePlayerWithPlayerId:(unsigned int)a0;
- (id)getPlaybackLivePlayerSnapshot;
- (void)onAudioVolumeEvaluation:(unsigned int)a0 volume:(int)a1;
- (void)onPlayEvent:(int)a0 evtMsg:(id)a1 playerId:(unsigned int)a2 param:(id)a3;
- (void)onVideoEvent:(id)a0 playerId:(unsigned int)a1;
- (void)onPlayNetStatus:(id)a0 playerId:(unsigned int)a1;
- (void)enableFullScreen:(BOOL)a0 orientation:(long long)a1 playerId:(unsigned int)a2;
- (void)disableFullScreen;
- (void)onPlayerEvent:(id)a0 param:(id)a1;
- (void)onPlayerEvent:(id)a0 param:(id)a1 toWebview:(BOOL)a2;
- (void)onInsertLogView:(unsigned int)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fullScreenFrame;
- (BOOL)isAudioMuted;
- (BOOL)handleEvent:(unsigned long long)a0 userInfo:(id)a1;
- (void)didRotate:(id)a0;
- (id)getOrientationStr;
- (id)getWebViewController;
- (void)registerAirPlayDetectorDelegate;
- (void)unregisterAirPlayDectorDelegate;
- (void)onWAMediaCastingAirPlayDetector:(id)a0 wirelessRouteActiveDidChange:(BOOL)a1;
- (BOOL)isBackgroundPlaybackActive;
- (id)currentBgPlayer;
- (void)updateBackgroundPlayback:(id)a0 playerId:(unsigned int)a1;
- (id)minimizationHostId;
- (void)requestBackgroundPlayback:(id)a0 playerId:(unsigned int)a1;
- (void)exitBackgroundPlayback:(id)a0 needClearBgInfo:(BOOL)a1;
- (void)clearBGMinimizationInfo:(id)a0;
- (BOOL)isPlaying:(id)a0;
- (void)onMinimizeTaskClosed:(id)a0;
- (void)onMinimizeTaskStateChangeToMaximized:(id)a0;
- (void)onPlayerPauseByInterrupt:(id)a0;
- (void)onPlayerPlayByResume:(id)a0;
- (void).cxx_destruct;

@end
