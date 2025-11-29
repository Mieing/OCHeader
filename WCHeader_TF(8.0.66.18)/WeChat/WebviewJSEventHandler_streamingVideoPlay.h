@class NSString, WCNetworkMediaPlayer, MMUIWindow, WCNetworkMediaStreamVideoInfo;

@interface WebviewJSEventHandler_streamingVideoPlay : WebviewJSEventHandlerBase <WCNetworkMediaPlayerDelegate, MMWebViewDelegate> {
    MMUIWindow *m_fullScreenWindow;
    WCNetworkMediaPlayer *m_player;
    WCNetworkMediaStreamVideoInfo *m_streamVideoInfo;
    BOOL m_needReportData;
    BOOL m_needHiddenMoreMenu;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)jumpToDetail:(id)a0;
- (void)exitPlayWindow;
- (void)notifyWebViewReturn;
- (void)webViewReturn:(id)a0;
- (id)getStatExtStr;
- (id)getPlayLogWithPlayType:(unsigned int)a0;
- (id)getClickLogWithClickType:(unsigned int)a0;
- (id)getSSIDAndBSSID;
- (void)logVideoPlay:(unsigned int)a0;
- (void)logVideoClick:(unsigned int)a0;
- (void)onClosePlayer;
- (void)onStartPlayer;
- (void)onPausePlayer;
- (void)onEndPlayer;
- (void)onClosePlayerForViewDetail:(id)a0;
- (void)onClickFavVideoMenu;
- (void)onShareVideoToFriend:(id)a0;
- (void)onCancelShareVideoToFriend;
- (void)onShareVideoToTimeline:(BOOL)a0;
- (BOOL)needHiddenMoreMenu;
- (void).cxx_destruct;

@end
