@class NSURLSessionTask, NSURLSession;

@interface TVLNetworkClient : NSObject

@property (retain, nonatomic) NSURLSession *session;
@property (retain, nonatomic) NSURLSessionTask *task;
@property (nonatomic, getter=isCanceled) BOOL canceled;

- (void)invalidAndCancel;
- (void)requestWithURL:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)cancel;

@end
