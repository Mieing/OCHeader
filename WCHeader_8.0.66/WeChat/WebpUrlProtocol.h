@class NSURLSession, NSString, NSMutableData, NSURLRequest;
@protocol NSURLProtocolClient, WKURLSchemeTask;

@interface WebpUrlProtocol : NSURLProtocol <NSURLSessionDataDelegate>

@property (retain, nonatomic) id<WKURLSchemeTask> schemeTask;
@property (copy, nonatomic) NSURLRequest *originRequest;
@property (copy, nonatomic) NSURLRequest *realRequest;
@property (weak, nonatomic) id<NSURLProtocolClient> realClient;
@property (retain, nonatomic) NSURLSession *session;
@property (retain, nonatomic) NSMutableData *imageData;
@property (nonatomic) double timeDownload;
@property (nonatomic) double timeDecode;
@property (nonatomic) double timeFinish;
@property (nonatomic) BOOL cancel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)wa_web_registerWebpScheme;
+ (void)wa_web_unregisterWebpScheme;
+ (BOOL)isWebpUrlRequest:(id)a0;
+ (BOOL)canInitWithRequest:(id)a0;
+ (id)canonicalRequestForRequest:(id)a0;

- (void)dealloc;
- (void)startLoadingBySchemeTask:(id)a0 client:(id)a1;
- (void)startLoading;
- (void)innerLoading;
- (void)stopLoading;
- (void)responseData:(id)a0;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void).cxx_destruct;

@end
