@class DVETrackPanelContext;

@interface DVEMediaTimelineScaleHandler : NSObject

@property (retain, nonatomic) DVETrackPanelContext *context;
@property (nonatomic) double scaleThreshold;
@property (nonatomic) double previousScale;

- (void)pinchGestureRegonized:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
