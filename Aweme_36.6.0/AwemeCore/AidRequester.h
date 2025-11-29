@class NSString;
@protocol AidProtocolDelegate;

@interface AidRequester : NSObject {
    id<AidProtocolDelegate> mAidDelegate;
    NSString *mOldAid;
    NSString *mAppName;
}

+ (id)postUrl:(id)a0 token:(id)a1 utdid:(id)a2 oldAid:(id)a3;
+ (id)aidFromJson:(id)a0 oldAid:(id)a1;
+ (BOOL)isContainStr:(id)a0 contain:(id)a1;

- (void)URLSession:(id)a0 downloadTask:(SEL)a1 didFinishDownloadingToURL:(void /* unknown type, empty encoding */)a2;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (void)URLSession:(id)a0 dataTask:(id)a1 didBecomeDownloadTask:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)_flex_swizzle_64a98d7_connection:(id)a0 didFailWithError:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)_flex_swizzle_505016f_connection:(id)a0 didReceiveData:(id)a1;
- (id)connection:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (id)postRest:(id)a0 token:(id)a1 utdid:(id)a2 oldAid:(id)a3;
- (void)postRestAsync:(id)a0 token:(id)a1 utdid:(id)a2 oldAid:(id)a3 aidDelegate:(id)a4;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void).cxx_destruct;
- (void)connection:(id)a0 didFailWithError:(id)a1;

@end
