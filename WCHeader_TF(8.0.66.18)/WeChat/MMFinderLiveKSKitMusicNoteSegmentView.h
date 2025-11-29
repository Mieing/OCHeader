@class UIColor, NSMutableArray, CADisplayLink;

@interface MMFinderLiveKSKitMusicNoteSegmentView : UIView

@property (retain, nonatomic) NSMutableArray *musicNoteLineList;
@property (nonatomic) double currMaxContentWidth;
@property (nonatomic) int beginTimeOffset;
@property (nonatomic) int endTimeOffset;
@property (nonatomic) BOOL isAnimating;
@property (readonly, nonatomic) BOOL isStartMoveOffsetMonitor;
@property (copy, nonatomic) id /* block */ moveOffsetChangeCallback;
@property (retain, nonatomic) CADisplayLink *monitorDisplayLink;
@property (copy, nonatomic) id /* block */ moveCompletion;
@property (retain, nonatomic) UIColor *notesColor;

- (id)initWithMusicNotes:(id)a0;
- (void)createMusicNoteLines:(id)a0;
- (void)addMusicNoteLinesToView;
- (void)layoutSubviews;
- (void)layoutMusicNoteLines;
- (double)preferWidth;
- (double)currentRight;
- (void)monitorSegmentMoveOffsetChange:(id /* block */)a0;
- (void)cancelMonitorSegmentMoveOffsetChange;
- (void)startMove:(double)a0 completion:(id /* block */)a1;
- (void)startMoveOffsetMonitorIfNeed;
- (void)onMoveOffsetMonitorDisplaylink:(id)a0;
- (void)cancelMoveOffsetMonitor;
- (void)onMoveCompleted;
- (void).cxx_destruct;

@end
