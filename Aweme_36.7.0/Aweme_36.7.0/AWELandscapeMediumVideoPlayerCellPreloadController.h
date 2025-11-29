@class AWEMediumVideoPreloadManager, AWELandscapeFeedViewController, NSString;

@interface AWELandscapeMediumVideoPlayerCellPreloadController : NSObject <AWEFeedPreloadManagerDelegate>

@property (nonatomic) long long scheduledPreloadIndex;
@property (weak, nonatomic) AWELandscapeFeedViewController *viewController;
@property (retain, nonatomic) AWEMediumVideoPreloadManager *videoPreloadManager;
@property (nonatomic) BOOL enableVideoPreload;
@property BOOL lastPreloadCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pausePreloadStrategy;
- (void)resumePreloadStrategy;
- (void)setupVideoPreload;
- (void).cxx_destruct;
- (void)play;
- (id)initWithViewController:(id)a0;
- (void)stop;

@end
