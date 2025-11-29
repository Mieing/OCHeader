@class NSString, NSURLSession;

@interface GameCenterPrefetchManager : MMUserService <MMServiceProtocol, NSURLSessionDelegate>

@property (retain, nonatomic) NSURLSession *urlSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)prefetchUrlModel:(id)a0;
- (void)prefetchUrlArray:(id)a0;
- (void).cxx_destruct;

@end
