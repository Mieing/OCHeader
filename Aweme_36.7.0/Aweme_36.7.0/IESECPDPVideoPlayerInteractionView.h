@class UIView, IESECommerceSpeakerView, IESECommercePlayerView, IESECGradientView, UIImage, IESECPDPVideoPlayerInteractionConfig, UIImageView, UILabel, IESECommerceProgressSlider;
@protocol IESECPDPVideoPlayerInteractionViewDelegate;

@interface IESECPDPVideoPlayerInteractionView : UIView <IESECPDPVideoPlayerInteractionViewProtocol>

@property (retain, nonatomic) IESECPDPVideoPlayerInteractionConfig *config;
@property (retain, nonatomic) IESECommerceProgressSlider *progressSlider;
@property (retain, nonatomic) UILabel *playedDurationLabel;
@property (retain, nonatomic) UILabel *durationDivider;
@property (retain, nonatomic) UILabel *totalDurationLabel;
@property (nonatomic) BOOL isSliding;
@property (retain, nonatomic) UIView *durationView;
@property (nonatomic) double totalTime;
@property (retain, nonatomic) UIImageView *playButtonImageView;
@property (nonatomic) struct CGSize { double width; double height; } playButtonSize;
@property (retain, nonatomic) UIView *playerUserControllerContainerView;
@property (retain, nonatomic) IESECommerceSpeakerView *speakerView;
@property (retain, nonatomic) IESECGradientView *gradientView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (nonatomic) BOOL isMute;
@property (nonatomic) double widgeOffset;
@property (retain, nonatomic) IESECommercePlayerView *playerView;
@property (retain, nonatomic) UIView *userCtrlDivider;
@property (retain, nonatomic) UIImage *thumbImageNormal;
@property (retain, nonatomic) UIImage *thumbImageHighlight;
@property (retain, nonatomic) UIImage *minimunImageNormal;
@property (retain, nonatomic) UIImage *maximunImageNormal;
@property (retain, nonatomic) UIImage *minimunImage;
@property (retain, nonatomic) UIImage *maximunImage;
@property (nonatomic) double gradientViewHeight;
@property (nonatomic) double progressBarY;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } playerUserContainerUpdatedFrame;
@property (weak, nonatomic) id<IESECPDPVideoPlayerInteractionViewDelegate> delegate;
@property (nonatomic) BOOL isPlaceholderImageHidden;
@property (nonatomic) BOOL isCoverImageHidden;

- (void)progressSliderValueChanged:(id)a0;
- (void)adaptInteractionUIWithOffset:(double)a0;
- (void)changeHiddenStatusTo:(BOOL)a0;
- (void)updatePlayerUserControllerContainerViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setProgressSliderAlpha:(double)a0;
- (void)changeControlElementHiddenStatusTo:(BOOL)a0;
- (void)changeProgressSliderHiddenStatusTo:(BOOL)a0;
- (void)updateSubviewsWithConfig:(id)a0;
- (void)progressSliderTouchUp:(id)a0;
- (void)progressSliderTouchDown:(id)a0;
- (void)didTapMute;
- (void)updateCoverImage:(id)a0 isPlaceHolder:(BOOL)a1;
- (void)layoutWidgets;
- (void)layoutDurationLabels;
- (id)timeStringFromInterval:(double)a0;
- (void)changeCoverImageHiddenStatusTo:(BOOL)a0;
- (void)updatePlayButtonUIWithIconName:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)updateWithPlayerPlayState:(unsigned long long)a0;
- (void)updateWithPlayerPlayTime:(double)a0 totalTime:(double)a1;
- (void)updateWithPlayerMuteState:(BOOL)a0;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)handleGesture:(id)a0;
- (void)layoutSubviews;
- (void)setupSubviews;
- (void)didTapPlay;

@end
