@class CdnSnsAttributes, NSString, CdnBase, CdnFileIdDownload, CdnDataVerify, CdnPreloadParams, CdnBackupDownload, CdnBehavior, CdnUrlDownload, CdnFinderVideoParams, CdnVideoDownloadParams, CdnHlsParams;

@interface CdnDownloadRequest : WXPBGeneratedMessage

@property (retain, nonatomic) CdnBase *base;
@property (retain, nonatomic) NSString *savepath;
@property (retain, nonatomic) CdnFileIdDownload *fileid;
@property (retain, nonatomic) CdnUrlDownload *url;
@property (retain, nonatomic) CdnBehavior *behavior;
@property (retain, nonatomic) CdnVideoDownloadParams *video;
@property (retain, nonatomic) CdnSnsAttributes *sns;
@property (retain, nonatomic) CdnPreloadParams *preload;
@property (retain, nonatomic) CdnFinderVideoParams *finder;
@property (retain, nonatomic) CdnHlsParams *hls;
@property (retain, nonatomic) CdnDataVerify *verify;
@property (retain, nonatomic) CdnBackupDownload *backup;

+ (void)initialize;

@end
