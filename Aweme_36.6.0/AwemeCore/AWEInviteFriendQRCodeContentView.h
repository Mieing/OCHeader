@class UIImageView, UILabel, UIView;

@interface AWEInviteFriendQRCodeContentView : UIView

@property (retain, nonatomic) UIImageView *douyinLogoImageView;
@property (retain, nonatomic) UIImageView *qrCodeImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIView *bottomContainerView;
@property (retain, nonatomic) UIImageView *saveImageView;
@property (retain, nonatomic) UILabel *savePromptLabel;
@property (retain, nonatomic) UIImageView *scanImageView;
@property (retain, nonatomic) UILabel *scanPromptLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;

- (id)imageToSaveToAlbum;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
