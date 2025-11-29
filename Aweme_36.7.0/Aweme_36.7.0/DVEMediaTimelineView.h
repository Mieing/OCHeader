@class NSString, DVEComplementaryFrameContext, NSValue, DVEMediaTimelineContentView, DVETrackPanelContext;
@protocol DVEMediaTimelineViewDelegate;

@interface DVEMediaTimelineView : UIScrollView <UIScrollViewDelegate, DVEMediaTimelineContentViewDelegate>

@property (class, readonly, nonatomic) double centerY;
@property (class, readonly, nonatomic) double centerY2;

@property (retain, nonatomic) DVEComplementaryFrameContext *frameContext;
@property (nonatomic) double lastProgress;
@property (nonatomic) BOOL dragScrolling;
@property (nonatomic) BOOL isViewDidLayout;
@property (nonatomic) BOOL nextDidScrollUseNoSmooth;
@property (retain, nonatomic) NSValue *nextDidScrollOffset;
@property (retain, nonatomic) DVEMediaTimelineContentView *containerView;
@property (weak, nonatomic) DVETrackPanelContext *context;
@property (weak, nonatomic) id<DVEMediaTimelineViewDelegate> timelineDelegate;
@property (nonatomic) double previousTimeScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)didTapVoiceSwitch;
- (void)contentOffsetDidUpdate:(struct CGPoint { double x0; double x1; })a0;
- (void)updateContentOffsetByTime:(double)a0;
- (void)contentOffsetDidUpdate:(struct CGPoint { double x0; double x1; })a0 offsetType:(unsigned long long)a1 animate:(BOOL)a2 isSmooth:(BOOL)a3;
- (void)draftDidUpdate;
- (void)updateScrollSource;
- (BOOL)canSeekTime:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })seekTimeWithScrollview:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)initWithContext:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (double)contentWidth;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (double)currentProgress;
- (void)setupUI;
- (void)updateProgress:(double)a0;
- (void)addObservers;

@end
