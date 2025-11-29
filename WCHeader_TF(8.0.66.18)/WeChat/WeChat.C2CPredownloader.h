@interface WeChat.C2CPredownloader : WeChat.Predownloader <IMsgExt, IDownloadImageTaskExt> {
    void /* unknown type, empty encoding */ schemes;
    void /* unknown type, empty encoding */ queue;
}

- (void)OnMsgNotAddDBNotify:(id)a0 MsgWrap:(id)a1;
- (void)OnAddMsg:(id)a0 MsgWrap:(id)a1;
- (void)OnBeginDownloadImage:(id)a0 HD:(BOOL)a1 autoDownload:(BOOL)a2 behavior:(long long)a3;
- (void)OnBeginDownloadVideo:(id)a0 mode:(unsigned long long)a1;
- (void)onUserClickRequestFile:(id)a0;
- (void)OnDownloadImageOk:(id)a0 isHD:(BOOL)a1;
- (void)OnDownloadImageFail:(id)a0 isHD:(BOOL)a1;
- (void)OnDownloadImageStop:(id)a0 isHD:(BOOL)a1;
- (void)OnDownloadImageExpired:(id)a0 isHD:(BOOL)a1;
- (void)OnMsgDownloadVideoSuccess:(id)a0 MsgWrap:(id)a1;
- (void)OnMsgDownloadVideoExpiredFail:(id)a0 MsgWrap:(id)a1;
- (void)OnMsgDownloadVideoCancel:(id)a0 MsgWrap:(id)a1;
- (void)OnMsgDownloadVideoCommonFail:(id)a0 MsgWrap:(id)a1;
- (void)OnMsgDownloadAppAttachSuccess:(id)a0 MsgWrap:(id)a1;
- (void)OnMsgDownloadAppAttachExpiredFail:(id)a0 MsgWrap:(id)a1;
- (void)OnMsgDownloadAppAttachCancel:(id)a0 MsgWrap:(id)a1;
- (void)OnMsgDownloadAppAttachCommonFail:(id)a0 MsgWrap:(id)a1;
- (void)onUserDidSeeImage:(id)a0;
- (void)applicationDidBecomeActive;
- (void)applicationDidEnterBackground;
- (void)applicationWillResignActive;

@end
