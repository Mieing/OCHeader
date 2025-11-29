@class NSString, MMTimer;

@interface WCFinderMiniAppDownloadTask : NSObject <WAPrefetchMgrExt, WCFinderAccessoryDownloadTask>

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) NSString *requestKey;
@property (retain, nonatomic) MMTimer *timeOutTimer;
@property (nonatomic) long long priority;
@property (copy, nonatomic) NSString *groupId;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) long long batchIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUsername:(id)a0 appId:(id)a1 path:(id)a2;
- (void)dealloc;
- (id)identifierKey;
- (void)startDownload;
- (void)stopDownload;
- (void)resumeDownload;
- (void)pauseDownload;
- (void)downloadFailForTimeOut;
- (void)prefetchGetCodeWithResult:(unsigned long long)a0 preDownloadRequestkey:(id)a1;
- (void).cxx_destruct;

@end
