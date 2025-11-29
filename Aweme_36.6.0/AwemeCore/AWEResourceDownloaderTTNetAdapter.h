@class NSObject;
@protocol OS_dispatch_queue;

@interface AWEResourceDownloaderTTNetAdapter : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataHandlerSerialQueue;

- (id)allCookieString;
- (id)downloadFileWithURLs:(id)a0 savePath:(id)a1 channel:(id)a2 needCookie:(BOOL)a3 progress:(id /* block */)a4 completion:(id /* block */)a5;
- (void)notifyProgress:(id)a0 progress:(id /* block */)a1;
- (void).cxx_destruct;

@end
