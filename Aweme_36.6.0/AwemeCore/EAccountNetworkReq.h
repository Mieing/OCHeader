@class NSString, EAccountTimeoutTimer, EAccountLogEntity;

@interface EAccountNetworkReq : NSObject <NSURLSessionTaskDelegate, EAccountTimeoutDelegate>

@property (retain, nonatomic) NSString *ggah;
@property (retain, nonatomic) NSString *hadCallback;
@property (nonatomic) BOOL isSwtichRequest;
@property (copy, nonatomic) id /* block */ block;
@property (retain, nonatomic) NSString *host;
@property (retain, nonatomic) NSString *path;
@property (nonatomic) long long port;
@property (retain, nonatomic) NSString *scheme;
@property (retain, nonatomic) NSString *bussinessType;
@property (retain, nonatomic) NSString *errorTempParams;
@property (retain, nonatomic) NSString *reqId;
@property (retain, nonatomic) NSString *redirectTag;
@property (retain, nonatomic) NSString *redirectOrder;
@property (retain, nonatomic) NSString *httpMethod;
@property (retain, nonatomic) EAccountLogEntity *logEty;
@property (nonatomic) double timeoutIntervalForResource;
@property (retain, nonatomic) EAccountTimeoutTimer *timeoutTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requestSerialization:(id)a0 Param:(id)a1 httpMethod:(id)a2 timeoutInterval:(double)a3;

- (void)URLSession:(id)a0 downloadTask:(SEL)a1 didFinishDownloadingToURL:(void /* unknown type, empty encoding */)a2;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (void)URLSession:(id)a0 dataTask:(id)a1 didBecomeDownloadTask:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)_flex_swizzle_1b2fdb69_URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (id)connection:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (void)startUploadLog;
- (void)domainSwitch:(id)a0 currentDomain:(id)a1 tag:(id)a2;
- (void)saveParamsFromResponse:(id)a0;
- (void)startRequest:(id)a0 tag:(id)a1;
- (void)theTimeIsUp;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)dealloc;

@end
