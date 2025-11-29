@interface WeChat.MagicEcsKFCardService : MMUserService <MMServiceProtocol, WeChat.IMagicEcsKFCardService, IMagicCardStarterDelegate, IMsgExt> {
    void /* unknown type, empty encoding */ delegateMap;
    void /* unknown type, empty encoding */ handle;
    void /* unknown type, empty encoding */ enterKFRoomCount;
}

- (void)createBiz;
- (void)onEnterKFRoom;
- (void)deActiveBiz;
- (void)onExitKFRoom;
- (void)notifyBizDestroy;
- (void)addFrameSetViewWithContainerView:(id)a0 frameSetName:(id)a1 frameSetData:(id)a2;
- (void)removeFrameSetViewWithFrameSetName:(id)a0;
- (void)setEcsKFCardMessageViewDelegate:(id)a0 delegate:(id)a1;
- (void)notifyFrameSetSizeChange:(id)a0 height:(long long)a1;
- (double)getFrameSetCacheHeight:(id)a0;
- (void)jsApiEventHandler:(id)a0 extraInfo:(id)a1 callback:(id /* block */)a2;
- (void)OnAddMsg:(id)a0 MsgWrap:(id)a1;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (BOOL)isPkgAvailable:(unsigned int)a0;
- (id)init;
- (void).cxx_destruct;

@end
