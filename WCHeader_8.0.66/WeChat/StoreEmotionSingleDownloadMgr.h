@class NSString, EmoticonDownloadProxy, NSMutableOrderedSet;

@interface StoreEmotionSingleDownloadMgr : MMUserService <EmoticonDownloadProxyDelegate, MMServiceProtocol> {
    NSMutableOrderedSet *m_downloadQueue;
    EmoticonDownloadProxy *m_downloadCgi;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)downloadEmotionWithWrap:(id)a0;
- (BOOL)saveToNotTempPathWithMD5:(id)a0;
- (id)getPathIfExitedWithWrap:(id)a0;
- (id)dataOfEmoticonIfExistedWithWrap:(id)a0;
- (void)checkDownload;
- (void)realStartDownload:(id)a0;
- (void)finishDownloadEmotionWrap:(id)a0;
- (void)onEmoticonDownloadMd5Ok:(id)a0 AndFilePath:(id)a1 withUserInfo:(id)a2;
- (void)preProcessEmoticonForWrap:(id)a0 andData:(id)a1 callback:(id /* block */)a2;
- (void)onGotEmoticonForWrap:(id)a0 andData:(id)a1 path:(id)a2;
- (void)onEmoticonDownloadMd5Failed:(id)a0 withUserInfo:(id)a1;
- (void)callDownloadSuccess:(id)a0 andResult:(id)a1;
- (void)onDownloadSuccess:(id)a0 andResult:(id)a1;
- (void)onDownloadFailed:(id)a0;
- (void).cxx_destruct;

@end
