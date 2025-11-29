@class MMLiveGradientLayerView, UIImageView, MMWebImageView, UIView, UILabel;

@interface MMFinderLiveConnectMicModePreviewItemView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *audioBackgroundView;
@property (retain, nonatomic) MMWebImageView *avatarView;
@property (retain, nonatomic) MMLiveGradientLayerView *bottomGradientView;
@property (retain, nonatomic) UILabel *displayNameLabel;
@property (nonatomic) unsigned long long userRole;
@property (nonatomic) BOOL videoAvailable;
@property BOOL isOtherAnchorAudioMode;
@property (nonatomic) unsigned long long displayMode;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithMicUser:(id)a0;
- (void)updateWithAnchorBackgroundImage:(id)a0 orBackgroundImageUri:(id)a1 avatarUri:(id)a2;
- (void)updateAudioBackgroundViewWithAnchorBackgroundImage:(id)a0 orBackgroundImageUri:(id)a1;
- (void)renderImageBuffer:(struct __CVBuffer { } *)a0;
- (void)layoutSubviews;
- (void)updateViewsVisibility;
- (void)updateViewsVisibilityForAnchor;
- (void)updateViewsVisibilityForOtherAnchor;
- (void)updateViewsVisibilityForVideoAudience;
- (void)updateViewsVisibilityForAudioAudience;
- (void)layoutForVideoAudienceOrOtherAnchor;
- (void)layoutForAudioAudience;
- (void).cxx_destruct;

@end
