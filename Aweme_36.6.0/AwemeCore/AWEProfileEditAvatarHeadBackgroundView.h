@class UIView, AWEProfileEditViewModel, NSString, UIImageView, AWEProfileBannerBGCoverView, UIButton, AWEUserProfileGradientProgressView, UILabel;

@interface AWEProfileEditAvatarHeadBackgroundView : UIView <AWEProfileBannerBGCoverViewDelegate>

@property (retain, nonatomic) UIView *avatarButtonBackgroundView;
@property (retain, nonatomic) UIButton *avatarButton;
@property (retain, nonatomic) UIView *customMaskView;
@property (retain, nonatomic) UIImageView *cameraImageView;
@property (retain, nonatomic) UILabel *currenIndexLabel;
@property (retain, nonatomic) AWEUserProfileGradientProgressView *progressView;
@property (retain, nonatomic) AWEProfileBannerBGCoverView *coverView;
@property (retain, nonatomic) AWEProfileEditViewModel *viewModel;
@property (retain, nonatomic) UILabel *avatarButtonChangeLabel;
@property (copy, nonatomic) id /* block */ tapEditBackgroundBlock;
@property (copy, nonatomic) id /* block */ tapEditAvatarBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultAvatarColor;
+ (double)headBackgroundHeightWithContainerSize:(struct CGSize { double x0; double x1; })a0;

- (long long)showIndex;
- (void)p_setupSubviews;
- (void)selectAvatar:(id)a0;
- (void)updateIndexLabelWithIndex:(unsigned long long)a0 count:(unsigned long long)a1;
- (void)p_refreshAvatarWith:(id)a0;
- (void)p_refreshAvatarButtonChangeLabel:(id)a0;
- (void)headBackgroundTapped:(id)a0;
- (void)p_configCameraImageUseDarkThemeImage:(BOOL)a0;
- (void)observerScrollWith:(id)a0;
- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
