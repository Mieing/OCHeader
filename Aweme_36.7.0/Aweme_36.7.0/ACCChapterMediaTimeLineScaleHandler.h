@class DVETrackPanelContext;

@interface ACCChapterMediaTimeLineScaleHandler : NSObject

@property (retain, nonatomic) DVETrackPanelContext *context;
@property (nonatomic) double previousTimeScale;
@property (nonatomic) double minTimeScale;
@property (nonatomic) double scaleThreshold;
@property (nonatomic) double previousScale;

- (double)calculateMinTimeScale;
- (void)pinchGestureRecognized:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
