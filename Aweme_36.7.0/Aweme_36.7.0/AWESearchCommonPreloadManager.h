@protocol AWESearchCommonPreloaderProtocol;

@interface AWESearchCommonPreloadManager : NSObject

@property (retain, nonatomic) id<AWESearchCommonPreloaderProtocol> preloader;
@property (weak, nonatomic) id hostVC;

- (void)preloadWithScene:(unsigned long long)a0 params:(id)a1 completion:(id /* block */)a2;
- (BOOL)checkRequiredParams:(id)a0 inputParams:(id)a1;
- (void)batchPreloadWithPreloadInfos:(id)a0;
- (void).cxx_destruct;

@end
