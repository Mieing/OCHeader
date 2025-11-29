@class NSMutableDictionary, NSDictionary, NSString, NSURLSessionDataTask, NSObject, NSError;
@protocol OS_dispatch_queue;

@interface BDCastStreamProducer : NSObject <NSURLSessionDataDelegate>

@property (retain, nonatomic) NSURLSessionDataTask *dataTask;
@property (copy, nonatomic) NSDictionary *headers;
@property (nonatomic) long long statusCode;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *dataPool;
@property unsigned long long dataIndex;
@property unsigned long long consumedDataIndex;
@property unsigned long long bufferedDataSize;
@property unsigned long long consumedDataLength;
@property (copy, nonatomic) id /* block */ streamDataAvailableBlock;
@property (nonatomic) unsigned long long maxBufferSize;
@property (nonatomic) BOOL requestCompleted;
@property (retain, nonatomic) NSError *requestCompletedError;
@property (nonatomic) BOOL firstResumeCalled;
@property (copy, nonatomic) NSString *requestId;
@property (copy, nonatomic) id /* block */ dataPrepared;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 downloadTask:(SEL)a1 didFinishDownloadingToURL:(void /* unknown type, empty encoding */)a2;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (void)URLSession:(id)a0 dataTask:(id)a1 didBecomeDownloadTask:(id)a2;
- (void)_flex_swizzle_6bf55fb3_URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)_flex_swizzle_cf4642e4_URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)_flex_swizzle_bf9d83c9_URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (id)connection:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (void)consumeDataIfNecessary;
- (id)getHeadersFromResponse:(id)a0;
- (long long)getStatusCodeFromResponse:(id)a0;
- (id)initWithURL:(id)a0 method:(id)a1 headers:(id)a2 maxBufferSize:(unsigned long long)a3;
- (void)readDataWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)stop;
- (void)addData:(id)a0;
- (void)dealloc;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;

@end
