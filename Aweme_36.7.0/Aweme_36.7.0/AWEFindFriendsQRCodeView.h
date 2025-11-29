@class UIStackView, UIView, UITapGestureRecognizer, UIImageView, DUXLoadingCircleView, UIButton, AWEFindFriendsQRCodeModel, UILabel;

@interface AWEFindFriendsQRCodeView : UICollectionViewCell

@property (retain, nonatomic) UIImageView *qrCodeImageView;
@property (retain, nonatomic) UIView *qrCodeBGView;
@property (retain, nonatomic) UIView *qrCodeBGLine;
@property (retain, nonatomic) UIView *logoBGView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *idLabel;
@property (retain, nonatomic) UIButton *copyIDButton;
@property (retain, nonatomic) UIStackView *idStackView;
@property (retain, nonatomic) AWEFindFriendsQRCodeModel *model;
@property (retain, nonatomic) DUXLoadingCircleView *qrCodeLoadingView;
@property (retain, nonatomic) UIImageView *errorImageView;
@property (retain, nonatomic) UILabel *errorLabel;
@property (retain, nonatomic) UIStackView *errorStackView;
@property (retain, nonatomic) UITapGestureRecognizer *ges;
@property (retain, nonatomic) UITapGestureRecognizer *idGes;
@property (retain, nonatomic) UITapGestureRecognizer *clickNormalQRCodeGes;

- (void)configWithModel:(id)a0;
- (void)themeDidChangeNoti:(id)a0;
- (void)setupViewConstraints;
- (double)imageViewHeight;
- (double)idStackViewHeight;
- (id)circleLineLayer;
- (void)clickCopyID;
- (void)clickErrorView;
- (void)clickNormalQRCode;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
