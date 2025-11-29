@class IESLiveAnchorImageBufferCapture, UIImageView, HTSLiveAudioAnimationView, UIView;

@interface IESLivePKComponentAudioBackground : IESLivePKComponent

@property (nonatomic) double originAudioBackgroundRatio;
@property (retain, nonatomic) UIView *ownerView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } ownerViewFrame;
@property (retain, nonatomic) UIImageView *audioBackground;
@property (retain, nonatomic) HTSLiveAudioAnimationView *avatarAnimView;
@property (nonatomic) double avatarImageWidth;
@property (retain, nonatomic) UIImageView *avatarImage;
@property (retain, nonatomic) IESLiveAnchorImageBufferCapture *imageBufferCapture;
@property (nonatomic) struct CGSize { double width; double height; } outputSize;

- (void)componentDidLoad;
- (BOOL)isValidFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)stopImageCapture;
- (void)loadBackgroundView;
- (void)updateAudioBackgroundFrame;
- (void)updateBackgroundFrameData;
- (id)setAudioAvatarImageView;
- (void)startImageCapture;
- (void)updateImageCapture;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })defaultOwnerViewFrame;
- (void)componentPlaying;
- (void)componentFinished;
- (void)componentBusinessPrepare;
- (void)componentInteracting;
- (void)loadAudioPKModule;
- (void).cxx_destruct;

@end
