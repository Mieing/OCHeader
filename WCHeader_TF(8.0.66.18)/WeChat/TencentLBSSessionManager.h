@class NSURLSessionConfiguration, NSURLSession;

@interface TencentLBSSessionManager : NSObject

@property (retain, nonatomic) NSURLSession *session;
@property (retain, nonatomic) NSURLSessionConfiguration *sessionConfiguration;

+ (id)sharedInstance;

- (id)init;
- (id)initWithSessionConfiguration:(id)a0;
- (void)dataTaskWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
