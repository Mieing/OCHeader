@class M3U8SegmentInfo, NSString, WCPlayerPlaybackInfo, NSData, WCPlayerReporter, NSMutableArray, WCDownloadArgsWrap;
@protocol WCPlayerDownloaderDelegate;

@interface WCPlayerDownloader : WCPlayerObject

@property (nonatomic) unsigned int lastUpdateNetwork;
@property (nonatomic) BOOL isSourceChanged;
@property (nonatomic) BOOL isHadRetryStart;
@property (nonatomic) BOOL isDownloadTaskLauncher;
@property (retain, nonatomic) NSData *m3u8Data;
@property (retain, nonatomic) NSString *m3u8Content;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ moovReadyBlock;
@property (copy, nonatomic) id /* block */ m3u8ReadyBlock;
@property (copy, nonatomic) id /* block */ dataReadyBlock;
@property (copy, nonatomic) id /* block */ fastCompleteBlock;
@property (copy, nonatomic) id /* block */ downloadCompleteBlock;
@property (nonatomic) BOOL isStart;
@property (retain, nonatomic) WCPlayerReporter *reporter;
@property (retain, nonatomic) WCDownloadArgsWrap *downloadArgsWrap;
@property (retain, nonatomic) NSMutableArray *arrDownloadArgs;
@property (retain, nonatomic) WCPlayerPlaybackInfo *playbackInfo;
@property (nonatomic) BOOL isRecievedAllData;
@property (nonatomic) BOOL bHadRecieveMoov;
@property (nonatomic) long long fileLength;
@property (nonatomic) double duration;
@property (retain, nonatomic) M3U8SegmentInfo *segmentInfo;
@property (weak, nonatomic) id<WCPlayerDownloaderDelegate> delegate;

- (id)initWithPlaybackInfo:(id)a0 downloadArgs:(id)a1;
- (void)dealloc;
- (id)getVideoDataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)getLocalAvailableLengthWithOffset:(unsigned long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })requestDataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 Sec:(float)a1;
- (BOOL)startInternalDownload;
- (void)start;
- (void)delayNotifyWhenHitLocalCache;
- (void)onStartDownloadFailWithRetCode:(int)a0;
- (void)stopDownloadVideo;
- (void)startDataPreload;
- (void)initCallbackBlock;
- (void)registerDownloadEvent:(BOOL)a0;
- (void)handleSourceChangedEvent;
- (void)handleSuccessEvent:(id)a0;
- (void)tryFixMP4Size;
- (void)handleDataAvaiableEvent:(unsigned long long)a0 length:(unsigned long long)a1;
- (void)handleM3u8ReadyEvent:(id)a0;
- (void)tryInitFileSizeWithLocalFile;
- (void)handleMoovReadyEvent:(id)a0;
- (void)hanleStartDownloadEvent:(id)a0;
- (void)handleErrorEvent:(id)a0;
- (void)handleProgressEvent:(id)a0 finish:(unsigned long long)a1 total:(unsigned long long)a2;
- (BOOL)isM3u8TsDownloader;
- (id)formatPath;
- (id)tempPath;
- (id)fileName;
- (BOOL)copyVideoFromTmpPath:(id)a0 toFormatPath:(id)a1;
- (BOOL)isRecentRecallCdnData;
- (int)getRecentAverageSpeed;
- (BOOL)retryBySwitchDataSource;
- (id)randomSelectDownloadArgs;
- (void).cxx_destruct;

@end
