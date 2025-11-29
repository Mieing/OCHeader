@class TTHttpTask, NSMutableArray, NSString;

@interface AWELiveFeedEffectResourceManager : NSObject

@property (retain, nonatomic) TTHttpTask *openCoinTask;
@property (retain, nonatomic) NSMutableArray *openCoinResourceRequests;
@property (copy, nonatomic) NSString *openCoinResourcePath;

+ (id)defaultManager;

- (id)openCoinDownloadCache;
- (void)unzipResource:(id)a0 toDestination:(id)a1 completion:(id /* block */)a2;
- (void)downloadOpenCoinResource;
- (void)getOpenCoinEffectResourcePathCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
