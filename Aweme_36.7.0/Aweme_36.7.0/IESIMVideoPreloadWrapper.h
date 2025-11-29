@protocol IESVideoPreloadProtocol;

@interface IESIMVideoPreloadWrapper : NSObject <IESIMVideoPreloadWrapperProtocol>

@property (retain, nonatomic) id<IESVideoPreloadProtocol> preloader;

- (void)preloadVideoID:(id)a0 andVideoURL:(id)a1 preloadSize:(unsigned long long)a2 group:(id)a3 fileCs:(id)a4 urlKey:(id)a5 tag:(id)a6 successBlock:(id /* block */)a7 failureBlock:(id /* block */)a8 cancelBlock:(id /* block */)a9;
- (void)getTaskCacheVideoID:(id)a0 andVideoURL:(id)a1 urlKey:(id)a2 block:(id /* block */)a3;
- (id)initWithIESVideoPreloader:(id)a0;
- (void).cxx_destruct;

@end
