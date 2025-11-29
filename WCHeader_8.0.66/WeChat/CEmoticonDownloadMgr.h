@class NSRecursiveLock, NSString, NSMutableDictionary, OrderedDictionary;

@interface CEmoticonDownloadMgr : MMObject <EmoticonDownloadProxyDelegate, CNetworkStatusExt> {
    NSMutableDictionary *m_downloadCgiDic;
    OrderedDictionary *m_notDownloadQueue;
    NSMutableDictionary *m_downloadInfoDic;
    unsigned int m_downloadCgiMaxCount;
}

@property (retain, nonatomic) NSRecursiveLock *m_oLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)IsMsgInDownloadQueue:(id)a0 n64SvrID:(long long)a1;
- (void)updateDownloadCgiMaxCount;
- (id)downloadInfoForChat:(id)a0 n64SvrID:(long long)a1;
- (void)deleteMsgForChat:(id)a0 n64SvrID:(long long)a1;
- (id)addToDownloadInfoDicWithMsgWrap:(id)a0;
- (BOOL)checkDownload;
- (void)downloadFail:(id)a0;
- (void)downloadOK:(id)a0;
- (void)startDownload:(id)a0 highPriority:(BOOL)a1;
- (void)resumeDownload;
- (void)stopDownloadByChatName:(id)a0;
- (void)stopDownloadByChatName:(id)a0 n64SvrID:(long long)a1;
- (void)ReachabilityChange:(unsigned int)a0;
- (void)onEmoticonDownloadMd5Ok:(id)a0 AndFilePath:(id)a1 withUserInfo:(id)a2;
- (void)onEmoticonDownloadMd5Failed:(id)a0 withUserInfo:(id)a1;
- (void).cxx_destruct;

@end
