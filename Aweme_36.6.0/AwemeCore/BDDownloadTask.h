@class NSString, NSDictionary, NSURL, NSURLRequest;
@protocol BDDownloadTaskDelegate;

@interface BDDownloadTask : NSOperation <BDWebImageDownloadTaskBaseInfo, BDWebImageDownloadTaskHEICProgressiveInfo, BDWebImageDownloadTaskTimeInfo> {
    BOOL _finished;
    BOOL _executing;
}

@property (nonatomic) double repackStartTime;
@property (nonatomic) double repackEndTime;
@property (nonatomic) double startTime;
@property (nonatomic) double finishTime;
@property (nonatomic) long long expectedSize;
@property (nonatomic) long long receivedSize;
@property (copy, nonatomic) NSDictionary *defaultHeaders;
@property (copy, nonatomic) NSDictionary *requestHeaders;
@property (nonatomic) unsigned long long options;
@property (copy, nonatomic) NSString *tempPath;
@property (nonatomic) BOOL downloadResumeEnabled;
@property (weak, nonatomic) id<BDDownloadTaskDelegate> delegate;
@property (nonatomic) BOOL enableLog;
@property (nonatomic) BOOL checkMimeType;
@property (nonatomic) BOOL checkDataLength;
@property (nonatomic) BOOL isCocurrentCallback;
@property (nonatomic) BOOL isProgressiveDownload;
@property (nonatomic) BOOL isGeneralizedPrefetchRequest;
@property (nonatomic) BOOL isBizPrefetchRequest;
@property (nonatomic) long long throttleNetSpeed;
@property (readonly, nonatomic) NSURL *url;
@property (retain, nonatomic) NSURLRequest *request;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) double timeoutInterval;
@property (nonatomic) double timeoutIntervalForResource;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } smartCropRect;
@property (readonly, nonatomic) long long realSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL needHeicProgressDownloadForThumbnail;
@property (nonatomic) long long isThumbnailExist;
@property (nonatomic) long long minDataLengthForThumbnail;
@property (nonatomic) BOOL isHeicThumbDecodeFired;

+ (long long)getCacheControlTimeFromResponse:(id)a0;
+ (BOOL)checkData:(id)a0 md5:(id)a1;

- (void)_setReceivedSize:(long long)a0 expectedSize:(long long)a1;
- (void)setupSmartCropRectFromHeaders:(id)a0;
- (void)repackStart;
- (void)repackEnd;
- (id)checkDataError:(id)a0 data:(id)a1 dataSizeBias:(long long)a2 headers:(id)a3;
- (void)_updateThrottleNetSpeed:(long long)a0;
- (void)updateThrottleNetSpeed:(long long)a0;
- (void).cxx_destruct;
- (BOOL)isConcurrent;
- (void)setExecuting:(BOOL)a0;
- (id)initWithURL:(id)a0;
- (void)setFinished:(BOOL)a0;
- (void)start;
- (BOOL)isExecuting;
- (void)cancel;
- (BOOL)isFinished;
- (BOOL)asynchronous;

@end
