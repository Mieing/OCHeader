@interface _TtCC6WeChat17KaraFeatureCenter7Message : _TtCC6WeChat17KaraFeatureCenter9Component <IMsgExt, WeChat.IKaraMessageExt> {
    void /* unknown type, empty encoding */ _messageThatTriggerEnteringForeground;
    void /* unknown type, empty encoding */ _leaveTimesOfSessions;
    void /* unknown type, empty encoding */ privateImageHistoryTable;
    void /* unknown type, empty encoding */ privateVideoHistoryTable;
    void /* unknown type, empty encoding */ privateFileHistoryTable;
    void /* unknown type, empty encoding */ privateHDImageHistoryTable;
    void /* unknown type, empty encoding */ groupImageHistoryTable;
    void /* unknown type, empty encoding */ groupVideoHistoryTable;
    void /* unknown type, empty encoding */ groupFileHistoryTable;
    void /* unknown type, empty encoding */ groupHDImageHistoryTable;
}

- (void)OnMsgNotAddDBNotify:(id)a0 MsgWrap:(id)a1;
- (void)OnAddMsg:(id)a0 MsgWrap:(id)a1;
- (void)onUserClickVideo:(id)a0 inFullScreenView:(BOOL)a1;
- (void)onUserClickImage:(id)a0 byChangePage:(BOOL)a1;
- (void)onUserClickRequestFile:(id)a0;
- (void)onUserClickRequestHDImage:(id)a0;
- (void)applicationDidEnterForegroundThroughMessageWithSvrID:(long long)a0;
- (void)userDidEnterSession:(id)a0;
- (void)userDidLeaveSession:(id)a0;
- (void)OnBeginDownloadImage:(id)a0 HD:(BOOL)a1 autoDownload:(BOOL)a2 behavior:(long long)a3;
- (void)OnBeginDownloadVideo:(id)a0 mode:(unsigned long long)a1;
- (void)OnMsgDownloadThumbFail:(id)a0 MsgWrap:(id)a1;
- (void)OnMsgDownloadThumbOK:(id)a0 MsgWrap:(id)a1;

@end
