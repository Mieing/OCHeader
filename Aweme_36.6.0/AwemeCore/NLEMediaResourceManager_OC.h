@interface NLEMediaResourceManager_OC : NSObject

+ (void)registerDownloaderImpl:(id)a0;
+ (void)unregisterDownloaderImpl;
+ (void)prepareNecessaryResource:(id)a0 prefetch:(id /* block */)a1 block:(id /* block */)a2 fail:(id /* block */)a3;
+ (id)unwrapURS:(id)a0;

@end
