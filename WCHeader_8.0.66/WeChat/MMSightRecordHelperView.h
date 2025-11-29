@class MMSightRecordView, MMUIView, MMCircularProgressView;
@protocol MMSightRecordHelperViewDelegate;

@interface MMSightRecordHelperView : UIView {
    BOOL m_shouldRecord;
    BOOL m_needHandleTouchEnd;
    MMUIView *m_tipsView;
}

@property (weak, nonatomic) id<MMSightRecordHelperViewDelegate> delegate;
@property (weak, nonatomic) MMSightRecordView *recordView;
@property (weak, nonatomic) MMCircularProgressView *circleProgress;
@property (nonatomic) double startRecordAnimationDuration;
@property (nonatomic) double minRecordDuration;
@property (nonatomic) double maxRecordDuration;

- (void)showTips:(id)a0 color:(id)a1 font:(id)a2 topMargin:(double)a3;
- (void)hideTipsView;
- (void)hideTipsViewImmediately;
- (void)startCircleProgressAnimation;
- (void)onTimeOut;
- (void)onLongPressed;
- (void)onStartRealRecord;
- (void)onTouchFinished;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
