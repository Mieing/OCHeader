@class NSMutableDictionary, MMFinderLiveScreenshotPosterView, UIImage, MMFinderLiveTaskId, NSMutableArray, MMFinderLiveScreenshotPosterImages;

@interface MMFinderLiveScreenshotPosterLogic : NSObject

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (nonatomic) unsigned long long screenshotRequestUnixEpochTime;
@property (nonatomic) unsigned long long screenshotStatus;
@property (nonatomic) BOOL keyboardVisible;
@property (nonatomic) BOOL supportGlobalScreenshot;
@property (copy, nonatomic) id /* block */ screenShotProcessCallback;
@property (retain, nonatomic) UIImage *screenshot;
@property (retain, nonatomic) UIImage *posterScreenshot;
@property (retain, nonatomic) NSMutableArray *associatedImages;
@property (retain, nonatomic) NSMutableArray *primaryImageMaskingDescriptors;
@property (retain, nonatomic) NSMutableDictionary *posterImageConfigurations;
@property (readonly, nonatomic) BOOL screenshotRequested;
@property (readonly, nonatomic) MMFinderLiveScreenshotPosterImages *images;
@property (retain, nonatomic) MMFinderLiveScreenshotPosterView *currentPosterView;

- (id)initWithTaskId:(id)a0;
- (void)dealloc;
- (BOOL)isScreenshotPosterAvailable;
- (void)commitPixelBuffer:(struct __CVBuffer { } *)a0;
- (void)addAssociatedImage:(id)a0;
- (void)addPrimaryImageMaskingDescriptor:(id)a0;
- (void)setPosterImageConfigurationValue:(id)a0 withKey:(id)a1;
- (void)onCreateScreenShotInfo:(id *)a0;
- (void)didTakeSnapshot:(id)a0;
- (void)keyboardDidShow:(id)a0;
- (void)keyboardDidHide:(id)a0;
- (void)makeLiveScreenshotPoster;
- (void)invalidateScreenshot;
- (id)liveTask;
- (void).cxx_destruct;

@end
