@class NSOperationQueue;

@interface AWEIMICloudAssetLoader : NSObject

@property (retain, nonatomic) NSOperationQueue *iCloudLoaderQueue;

- (id)loadAssetWithAssetIdentifier:(id)a0 loadLivePhotoImageAsVideoSource:(BOOL)a1 messageId:(id)a2 progressHandler:(id /* block */)a3 completion:(id /* block */)a4;
- (id)loadAssetWithAssetIdentifier:(id)a0 messageId:(id)a1 progressHandler:(id /* block */)a2 completion:(id /* block */)a3;
- (void)cancelOperationWithMessageId:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
