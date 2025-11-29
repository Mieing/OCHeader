@class ACCChapterMediaTimelineView, DVETrackPanelContext;

@interface ACCChapterTimeLineController : UIViewController

@property (weak, nonatomic) DVETrackPanelContext *vcContext;
@property (nonatomic) BOOL isChapterPoints;
@property (retain, nonatomic) ACCChapterMediaTimelineView *timeLineView;

- (id)initWithContext:(id)a0 isChapterPoints:(BOOL)a1;
- (void)refreshContext:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupUI;

@end
