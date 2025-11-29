@class UIView, NSString, MMWebImageView, WAAppTaskCapsuleMenu, WASheetHeaderTipsView, UIButton, UIImageView, UILabel, UIColor;
@protocol WABrandTitleBarDelegate;

@interface WABrandTitleBar : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) MMWebImageView *avatarImageView;
@property (retain, nonatomic) UIView *nickNameContainerView;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) UIView *titleContainerView;
@property (retain, nonatomic) UIView *subtitleContainerView;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UILabel *supportByLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIButton *closeButton;
@property (nonatomic) BOOL isCloseButtonShown;
@property (retain, nonatomic) WASheetHeaderTipsView *tipsView;
@property (retain, nonatomic) UIView *gradientMaskView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (weak, nonatomic) id<WABrandTitleBarDelegate> delegate;
@property (copy, nonatomic) NSString *avatarUrl;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) UIButton *shareButton;
@property (nonatomic) BOOL avatarAlignLeft;
@property (nonatomic) BOOL enableAvatarButton;
@property (nonatomic) BOOL shouldShowShare;
@property (nonatomic) BOOL shouldShowClose;
@property (nonatomic) BOOL enableDarkMode;
@property (nonatomic) BOOL needGradientMaskView;
@property (nonatomic) BOOL hideAvatar;
@property (retain, nonatomic) UIColor *foreColor;
@property (retain, nonatomic) WAAppTaskCapsuleMenu *menuView;
@property (copy, nonatomic) NSString *tipsText;
@property (copy, nonatomic) id /* block */ tipsDidShowBlock;
@property (copy, nonatomic) id /* block */ tipsDidClickCloseBlock;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubViews;
- (void)initTipsView;
- (void)onClickTipsClose;
- (void)onPressHeader:(id)a0;
- (void)showCloseButtonAnimated:(BOOL)a0;
- (void)hideCloseButton;
- (void)setHeaderHighlighted:(BOOL)a0;
- (void)layoutSubviews;
- (void)layoutTitleContainerView;
- (void)layoutSubtitleContainerView;
- (BOOL)needShowSubtitle;
- (void)updateAvatarFrame;
- (void)onShare;
- (void)onClose;
- (id)snapShotImageView;
- (void)updateShareButtonHidden;
- (void).cxx_destruct;

@end
