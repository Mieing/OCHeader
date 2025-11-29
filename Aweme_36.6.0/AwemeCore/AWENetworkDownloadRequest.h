@class NSString, NSDictionary;

@interface AWENetworkDownloadRequest : NSObject

@property (copy, nonatomic) NSString *bizlineTag;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *fileMd5;
@property (nonatomic) BOOL rapidDownload;
@property (nonatomic) double cacheLifeTimeMax;
@property (copy, nonatomic) NSString *fileName;
@property (copy, nonatomic) NSString *taskID;
@property (copy, nonatomic) NSString *destination;
@property (nonatomic) long long fileConflictType;
@property (nonatomic) BOOL regulateDownloadPriority;
@property (nonatomic) long long downloadPriority;
@property (nonatomic) long long requestInsertType;
@property (nonatomic) BOOL isBackgroundDownloadEnable;
@property BOOL isBackgroundDownloadWifiOnlyDisable;
@property (nonatomic) BOOL isDownloadWifiOnly;
@property (nonatomic) long long throttleNetSpeed;
@property BOOL isSliced;
@property long long sliceMaxNumber;
@property long long sliceMaxRetryTimes;
@property double retryTimeoutInterval;
@property double retryTimeoutIntervalIncrement;
@property BOOL isSkipGetContentLength;
@property long long urlRetryTimes;
@property double contentLengthWaitMaxInterval;
@property BOOL isLastRetryEnable;
@property BOOL isHttp1ProtocolEnable;
@property BOOL isForeachUrlListEnable;
@property BOOL isRestartImmediatelyWhenNetworkChange;
@property (copy, nonatomic) NSString *componentId;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ completeBlock;
@property (retain, nonatomic) NSDictionary *headers;

+ (id)requestWithFileName:(id)a0 url:(id)a1 bizlineTag:(id)a2 progressBlock:(id /* block */)a3 completeBlock:(id /* block */)a4;
+ (id)requestWithFileName:(id)a0 url:(id)a1 progressBlock:(id /* block */)a2 completeBlock:(id /* block */)a3;
+ (id)fileNameWithUrlString:(id)a0;
+ (id)defaultTaskIDWithFileName:(id)a0 url:(id)a1;

- (void)configMoveFileWithDestination:(id)a0 fixConflict:(long long)a1;
- (void).cxx_destruct;
- (id)init;

@end
