@class ACCChapterPointsTimeLineAdjustState, DVETrackPanelContext, UIImageView, CADisplayLink, UIView, NSMutableArray, ACCChapterPointsTimeLineCurrentView;
@protocol ACCChapterPointsTimeLineAdjustViewDelegate;

@interface ACCChapterPointsTimeLineAdjustView : UIView

@property (retain, nonatomic) NSMutableArray *chapterLineBetweenViews;
@property (retain, nonatomic) NSMutableArray *chapterTimeStamps;
@property (retain, nonatomic) UIView *currentBetweenView;
@property (nonatomic) unsigned long long currentBetweenViewIndex;
@property (retain, nonatomic) UIImageView *adjustView;
@property (retain, nonatomic) CADisplayLink *panDisplayLink;
@property (retain, nonatomic) ACCChapterPointsTimeLineCurrentView *currentChapterView;
@property (retain, nonatomic) ACCChapterPointsTimeLineAdjustState *panState;
@property (retain, nonatomic) DVETrackPanelContext *trackPanelContext;
@property (weak, nonatomic) id<ACCChapterPointsTimeLineAdjustViewDelegate> delegate;

- (void)updateProgress:(double)a0 animated:(BOOL)a1;
- (void)removeChapterPointTimestamp:(long long)a0;
- (id)handlerView;
- (void)addChapterPointTimestamp:(long long)a0;
- (void)removeAllChapters;
- (void)handleAdjustGesturePan:(id)a0;
- (void)p_adjustFrontViews;
- (void)currentChapterIndexChangeTo:(long long)a0;
- (void)p_locateCurrentChapterViewWithPanGestureRecognizer:(id)a0;
- (double)p_moveSpeed:(double)a0;
- (void)p_setupPanCADisplayLink;
- (void)p_pausePanCADisplayLink;
- (void)p_adjustForLocation;
- (void)handlePanEdgeIntersection;
- (void)p_adjustGesturePanBegan:(id)a0;
- (void)p_adjustGesturePanChange:(id)a0;
- (void)p_adjustGesturePanEnd:(id)a0;
- (void)updateHandlerViews;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
