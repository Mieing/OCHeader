@class NSString, UIImage;

@interface AWEIMICloudAssetLoaderOperation : NSOperation {
    BOOL _finished;
    BOOL _executing;
}

@property (copy, nonatomic) NSString *assetIdentifier;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) NSString *messageId;
@property (nonatomic) BOOL loadAsVideo;
@property (retain, nonatomic) UIImage *image;

- (void)markFinish;
- (void)loadAssetFromICloud:(id)a0 loadLivePhotoImageAsVideoSource:(BOOL)a1 progressHandler:(id /* block */)a2 completion:(id /* block */)a3;
- (void)fetchLivePhotoResouceUsingNetworkByAsset:(id)a0 complete:(id /* block */)a1;
- (id)livePhotoRequestOptions;
- (id)initWithAssetIdentifier:(id)a0 loadLivePhotoImageAsVideoSource:(BOOL)a1 messageId:(id)a2 progressHandler:(id /* block */)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (BOOL)isAsynchronous;
- (void)start;
- (BOOL)isExecuting;
- (BOOL)isFinished;

@end
