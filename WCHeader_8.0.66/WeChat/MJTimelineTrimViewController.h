@class MJPublisherButton, MJTimelineViewController;

@interface MJTimelineTrimViewController : UIViewController

@property (retain, nonatomic) MJTimelineViewController *timelineVC;
@property (retain, nonatomic) MJPublisherButton *quickAdjustButton;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } initialTimeRange;
@property (readonly, nonatomic) BOOL hasChanges;

- (id)initWithTimelineViewModel:(id)a0 playbackViewModel:(id)a1;
- (void)viewDidLoad;
- (void)setupViews;
- (void)layoutViews;
- (void)quickAdjustTouchUpInside:(id)a0;
- (void)quickAdjustTimeRangeToTimeline;
- (void)quickAdjustTimeRangeToSegment;
- (void).cxx_destruct;

@end
