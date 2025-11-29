@class NSMutableArray, CdnSnsTaskInfo;

@interface WCStoryDownloadImageCdnMgr : NSObject <ICdnComMgrExt>

@property (retain, nonatomic) NSMutableArray *arrQueue;
@property (retain, nonatomic) CdnSnsTaskInfo *curTaskInfo;

- (id)init;
- (void)StartPreloadImageWithItems:(id)a0;
- (void)StartDownloadImageWithMediaItem:(id)a0;
- (void)StartDownloadImageWithMediaItem:(id)a0 Priority:(BOOL)a1;
- (BOOL)IsImageDownloadingWithMediaItem:(id)a0;
- (id)generateDownloadTaskInfo:(id)a0;
- (void)CheckQueue;
- (void)startDownloadWithTaskInfo:(id)a0;
- (void)realStartDownloadWithTaskInfo:(id)a0;
- (void)OnCdnDownloadProgress:(id)a0;
- (void)OnCdnDownload:(id)a0;
- (void).cxx_destruct;

@end
