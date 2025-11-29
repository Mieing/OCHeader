@class UILabel, UIView;

@interface AWEDPlayerProgressElement : AWEDPlayerInteractionBaseElement

@property (retain, nonatomic) UILabel *currentTimeLabel;
@property (retain, nonatomic) UILabel *totalTimeLabel;
@property (retain, nonatomic) UIView *progressContainer;
@property (retain, nonatomic) UIView *playedView;
@property (retain, nonatomic) UIView *bufferView;
@property (retain, nonatomic) UIView *thumbView;
@property (nonatomic) double totalTime;
@property (nonatomic) double playTime;
@property (nonatomic) double seekingToTime;
@property (nonatomic) BOOL isSliding;
@property (nonatomic) BOOL shouldResponseGesture;

- (void)player:(id)a0 updatePlayTime:(double)a1 canPlayTime:(double)a2 totalTime:(double)a3;
- (id)activateInfoWithData:(id)a0;
- (BOOL)shouldResponseGestureRecognizer:(id)a0;
- (BOOL)handleResponseGestureRecognizer:(id)a0;
- (void)updateForSimplePlayerWithVideoModel:(id)a0;
- (id)activateInfoForSimplePlayerWithVideoModel:(id)a0;
- (void)handleProgressViewPanBegin:(double)a0;
- (void)handleProgressViewPanEnd:(double)a0;
- (BOOL)isPointInProgressContainer:(struct CGPoint { double x0; double x1; })a0;
- (double)targetTimeWithOffset:(double)a0;
- (void)handleProgressViewPanChanging:(double)a0;
- (void)updateProgressWithPlayTime:(double)a0 canPlayTime:(double)a1 totalTime:(double)a2 animted:(BOOL)a3;
- (void)updatePlayTime:(double)a0 animated:(BOOL)a1;
- (void)handleResponseTapGesture:(id)a0;
- (void)handleResponsePanGesture:(id)a0;
- (void)playerWillLoopPlaying:(id)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)reset;
- (void)viewDidLoad;
- (BOOL)isSeekingToTime;

@end
