@class AWEAudioWaveformSliderView, AWEDelayRecordCoverView, CAShapeLayer, AVAsset, UILabel, UIView, UIButton;

@interface AWEAudioWaveformContainerView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *buttonContainerView;
@property (retain, nonatomic) AWEAudioWaveformSliderView *waveformSliderView;
@property (retain, nonatomic) AWEDelayRecordCoverView *coverView;
@property (retain, nonatomic) CAShapeLayer *backgroundLayer;
@property (retain, nonatomic) AVAsset *asset;
@property (nonatomic) double assetStartLocation;
@property (nonatomic) double assetEndLocation;
@property (copy, nonatomic) id /* block */ updateMusicBlock;
@property (nonatomic) BOOL usingBarView;
@property (retain, nonatomic) UIButton *leftButton;
@property (retain, nonatomic) UIButton *rightButton;

- (void)addSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 model:(id)a1;
- (void)showNoMusicWaveformView:(BOOL)a0;
- (void)updatePlayingLocation:(double)a0;
- (void)setSelectedButtonWithDelayMode:(long long)a0;
- (void)setDelegateForSliderView:(id)a0;
- (double)waveBarCountForFullWidth;
- (void)updateWaveBarWithVolumes:(id)a0;
- (void)updateHasRecordedLocation:(double)a0;
- (void)updateBottomRightLableWithMaxDuration:(double)a0;
- (void)updateToBePlayedLocation:(double)a0;
- (void)addButtonCornerMaskFor:(id)a0;
- (void)addRoundedCornerWithButtonBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 direction:(long long)a1 forView:(id)a2;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateButtonLayout;

@end
