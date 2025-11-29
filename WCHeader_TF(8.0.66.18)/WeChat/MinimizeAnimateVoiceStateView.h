@class VoicePlayingView;

@interface MinimizeAnimateVoiceStateView : MinimizeAnimateStateBaseView

@property (retain, nonatomic) VoicePlayingView *iconView;

- (id)initWithGrayBackground:(BOOL)a0 isMiniVersion:(BOOL)a1;
- (void)layoutSubviews;
- (void)tryStartStateAnimation;
- (void)stopStateAnimation;
- (void).cxx_destruct;

@end
