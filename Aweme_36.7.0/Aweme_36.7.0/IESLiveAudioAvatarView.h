@class UIImageView, HTSLiveAudioAnimationView, UIView;

@interface IESLiveAudioAvatarView : UIView <HTSLivePluginLayoutView>

@property (nonatomic) double avatarWidth;
@property (retain, nonatomic) HTSLiveAudioAnimationView *animatedView;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIView *shadowView;
@property (retain, nonatomic) UIImageView *silenceImageView;

- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (void)stopAnimate;
- (void)startAnimate;
- (id)initWithAvatarSize:(double)a0;
- (void)setAvatarURLs:(id)a0 placeholder:(id)a1 complete:(id /* block */)a2;
- (void)setAvatarURLs:(id)a0 placeholder:(id)a1;
- (void)setAnimationURLs:(id)a0;
- (void)setAnimationURLs:(id)a0 completion:(id /* block */)a1;
- (void)updateAvatarSize:(double)a0;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)viewType;
- (void)setMute:(BOOL)a0;

@end
