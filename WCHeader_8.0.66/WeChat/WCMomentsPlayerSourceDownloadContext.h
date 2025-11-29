@class WCMomentsPlayerSourceDetermination, CdnComVideoProcessInfo, CdnDownloadTaskInfo, NSDate, CdnProgressInfo, WCDownloadArgsWrap;

@interface WCMomentsPlayerSourceDownloadContext : NSObject

@property (retain, nonatomic) WCDownloadArgsWrap *downloadArgs;
@property (nonatomic) BOOL isPreload;
@property (retain, nonatomic) WCMomentsPlayerSourceDetermination *sourceDetermination;
@property (retain, nonatomic) NSDate *downloadStartTime;
@property (retain, nonatomic) NSDate *downloadEndTime;
@property (retain, nonatomic) CdnComVideoProcessInfo *downloadProgressInfoWhenMoovReady;
@property (retain, nonatomic) CdnDownloadTaskInfo *downloadTaskInfoWhenStopped;
@property (retain, nonatomic) CdnProgressInfo *downloadProgressInfoWhenPreloadCompleted;
@property (nonatomic) BOOL isDownloading;
@property (nonatomic) BOOL isDownloadMoovReady;
@property (nonatomic) BOOL isDownloadCompleted;

- (void).cxx_destruct;

@end
