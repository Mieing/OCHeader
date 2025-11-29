@class WCEditVideoPushPopTransition;

@interface WCEmoticonCropTimeOnlyViewController : WCEditVideoViewController

@property (retain, nonatomic) WCEditVideoPushPopTransition *customTransitionDelegate;
@property (nonatomic) struct CGSize { double width; double height; } videoSize;

- (void)setupTransitioningDelegate;
- (void)viewDidLoad;
- (void)showEditVideoViewOn:(id)a0;
- (double)getMaxDuration;
- (float)getOutputTime;
- (double)getMinDuration;
- (BOOL)isExceedTimelineTimeLimit;
- (struct CGSize { double x0; double x1; })getFallbackVideoSize;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })getEditedVideoTimeRange;
- (void)onCropDone:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (void).cxx_destruct;

@end
