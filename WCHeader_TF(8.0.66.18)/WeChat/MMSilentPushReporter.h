@class NSString, NSURLSession;

@interface MMSilentPushReporter : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate>

@property (retain, nonatomic) NSURLSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIdentifier:(id)a0;
- (void)uploadTaskWithRequest:(id)a0 fromFile:(id)a1 completionHandler:(id /* block */)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)a0;
- (void).cxx_destruct;

@end
