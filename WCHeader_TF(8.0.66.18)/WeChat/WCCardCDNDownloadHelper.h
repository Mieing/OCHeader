@class NSMutableDictionary;

@interface WCCardCDNDownloadHelper : NSObject <ICdnComMgrExt> {
    NSMutableDictionary *_clientMsgId2DownloadInfoMap;
}

- (void)dealloc;
- (id)init;
- (id)download:(id)a0;
- (id)getMd5:(id)a0;
- (void)OnCdnInit;
- (void)OnCdnDownload:(id)a0;
- (void).cxx_destruct;

@end
