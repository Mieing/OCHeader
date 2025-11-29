@class AWEVideoPublishViewModel, NSString, NSNumber, AVAssetExportSession, AWEAVMutableCompositionBuilder, AWEAssetModel;
@protocol AWEStudioMusicModelProtocol;

@interface AWESingleVideoAutoClipper : NSObject

@property (retain, nonatomic) AWEAssetModel *assetModel;
@property (retain, nonatomic) id<AWEStudioMusicModelProtocol> music;
@property (retain, nonatomic) AWEAVMutableCompositionBuilder *compositionBuilder;
@property (retain, nonatomic) AVAssetExportSession *exportSession;
@property (retain, nonatomic) NSString *tmpVideoPath;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) NSNumber *customerClipDuration;
@property (copy, nonatomic) id /* block */ clipCompletion;

+ (double)videoMinSeconds;
+ (void)getMusicFromOriginAsset:(id)a0 completion:(id /* block */)a1;
+ (BOOL)optimizeSingleVideoImportForAsset:(id)a0 error:(id *)a1;
+ (BOOL)canClipWithoutTrimingScreenWithAssetModel:(id)a0 storyMode:(BOOL)a1;
+ (id)generatePublishModel;
+ (BOOL)shouldShowTipsForAutoClip;
+ (double)autoClipSeconds;
+ (id)clip:(id)a0 isStoryMode:(BOOL)a1;
+ (double)videoMaxSeconds;

- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })rotateTransform:(float *)a0;
- (id)p_outputURLWithFileRemove;
- (void)setupExportSessionWithPassthrough:(BOOL)a0;
- (void)AIRecommendMusicAppendFramesWithClipRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (void)releaseExportSession;
- (void)ttmonitorClipTimeTooShort:(long long)a0 clipTime:(double)a1 videoTime:(double)a2;
- (void)setupExportSessionRemoveTotalSpeedForHighFrameRate;
- (void)trackClipSuccessRate;
- (void)p_exportWithSuccess:(id /* block */)a0 failure:(id /* block */)a1 successOrFailure:(id /* block */)a2;
- (void)setupExportSession;
- (id)initWithAssetModel:(id)a0 customerClipDuration:(id)a1;
- (void)setupVideoSavePath;
- (void)handleExport;
- (void)_handleExport;
- (BOOL)_handleFastImportIfAvaiable;
- (void)handleHighFrameRate;
- (void)normalExport;
- (void)trackSingleFastImport:(BOOL)a0;
- (void)AIRecommendMusicAppendFramesWithSuccess:(BOOL)a0;
- (id)coverImageWithAsset:(id)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 radians:(double)a2;
- (void)handleCompletionWithAsset:(id)a0 importTransform:(id)a1 coverImage:(id)a2;
- (BOOL)isCustomerClipMode;
- (void)handleCompletion:(id)a0 importTransform:(id)a1 coverImage:(id)a2;
- (void)handleExportErrorWithLoadingView:(id)a0;
- (void)checkVideoWithURL:(id)a0 clipRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 loadingView:(id)a2;
- (double)getRealMaxClipSeconds;
- (void)ttmonitorPerformance:(id)a0;
- (id)coverImageWithAsset:(id)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)reExportWithURL:(id)a0 clipRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 loadingView:(id)a2;
- (void)exportOnCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
