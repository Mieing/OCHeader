@class NSMutableDictionary;

@interface CGFileNetwork : NSObject

@property (retain, nonatomic) NSMutableDictionary *retryCache;

+ (void)uploadImage:(id)a0 item:(id)a1 progressBlock:(id /* block */)a2 completion:(id /* block */)a3;
+ (void)downloadFileWithURL:(id)a0 item:(id)a1 progressBlock:(id /* block */)a2 completion:(id /* block */)a3;
+ (id)requestDownloadFilePathWithHttpURL:(id)a0;
+ (void)downloadFileWithURL:(id)a0 item:(id)a1 retryCount:(long long)a2 progressBlock:(id /* block */)a3 completion:(id /* block */)a4;
+ (id)sharedInstance;

- (void).cxx_destruct;

@end
