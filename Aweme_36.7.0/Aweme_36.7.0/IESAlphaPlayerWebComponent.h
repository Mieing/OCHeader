@class NSString, NSURL, UIView, IESLiveVideoGiftController;

@interface IESAlphaPlayerWebComponent : BDNativeWebBaseComponent <IESLiveVideoGiftControllerDelegate>

@property (retain, nonatomic) IESLiveVideoGiftController *videoController;
@property (retain, nonatomic) UIView *containerView;
@property (copy, nonatomic) NSString *src;
@property (nonatomic) BOOL loop;
@property (nonatomic) unsigned long long loopCount;
@property (nonatomic) long long videoWidth;
@property (nonatomic) long long videoHeight;
@property (nonatomic) BOOL resourceIsCache;
@property (retain, nonatomic) NSURL *videoURL;
@property (copy, nonatomic) NSString *resourceDir;
@property (nonatomic) BOOL hasDownload;
@property (nonatomic) double startLoadTimeStamp;
@property (nonatomic) BOOL enableAsyncRender;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)nativeTagName;
+ (id)nativeTagVersion;

- (void)didFinishPlayingWithError:(id)a0;
- (void)videoGiftController:(id)a0 isReadyToPlayOnView:(id)a1;
- (void)resumeVideo;
- (id)insertInNativeContainerObject:(id)a0 params:(id)a1;
- (void)updateInNativeContainerObject:(id)a0 params:(id)a1;
- (void)prepareVideoWithURL:(id)a0;
- (id)alphaPlayerCacheDirectory:(id)a0;
- (id)defaultVideoName;
- (void)addConfigToDir:(id)a0;
- (void)playVideoIfVideoPrepared;
- (void)fetchVideoInfo:(id)a0;
- (void)loadResourceWithURL:(id)a0 completion:(id /* block */)a1;
- (id)alphaPlayerRootDirectory;
- (void)seekToVideo:(double)a0;
- (void)releaseVideo;
- (id)getVideoDuration;
- (id)alphaPlayerVideoPath:(id)a0;
- (BOOL)hasCacheForURL:(id)a0;
- (void).cxx_destruct;
- (BOOL)isVideoPlaying;
- (void)pauseVideo;
- (void)stopVideo;

@end
