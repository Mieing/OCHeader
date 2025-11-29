@class NSString, MMTimer;

@interface WCFinderMiniGameDownloadTask : NSObject <MagicGameLoadingExt, WCFinderAccessoryDownloadTask>

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *extraData;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) MMTimer *timeOutTimer;
@property (nonatomic) long long priority;
@property (copy, nonatomic) NSString *groupId;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) long long batchIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAppId:(id)a0 extraData:(id)a1;
- (void)dealloc;
- (id)identifierKey;
- (void)startDownload;
- (void)stopDownload;
- (void)resumeDownload;
- (void)pauseDownload;
- (void)downloadFailForTimeOut;
- (void)onPreloadStart:(id)a0;
- (void)onPreloadEnd:(id)a0;
- (void).cxx_destruct;

@end
