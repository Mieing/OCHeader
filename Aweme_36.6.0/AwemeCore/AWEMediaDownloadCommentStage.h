@class NSProgress, NSMutableArray, NSObject;
@protocol OS_dispatch_group;

@interface AWEMediaDownloadCommentStage : AWEMediaDownloadAwemeStage

@property (nonatomic) double imageProgress;
@property (nonatomic) double videoProgress;
@property (retain, nonatomic) NSProgress *progress;
@property (nonatomic) BOOL hasRegisteredObserver;
@property (retain, nonatomic) NSMutableArray *resultQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *dispatchGroup;

- (void)downloadImage;
- (id)commentConfig;
- (void)finishThenContinue;
- (void)downloadVideoWithURLList:(id)a0;
- (void)failedThenContinueWithError:(id)a0;
- (void)downloadLivePhoto;
- (void)handleImageDownload;
- (void)handleLivePhotoVideoDownload;
- (id)commentImageModel;
- (void)handleProgressChange;
- (void).cxx_destruct;
- (void)run;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (id)getImageURL:(id)a0;

@end
