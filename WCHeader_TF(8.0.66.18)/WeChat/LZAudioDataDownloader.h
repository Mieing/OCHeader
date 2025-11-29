@protocol LZAudioDataDownloadDelegate;

@interface LZAudioDataDownloader : NSObject

@property (weak, nonatomic) id<LZAudioDataDownloadDelegate> delegate;

- (void)cancel;
- (BOOL)beginDownload:(id)a0;
- (id)taskItem;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })downloadRange;
- (long long)continuousLengh;
- (double)downloadSpeed;
- (double)downloadCostTime;
- (BOOL)isErrorCanRetry:(id)a0;
- (id)downloadDetailInfo;
- (void).cxx_destruct;

@end
