@class CdnRecordMediaInfo, NSMutableArray, CMessageWrap;

@interface RoomHistoryDownloadCDNMgr : NSObject <ICdnComMgrExt> {
    CMessageWrap *_curDownMsgWrap;
    CdnRecordMediaInfo *_curDownMediaInfo;
    NSMutableArray *_arrCDNDownloadInfo;
    NSMutableArray *_pendingMsgQueue;
}

- (id)init;
- (BOOL)StartDownloadHistoryRecordMsg:(id)a0 prior:(BOOL)a1;
- (void)checkMsgQueue;
- (void)CheckDownloadRecordData;
- (void)AddDownloadTasksFromHistoryRecordMsg:(id)a0;
- (id)genHistoryRecordRecordMediaInfo:(id)a0 clientMsgID:(id)a1;
- (void)StopDownloadHistoryRecordMsg:(id)a0;
- (BOOL)IsInDownloadQueue:(id)a0;
- (void)DownLoadOK;
- (void)DownloadFail:(int)a0 Expired:(BOOL)a1 DownloadInfo:(id)a2;
- (void)OnSetCdnDnsInfo;
- (void)OnCdnDownload:(id)a0;
- (void).cxx_destruct;

@end
