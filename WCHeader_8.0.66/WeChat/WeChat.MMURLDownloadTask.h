@interface WeChat.MMURLDownloadTask : _TtCs12_SwiftObject <MMResourceDownloadDelegate> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ url;
    void /* unknown type, empty encoding */ downloader;
    void /* unknown type, empty encoding */ response;
}

- (void)onDownloadFinish:(long long)a0 downloadData:(id)a1 resUrl:(id)a2 cdnResultCode:(long long)a3;

@end
