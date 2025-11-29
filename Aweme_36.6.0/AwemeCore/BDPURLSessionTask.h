@class BDPUploadTaskOutputStream, NSData, BDPMultiRequestBody, NSURLSessionTaskMetrics, NSString, NSInputStream, NSProgress, NSMutableData, NSURLSessionTask, NSIndexSet;

@interface BDPURLSessionTask : NSObject <BDPNetworkTaskProtocol, NSURLSessionDelegate, NSURLSessionDataDelegate, NSURLSessionTaskDelegate, NSURLSessionDownloadDelegate>

@property (retain, nonatomic) NSProgress *innerProgress;
@property (nonatomic) BOOL didFinishDownload;
@property (copy, nonatomic) NSIndexSet *acceptableStatusCodes;
@property (retain, nonatomic) NSInputStream *inputStream;
@property (retain, nonatomic) BDPUploadTaskOutputStream *outputStream;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) BOOL isFirst;
@property (retain, nonatomic) NSMutableData *receivedData;
@property (nonatomic) BOOL callbackToDelegate;
@property (retain, nonatomic) NSURLSessionTask *sessionTask;
@property (retain, nonatomic) BDPMultiRequestBody *requestBody;
@property (nonatomic) struct multiPartFormDataIndexInfo { unsigned long long partIndex; unsigned long long partHadSentDataLength; BOOL isFinish; } info;
@property (nonatomic) id *progress;
@property (copy, nonatomic) id /* block */ downloadCompletionHandler;
@property (copy, nonatomic) id /* block */ chunkedBinaryCompletionHandler;
@property (copy, nonatomic) id /* block */ downloadDataCallback;
@property (copy, nonatomic) id /* block */ downloadHeaderCallback;
@property (copy, nonatomic) id /* block */ uploadTaskCompletionHandler;
@property (copy, nonatomic) id /* block */ willPerformRedirectionCallback;
@property (retain, nonatomic) NSURLSessionTaskMetrics *metrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_flex_swizzle_5b798829_URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void)_flex_swizzle_eec23121_URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (void)URLSession:(id)a0 dataTask:(id)a1 didBecomeDownloadTask:(id)a2;
- (void)_flex_swizzle_7cde4c70_URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)_flex_swizzle_2bd4045b_URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)_flex_swizzle_8a0068e9_URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)_flex_swizzle_9576c674_URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (id)connection:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (BOOL)validateResponse:(id)a0 error:(id *)a1;
- (id)initWithMultiRequestBody:(id)a0;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 needNewBodyStream:(id /* block */)a2;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)suspend;
- (id)init;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (void)URLSession:(id)a0 task:(id)a1 didSendBodyData:(long long)a2 totalBytesSent:(long long)a3 totalBytesExpectedToSend:(long long)a4;
- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void)resume;
- (void)finishTask;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)cancel;

@end
