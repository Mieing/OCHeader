@class NSString, NSMutableDictionary, NSMutableArray;

@interface AWEDeepLinkPathManager : NSObject <NSURLSessionDelegate>

@property (retain, nonatomic) NSMutableDictionary *pathInfoDic;
@property (readonly, nonatomic) NSMutableArray *pathInfoList;
@property (copy, nonatomic) id /* block */ short2longResponseBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)unwrapShortURLString:(id)a0 completion:(id /* block */)a1;
+ (void)registerPath:(id)a0 toHandler:(id /* block */)a1;
+ (void)registerPath:(id)a0 rangeOffset:(unsigned long long)a1 limitHost:(BOOL)a2 toHandler:(id /* block */)a3;
+ (void)registerPath:(id)a0 rangeOffset:(unsigned long long)a1 toHandler:(id /* block */)a2;
+ (void)registerPaths:(id)a0 toHandler:(id /* block */)a1;
+ (void)registCustomDeepLinkPaths;
+ (id)defaultAllowedHostList;
+ (void)registerPath:(id)a0 rangeOffset:(unsigned long long)a1 limitHost:(BOOL)a2 hostList:(id)a3 toHandler:(id /* block */)a4;
+ (id)pathFromURL:(id)a0;
+ (BOOL)isHost:(id)a0 inAllowedList:(id)a1;
+ (id)subPathFromPath:(id)a0 offset:(unsigned long long)a1;
+ (BOOL)isDomain:(id)a0 containingSubDomain:(id)a1;
+ (id)handleURL:(id)a0;
+ (id)sharedInstance;

- (void)URLSession:(id)a0 downloadTask:(SEL)a1 didFinishDownloadingToURL:(void /* unknown type, empty encoding */)a2;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (void)URLSession:(id)a0 dataTask:(id)a1 didBecomeDownloadTask:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)_flex_swizzle_1bd11670_URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (id)connection:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;

@end
