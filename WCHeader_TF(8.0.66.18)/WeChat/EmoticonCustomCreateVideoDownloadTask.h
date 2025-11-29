@class NSString, WCFinderMediaInfo, WCFinderFeedMediaWrap;

@interface EmoticonCustomCreateVideoDownloadTask : EmoticonCustomCreateDownloadTask <WCPlayerDownloaderExt, WCFinderVideoDownLoadMgrExt>

@property (retain, nonatomic) NSString *feedId;
@property (retain, nonatomic) NSString *nonceId;
@property (retain, nonatomic) WCFinderMediaInfo *mediaInfo;
@property (retain, nonatomic) WCFinderFeedMediaWrap *downloadingWrap;
@property (nonatomic) unsigned long long targetBitrate;
@property (copy, nonatomic) id /* block */ finderAlreadyExistBlock;
@property (copy, nonatomic) id /* block */ finderProgressBlock;
@property (copy, nonatomic) id /* block */ finderSucBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFinderFeedId:(id)a0 nonceId:(id)a1;
- (id)initWithFinderMediaInfo:(id)a0;
- (void)dealloc;
- (void)startDownload;
- (void)prepareDownloadTask:(id /* block */)a0;
- (BOOL)interruptDownload;
- (id)getLocalFinderMediaPath:(id)a0 mediaInfo:(id)a1;
- (void)OnPlayerDownloadProgress:(id)a0 finish:(unsigned long long)a1 total:(unsigned long long)a2;
- (void)OnCdnDownloadSuccess:(id)a0;
- (void)OnCdnDownloadError:(id)a0;
- (void)finderMediaVideoStreamDownloadFailedWithTid:(id)a0;
- (void).cxx_destruct;

@end
