@class CALayer, UIImageView, UITapGestureRecognizer;
@protocol IESLiveWebPPlayer;

@interface IESLiveChatChannelLinkmicVolumeView : UIView <HTSLivePluginLayoutView>

@property (nonatomic) struct { double x; double y; double w; double h; } factor;
@property (nonatomic) double volume;
@property (nonatomic) BOOL isMuted;
@property (retain, nonatomic) CALayer *volumeLayer;
@property (retain, nonatomic) CALayer *volumeContainerLayer;
@property (retain, nonatomic) UIImageView *micImageView;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *animatedMicImageView;
@property (copy, nonatomic) id /* block */ tapBlock;
@property (retain, nonatomic) UITapGestureRecognizer *tap;
@property (nonatomic) long long style;

- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (id)imageWithMute:(BOOL)a0;
- (id)webpImageNameWithStyle:(long long)a0;
- (void)handleVolumeViewDidClicked:(id)a0;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)reload;
- (BOOL)isAnimated;
- (unsigned long long)accessibilityTraits;
- (id)viewType;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setup;
- (void)setMute:(BOOL)a0;
- (void)onTap:(id /* block */)a0;

@end
