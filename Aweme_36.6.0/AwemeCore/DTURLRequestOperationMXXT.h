@class NSError, NSData, NSString, NSRecursiveLock, NSThread, NSOutputStream, NSSet, NSURLResponse, NSInputStream, NSMutableURLRequest, NSURLConnection;

@interface DTURLRequestOperationMXXT : NSOperation <NSURLConnectionDataDelegate>

@property (retain, nonatomic) NSURLConnection *connection;
@property (retain, nonatomic) id responseObject;
@property (nonatomic) int state;
@property (weak, nonatomic) NSThread *subThread;
@property (retain, nonatomic) NSMutableURLRequest *request;
@property (retain, nonatomic) NSURLResponse *response;
@property (retain, nonatomic) NSData *responseData;
@property (retain, nonatomic) NSString *responseString;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSInputStream *inputStream;
@property (retain, nonatomic) NSOutputStream *outputStream;
@property (retain, nonatomic) NSSet *runLoopModes;
@property (nonatomic) long long totalBytesRead;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSThread *runningThread;
@property (retain, nonatomic) NSThread *createdThread;
@property (nonatomic) BOOL networkActivityIndicatorVisible;
@property (nonatomic) BOOL requestBodyGZip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)URLRequestThreadProc:(id)a0;
+ (id)defaultOperationQueue;
+ (id)URLRequestThread;
+ (id)keyPathFromState:(int)a0;
+ (BOOL)stateTransitionIsValid:(int)a0 toState:(int)a1 cancelled:(BOOL)a2;

- (void)URLSession:(id)a0 downloadTask:(SEL)a1 didFinishDownloadingToURL:(void /* unknown type, empty encoding */)a2;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (void)URLSession:(id)a0 dataTask:(id)a1 didBecomeDownloadTask:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)_flex_swizzle_e4630970_connection:(id)a0 didFailWithError:(id)a1;
- (void)_flex_swizzle_f9f7e848_connectionDidFinishLoading:(id)a0;
- (void)_flex_swizzle_b9e7608c_connection:(id)a0 didReceiveResponse:(id)a1;
- (void)_flex_swizzle_d3d59b71_connection:(id)a0 didReceiveData:(id)a1;
- (id)connection:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (void)tmpCancel;
- (id)initWithRequest:(id)a0 outputStream:(id)a1;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void).cxx_destruct;
- (void)connectionDidFinishLoading:(id)a0;
- (id)initWithRequest:(id)a0;
- (BOOL)isConcurrent;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (BOOL)isReady;
- (id)init;
- (void)commonInit;
- (void)finish;
- (void)start;
- (BOOL)isExecuting;
- (void)startConnection;
- (void)dealloc;
- (void)cancel;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (BOOL)isFinished;
- (void)didFinish;
- (void)didStart;
- (void)cancelConnection;

@end
