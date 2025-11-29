@class NSOperationQueue, IESLiveGameOpenPlatformHTTPSessionManager;

@interface IESLiveGameOpenPlatformRequestDispatchQueue : NSObject

@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) IESLiveGameOpenPlatformHTTPSessionManager *httpSessionManager;

- (unsigned long long)requestWithRequestModel:(id)a0;
- (id)initWithHTTPSessionManager:(id)a0;
- (void).cxx_destruct;

@end
