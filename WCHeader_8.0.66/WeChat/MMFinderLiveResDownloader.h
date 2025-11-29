@class NSMutableDictionary, NSMutableArray;

@interface MMFinderLiveResDownloader : NSObject

@property (retain, nonatomic) NSMutableDictionary *requestObjectDict;
@property (retain, nonatomic) NSMutableArray *downloadingRequestObjectQueue;
@property (retain, nonatomic) NSMutableArray *waittingRequestObjectQueue;
@property (retain, nonatomic) NSMutableArray *pendingRetryRequestObjects;

- (void)dealloc;
- (void)stopAllDownLoad;
- (id)init;
- (void)setup;
- (void)startDownload:(id)a0;
- (BOOL)realStartDonwloadWithQueue;
- (BOOL)retryDownLoadForRequestObj:(id)a0;
- (void)OnCdnDownload:(id)a0;
- (void)handleTask:(id)a0 downloadAttemptSucceeded:(BOOL)a1;
- (void).cxx_destruct;

@end
