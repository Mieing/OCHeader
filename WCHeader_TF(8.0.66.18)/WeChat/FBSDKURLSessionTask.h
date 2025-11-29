@class NSURLSessionTask;

@interface FBSDKURLSessionTask : NSObject

@property (retain, nonatomic) NSURLSessionTask *task;
@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic) unsigned long long requestStartTime;
@property (readonly, nonatomic) unsigned long long loggerSerialNumber;

- (id)initWithRequest:(id)a0 fromSession:(id)a1 completionHandler:(id /* block */)a2;
- (void)logAndInvokeHandler:(id /* block */)a0 error:(id)a1;
- (void)logAndInvokeHandler:(id /* block */)a0 response:(id)a1 responseData:(id)a2;
- (void)invokeHandler:(id /* block */)a0 error:(id)a1 response:(id)a2 responseData:(id)a3;
- (void)logMessage:(id)a0;
- (void)taskDidCompleteWithResponse:(id)a0 data:(id)a1;
- (void)taskDidCompleteWithError:(id)a0;
- (void)start;
- (void)cancel;
- (void).cxx_destruct;

@end
