@class MMFinderLiveScreenshotPosterView, NSString, MMFinderLiveScreenshotPosterImages;

@interface MMFinderLiveScreenshotPosterViewController : MMLiveRoundButtonsPosterViewController <MMLivePosterReporting>

@property (retain, nonatomic) MMFinderLiveScreenshotPosterImages *images;
@property (retain, nonatomic) MMFinderLiveScreenshotPosterView *posterView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0 images:(id)a1;
- (id)backdropColor;
- (void)fetchScreenshotPosterInfoWithCompletionBlock:(id /* block */)a0;
- (id)createPosterViews;
- (void)willAppear;
- (id)reporter;
- (BOOL)supportsLandscape;
- (void)onCancelButtonInvoked;
- (void)onSaveImageButtonInvoked;
- (void)onShareButtonInvoked;
- (void)onSharedSuccessfullyToChatWithUsernames:(id)a0;
- (void)onSharedSuccessfullyToMoments;
- (void)onSharedSuccessfullyToMiscellaneousTargets;
- (id)liveTask;
- (id)audienceLogReporter;
- (void).cxx_destruct;

@end
