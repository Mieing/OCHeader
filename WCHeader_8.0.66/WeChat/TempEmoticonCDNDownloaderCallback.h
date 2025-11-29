@interface TempEmoticonCDNDownloaderCallback : NSObject {
    struct TempEmoticonCDNDownloaderDispatcherBridgeObjcImpl { void /* function */ **x0; struct TempEmoticonCDNDownloaderDispatcherCallback *x1; id x2; } *dispatcher_bridge;
}

- (id)initWithCpp:(struct TempEmoticonCDNDownloaderDispatcherBridgeObjcImpl { void /* function */ **x0; struct TempEmoticonCDNDownloaderDispatcherCallback *x1; id x2; } *)a0;
- (void)onTempOnSingleEmoticonDownloadProgressEvent:(id)a0 finishedLen:(int)a1 totalLen:(int)a2;
- (void)onTempOnSingleEmoticonDownloadResultEvent:(id)a0 succeed:(BOOL)a1;

@end
