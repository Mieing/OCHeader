@class NSString, NSMutableArray, GroupNoticeItemDownloader;

@interface GroupNoticeDownloadMgr : MMUserService <GroupNoticeItemDownloaderDelegate, MMServiceProtocol> {
    NSMutableArray *m_downloadItemQueue;
    GroupNoticeItemDownloader *m_downloader;
    BOOL m_isDownloading;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)startDownloadItem:(id)a0;
- (void)stopDownloadItem:(id)a0;
- (void)stopAllDownload;
- (BOOL)isDownloadingData:(id)a0;
- (void)tryDownloadItem;
- (void)onGroupNoticeDownloadItem:(id)a0 retCode:(int)a1;
- (void)onGroupNoticeDownloadData:(id)a0 finishedLength:(unsigned long long)a1 totalLength:(unsigned long long)a2;
- (void)onGroupNoticeDownloadData:(id)a0 retCode:(int)a1;
- (void).cxx_destruct;

@end
