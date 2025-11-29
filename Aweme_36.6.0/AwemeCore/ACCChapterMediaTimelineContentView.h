@class ACCChapterVideoTrackPreviewView, NSString, UIView, NSMutableArray, DVETrackPanelContext;
@protocol ACCChapterVideoTrackPreviewTransitionDelegate;

@interface ACCChapterMediaTimelineContentView : UIView <DVEVideoTrackPreviewDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) ACCChapterVideoTrackPreviewView *videoTrackView;
@property (retain, nonatomic) UIView *progressBar;
@property (retain, nonatomic) NSMutableArray *pointViews;
@property (nonatomic) BOOL isChapterPoints;
@property (retain, nonatomic) DVETrackPanelContext *context;
@property (weak, nonatomic) id<ACCChapterVideoTrackPreviewTransitionDelegate> transitionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeChapterPointTimestamp:(long long)a0;
- (void)setupVideArea;
- (void)setupProgressBar;
- (id)initWithContext:(id)a0 isChapterPoints:(BOOL)a1;
- (void)didChangePanSegmentWithView:(id)a0 offset:(double)a1;
- (void)videoTrackPreview:(id)a0 didSelectSegment:(id)a1 clip:(BOOL)a2;
- (void)addChapterPointTimestamp:(long long)a0;
- (void)removeAllChapters;
- (void).cxx_destruct;
- (void)refreshUI;
- (void)setupUI;

@end
