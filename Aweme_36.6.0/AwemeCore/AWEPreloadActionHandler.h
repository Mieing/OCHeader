@interface AWEPreloadActionHandler : NSObject

+ (void)preloadDataWithModel:(id)a0 group:(id)a1 preloadSize:(long long)a2 banPreload:(BOOL)a3 completion:(id /* block */)a4;
+ (void)cancelPreloadWithGroup:(id)a0;
+ (id)preloaderForModel:(id)a0;
+ (void)cancelAllPreload;
+ (void)__preloadActionWithModel:(id)a0 bsModel:(id)a1 group:(id)a2 urlModel:(id)a3 preloadSize:(long long)a4 completion:(id /* block */)a5;

@end
