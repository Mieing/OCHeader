@class UIView, AWEProfilePreviewSignatureView, AWEProfilePreviewFollowView, AWEProfilePreviewSocialView, AWEProfilePreviewNickNameView, AWEProfilePreviewAvatarView, AWEProfilePreviewBannerView, AWEProfilePreviewExtensionView;

@interface AWEProfileExtensionProfilePreviewView : UIView

@property (retain, nonatomic) AWEProfilePreviewBannerView *bannerView;
@property (retain, nonatomic) AWEProfilePreviewAvatarView *avatarView;
@property (retain, nonatomic) AWEProfilePreviewNickNameView *nickNameView;
@property (retain, nonatomic) UIView *bgCornerView;
@property (retain, nonatomic) AWEProfilePreviewSocialView *socialView;
@property (retain, nonatomic) AWEProfilePreviewSignatureView *signatureView;
@property (retain, nonatomic) AWEProfilePreviewExtensionView *extensionView;
@property (retain, nonatomic) AWEProfilePreviewFollowView *followView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)bottomView;
- (void)setupUI;

@end
