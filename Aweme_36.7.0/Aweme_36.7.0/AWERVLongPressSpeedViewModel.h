@class AWEFeedLongPressRatePlayView, NSString, NSTimer, AWERVLongPressGuideView, UIView, AWERVDetailPageContext, AWEAwemeModel;

@interface AWERVLongPressSpeedViewModel : NSObject

@property (nonatomic) BOOL currentIsImmersionMode;
@property (retain, nonatomic) AWEFeedLongPressRatePlayView *ratePlayView;
@property (retain, nonatomic) AWERVLongPressGuideView *longPressGuideView;
@property (retain, nonatomic) NSTimer *guideTimer;
@property (nonatomic) long long callbackCount;
@property (copy, nonatomic) NSString *enterMethodBeforeLongPress;
@property (weak, nonatomic) AWERVDetailPageContext *context;
@property (weak, nonatomic) UIView *superView;
@property (nonatomic) struct CGPoint { double x; double y; } tappedPointWhenLongPressStart;
@property (weak, nonatomic) AWEAwemeModel *model;

- (void)bindEvent;
- (void)trackSpeedModePlayTimeWithLongPressStart:(BOOL)a0;
- (id)initWithModel:(id)a0 context:(id)a1 superView:(id)a2;
- (void)startGuideTimerIfNeeded;
- (BOOL)isShowingLongPressGuideView;
- (void)hideLongPressGuideIfNeed;
- (void)hideRatePlayIfNeed;
- (void)storeStatus;
- (void)resumeStatus;
- (void)showLongPressGuideIfNeed;
- (BOOL)handleLongPress:(id)a0;
- (void).cxx_destruct;
- (void)invalidateTimer;

@end
