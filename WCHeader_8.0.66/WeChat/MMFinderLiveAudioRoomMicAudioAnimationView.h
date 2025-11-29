@class UIColor, MMFinderLiveAudioRoomMicAudioAnimationDelegateObj, CAAnimationGroup, UIView;

@interface MMFinderLiveAudioRoomMicAudioAnimationView : UIView

@property (retain, nonatomic) UIColor *audioWaveColor;
@property (nonatomic) double viewHeightWhenAnimationStart;
@property (nonatomic) double borderWidthForWaveView;
@property (nonatomic) BOOL canShowAnimation;
@property (nonatomic) BOOL isInAnimation;
@property (retain, nonatomic) UIView *firstWaveView;
@property (retain, nonatomic) UIView *secondWaveView;
@property (retain, nonatomic) CAAnimationGroup *firstWaveAnimation;
@property (retain, nonatomic) CAAnimationGroup *secondWaveAnimation;
@property (retain, nonatomic) MMFinderLiveAudioRoomMicAudioAnimationDelegateObj *firstWaveAnimationDelegateObj;
@property (retain, nonatomic) MMFinderLiveAudioRoomMicAudioAnimationDelegateObj *secondWaveAnimationDelegateObj;
@property (nonatomic) BOOL isRounded;

- (void)layoutSubviews;
- (id)makeCircleView;
- (void)checkAndResetWaveAnimation;
- (void)removeWaveAnimationWithResetFlag:(BOOL)a0;
- (void)realStartWaveAnimation;
- (id)makeWaveAnimationWithCornerRadius:(double)a0;
- (void)startFirstAnimation;
- (void)startSecondAnimation;
- (void)updateAudioWaveColor:(id)a0;
- (void)startWaveAnimation;
- (void)stopWaveAnimationWithForceStopFlag:(BOOL)a0;
- (void)handleAnimationDidStopWithDelegateObj:(id)a0 finishedFlag:(BOOL)a1;
- (void).cxx_destruct;

@end
