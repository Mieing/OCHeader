@class AtomicCounter, DownloadGlobalParameters, NSString, UrlStatusManager;

@interface LastRetryTask : NSObject

@property (retain) UrlStatusManager *urlManager;
@property (retain) DownloadGlobalParameters *param;
@property BOOL isCancelled;
@property (retain) AtomicCounter *deltaLen;
@property (copy) NSString *currKey;

- (id)sendRequestSync:(id)a0;
- (id)initWithConfig:(id)a0 param:(id)a1 deltaLen:(id)a2;
- (void).cxx_destruct;
- (void)cancel;
- (id)startSync;

@end
