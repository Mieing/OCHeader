@class NSString, NSMutableSet, NSMutableArray, FavCdnTaskInfo;

@interface FavCdnDownloadMgr : MMUserService <ICdnComMgrExt, MMServiceProtocol> {
    NSMutableSet *m_set;
    NSMutableArray *m_queue;
    FavCdnTaskInfo *m_currentTask;
    BOOL m_downloading;
    BOOL m_needSwitchFileType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)StartDownloadFavCdnData:(id)a0 isPrior:(BOOL)a1;
- (BOOL)IsDownloading:(id)a0;
- (void)realStartDownloadFavCdnData:(id)a0 isPrior:(BOOL)a1;
- (void)tryNext;
- (void)StopDownloadFavMedia:(id)a0;
- (void)realStopDownloadFavMedia:(id)a0;
- (void)OnCdnDownloadProgress:(id)a0;
- (void)OnCdnDownload:(id)a0;
- (void).cxx_destruct;

@end
