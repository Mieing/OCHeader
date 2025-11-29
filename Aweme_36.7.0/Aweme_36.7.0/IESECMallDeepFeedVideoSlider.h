@class IESECommerceProgressSlider, UIImage, UIView, UILabel;
@protocol IESECMallDeepFeedVideoSliderDelegate;

@interface IESECMallDeepFeedVideoSlider : UIView

@property (retain, nonatomic) UIImage *thumbImageNormal;
@property (retain, nonatomic) UIImage *thumbImageHighlight;
@property (retain, nonatomic) IESECommerceProgressSlider *progressSlider;
@property (retain, nonatomic) UIView *durationView;
@property (retain, nonatomic) UILabel *playedDurationLabel;
@property (retain, nonatomic) UILabel *durationDivider;
@property (retain, nonatomic) UILabel *totalDurationLabel;
@property (nonatomic) BOOL isSliding;
@property (retain, nonatomic) UIImage *minimumImageNormal;
@property (retain, nonatomic) UIImage *maximumImageNormal;
@property (retain, nonatomic) UIImage *minimumImage;
@property (retain, nonatomic) UIImage *maximumImage;
@property (nonatomic) double totalDuration;
@property (weak, nonatomic) id<IESECMallDeepFeedVideoSliderDelegate> delegate;

- (void)updateCurrent:(double)a0 duration:(double)a1;
- (void)progressSlideChangeValue:(id)a0;
- (void)updateSliderValue:(double)a0;
- (void)seekToPlaybackTime:(double)a0;
- (void)changeSlidingState:(BOOL)a0;
- (id)formatTimeString:(double)a0;
- (double)playDurationWithProgress:(double)a0;
- (void)updateVideoTimeDurationText:(id)a0;
- (void)progressSliderTouchEnded:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)handleGesture:(id)a0;
- (void)setupUI;

@end
