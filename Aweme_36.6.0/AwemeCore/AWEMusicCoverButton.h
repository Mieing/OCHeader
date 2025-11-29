@class UIImageView, UIView, CABasicAnimation, UILabel;

@interface AWEMusicCoverButton : AWEButton

@property (nonatomic) unsigned long long anmationType;
@property (retain, nonatomic) CABasicAnimation *rotateAnimation;
@property (nonatomic) BOOL isTouching;
@property (nonatomic) double angle;
@property (retain, nonatomic) UIView *imageBgView;
@property (retain, nonatomic) UIImageView *ownerImageView;
@property (retain, nonatomic) UILabel *guidanceLabel;
@property (retain, nonatomic) UIView *guidanceView;
@property (nonatomic) double ownerImageWidth;
@property (retain, nonatomic) UIImageView *topCoverNoteImgV;

- (void)layoutSubviews;
- (void)addRotateAnimationWithOwnerImageView;
- (void)startAnimationByDisplayLink;
- (void)addRotateAnimationToView:(id)a0;
- (BOOL)hasAnimationOfRotationOfView:(id)a0;
- (id)getCommonRotateAnimation;
- (void)stopAnimationByDisplayLink;
- (void)pauseAnimationByDisplayLink;
- (void)pauseRotationAnimationOfView:(id)a0;
- (void)resumeAnimationByDisplayLink;
- (void)resumeAnimationOfView:(id)a0;
- (void)addRotateAnimationWithOutOwnerImageView;
- (BOOL)bizDowngradeFrameRateMusicButton;
- (void)adjustImageContentSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)resumeAnimation;
- (void)pauseAnimation;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)setEnabled:(BOOL)a0;

@end
