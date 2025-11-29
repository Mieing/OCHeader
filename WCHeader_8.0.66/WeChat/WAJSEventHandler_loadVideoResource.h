@class NSMutableDictionary;

@interface WAJSEventHandler_loadVideoResource : WAJSEventHandler_BaseEvent <ICdnComMgrExt> {
    NSMutableDictionary *_dicDownloadingURL;
}

- (void)handleJSEvent:(id)a0;
- (void)OnCdnDownload:(id)a0;
- (void).cxx_destruct;

@end
