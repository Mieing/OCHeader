@class NSURLRequest, NSURLConnection, LZDownloadTaskItem;

@interface KSHttpAudioDataDownload : LZAudioDataDownloader {
    LZDownloadTaskItem *_taskItem;
    long long _statusCode;
    struct _NSRange { unsigned long long location; unsigned long long length; } _downloadRange;
    long long _downloadDataLen;
    double _startTime;
    double _downloadSpeed;
    double _costTime;
}

@property (readonly, nonatomic) NSURLRequest *urlRequest;
@property (readonly, nonatomic) NSURLConnection *urlConnection;

- (void)dealloc;
- (void)cancel;
- (id)taskItem;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })downloadRange;
- (long long)continuousLengh;
- (double)downloadSpeed;
- (double)downloadCostTime;
- (BOOL)beginDownload:(id)a0;
- (BOOL)isErrorCanRetry:(id)a0;
- (id)createURLRequest;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (BOOL)ParseRangeInfo:(id)a0 Result:(id)a1;
- (void).cxx_destruct;

@end
