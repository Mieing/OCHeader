@class NSDictionary, UIView;

@interface AWELandscapeMediumVideoViewController : AWELandscapeBaseVideoViewController

@property (retain, nonatomic) UIView *fakeLandscapeTopView;
@property (retain, nonatomic) UIView *fakeLandscapeBottomView;
@property (nonatomic) BOOL shouldRequestRewardedAdvertising;
@property (copy, nonatomic) NSDictionary *rewardedAdvertisingParams;

- (void)updatePlayerFrame:(BOOL)a0;
- (BOOL)canAutoPlayNext;
- (void)handlePlaybackSetting;
- (void)playerWillLoopPlaying:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)setupContext;

@end
