@class UIStackView, IESLiveVSPrivilegeVideoPlayerSeekBarView, UIButton, UIView, IESLiveVSPauseAnimButton, UILabel;

@interface IESLiveVSPrivilegeVideoPlayerControl : NSObject

@property (retain, nonatomic) UIStackView *containerStackView;
@property (retain, nonatomic) IESLiveVSPauseAnimButton *pauseAnimationButton;
@property (retain, nonatomic) UIView *playedDurationContainerView;
@property (retain, nonatomic) UILabel *playedDurationLabel;
@property (retain, nonatomic) IESLiveVSPrivilegeVideoPlayerSeekBarView *seekBarView;
@property (retain, nonatomic) UIView *totalDurationContainerView;
@property (retain, nonatomic) UILabel *totalDurationLabel;
@property (retain, nonatomic) UIView *view;
@property (nonatomic) long long playedDuration;
@property (nonatomic) long long totalDuration;
@property (nonatomic) BOOL isPortraitStream;
@property (nonatomic) BOOL pause;
@property (copy, nonatomic) id /* block */ pauseButtonDidClickBlock;
@property (retain, nonatomic) UIButton *changeOrientationButton;
@property (copy, nonatomic) id /* block */ orientationButtonDidClickBlock;
@property (copy, nonatomic) id /* block */ updateProgressBlock;

- (void)pauseAnimationButtonClick;
- (void)updatePlayedDuration:(long long)a0 totalDuration:(long long)a1 isPlaying:(BOOL)a2;
- (id)timeStringFromTimeInterval:(long long)a0;
- (void)changeOrientationButtonClick;
- (id)initWithStartTime:(long long)a0 totalDuration:(long long)a1 isPortraitStream:(BOOL)a2;
- (void).cxx_destruct;
- (void)setup;

@end
