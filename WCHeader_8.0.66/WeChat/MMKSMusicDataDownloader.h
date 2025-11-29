@class NSURLConnection, LZDownloadTaskItem;

@interface MMKSMusicDataDownloader : LZAudioDataDownloader

@property (retain, nonatomic) NSURLConnection *urlConnection;
@property (retain, nonatomic) LZDownloadTaskItem *taskItem;
@property (nonatomic) long long statusCode;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } downloadRange;
@property (nonatomic) long long downloadDataLen;
@property (nonatomic) double startTime;
@property (nonatomic) double downloadSpeed;
@property (nonatomic) double costTime;

- (void)dealloc;
- (void)cancel;
- (long long)continuousLengh;
- (double)downloadCostTime;
- (BOOL)beginDownload:(id)a0;
- (BOOL)isErrorCanRetry:(id)a0;
- (id)connection:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (BOOL)ParseRangeInfo:(id)a0 Result:(id)a1;
- (id)syncReplaceRequestIPIfNeed:(id)a0;
- (void)reportDownloadStart;
- (void)reportContentTypeError;
- (void)reportContentLengthError;
- (void)reportContentRangeError;
- (void).cxx_destruct;

@end
