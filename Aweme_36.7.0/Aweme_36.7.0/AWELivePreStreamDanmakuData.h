@interface AWELivePreStreamDanmakuData : IESEZDanmakuLinearData

- (void)setAlphaPercent:(double)a0;
- (BOOL)shouldDisplayedUntilDone;
- (void)startLinearAnimation;
- (void)leaveCallBackIfNeededWithLeftLeaveDistance:(double)a0;
- (void)resumeLinearAnimation;
- (void)executeFullDisplayedCallBack;
- (void)stop;

@end
