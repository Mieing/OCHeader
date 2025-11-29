@interface WeChat.MagicWxGameDynamicCardService : MMUserService <MMServiceProtocol, WeChat.IMagicWxGameDynamicCardService, IMagicCardStarterDelegate, IMsgExt> {
    void /* unknown type, empty encoding */ delegateMap;
    void /* unknown type, empty encoding */ lastSendScrollTime;
    void /* unknown type, empty encoding */ offsetHeight;
    void /* unknown type, empty encoding */ handle;
    void /* unknown type, empty encoding */ destroyTimeout;
    void /* unknown type, empty encoding */ sendScrollInterval;
}

- (void)createBiz;
- (void)notifyBizDestroy;
- (void)addFrameSetViewWithContainerView:(id)a0 frameSetName:(id)a1 frameSetData:(id)a2;
- (void)removeFrameSetViewWithFrameSetName:(id)a0;
- (void)deActiveBiz;
- (void)jsApiEventHandler:(id)a0 extraInfo:(id)a1 callback:(id /* block */)a2;
- (void)setAppWxGameCardMessageViewDelegate:(id)a0 delegate:(id)a1;
- (void)notifyFrameSetSizeChange:(id)a0 height:(long long)a1;
- (void)OnAddMsg:(id)a0 MsgWrap:(id)a1;
- (void)onMainSessionExposeWithSessionInfo:(id)a0;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (double)getFrameSetCacheHeight:(id)a0;
- (void)notifyEnterChatRoom;
- (void)setChatRoomHeight:(double)a0;
- (void)notifyExitChatRoom;
- (void)notifyViewScroll;
- (double)getOffsetHeight;
- (BOOL)isVersionLatest:(id)a0;
- (void)showMsgPopupMenu:(id)a0;
- (double)getWxGameDynamicCardOffsetTop:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
