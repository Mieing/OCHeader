@interface WeChat.PredownloadService : MMUserService <MMServiceProtocol, IMsgExt> {
    void /* unknown type, empty encoding */ C2C;
}

- (void)onServiceInit;
- (void)onServiceClearData;
- (BOOL)isC2CImageEnabledWithIsChatRoom:(BOOL)a0;
- (void)OnBeginDownloadImage:(id)a0 HD:(BOOL)a1 autoDownload:(BOOL)a2 behavior:(long long)a3;
- (void)OnBeginDownloadVideo:(id)a0 mode:(unsigned long long)a1;
- (void)onUserClickImage:(id)a0 byChangePage:(BOOL)a1;
- (void)onUserClickVideo:(id)a0 inFullScreenView:(BOOL)a1;
- (void)onUserClickFile:(id)a0;
- (void)onUserClickRequestFile:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
