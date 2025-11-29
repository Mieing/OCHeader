@class NSURLSession, NSMutableDictionary, NSString, NSMutableArray;
@protocol MMLiteAppDownloadMgrDelegate;

@interface MMLiteAppDownloadMgr : NSObject <NSURLSessionDelegate, NSURLSessionDownloadDelegate>

@property (retain, nonatomic) NSURLSession *session;
@property (retain, nonatomic) NSMutableDictionary *downloadingStatus;
@property (retain, nonatomic) NSMutableArray *downloadingItemQueue;
@property (retain, nonatomic) NSMutableArray *waitingItemQueue;
@property (nonatomic) struct shared_ptr<CronetCallback> { struct CronetCallback *__ptr_; struct __shared_weak_count *__cntrl_; } cronet_cb_;
@property (weak, nonatomic) id<MMLiteAppDownloadMgrDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)addDownloadLiteAppTask:(id)a0 reporter:(id)a1;
- (void)startDownloadLiteApp:(id)a0;
- (void)checkQueue;
- (void)dispatchAsync:(id /* block */)a0 isDownloadMediaResource:(BOOL)a1;
- (void)OnCronetDownloadComplete:(const void *)a0;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
