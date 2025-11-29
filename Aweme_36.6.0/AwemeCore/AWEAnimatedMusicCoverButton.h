@class CALayer, UIImageView, UIImage;

@interface AWEAnimatedMusicCoverButton : ACCAnimatedButton

@property (retain, nonatomic) CALayer *loadingIcon;
@property (nonatomic) double ownerImageWidth;
@property (retain, nonatomic) UIImageView *ownerImageView;
@property (retain, nonatomic) UIImage *defaultCover;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) struct CGPoint { double x; double y; } loadingIconCenterOffset;

- (void)refreshWithMusic:(id)a0 defaultAvatarURL:(id)a1;
- (void)p_refreshLoadingIconPos;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
