@class NSString, MMTimer;
@protocol MMResourceCdnDownloaderNotifierDelegate;

@interface MMResourceCdnDownloaderNotifier : IWebNetTaskCallBack

@property (weak, nonatomic) id<MMResourceCdnDownloaderNotifierDelegate> delegate;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) MMTimer *timer;

- (void)dealloc;
- (void)startWithDelegate:(id)a0 identifier:(id)a1;
- (void)stop;
- (void)notifyWithDownloadInfo:(id)a0;
- (void)registerExtension;
- (void)unregisterExtension;
- (void)OnDownloadCompleted:(id)a0 response:(id)a1;
- (void)scheduleTimer;
- (void)invalidateTimer;
- (void)onTimeout;
- (void).cxx_destruct;

@end
