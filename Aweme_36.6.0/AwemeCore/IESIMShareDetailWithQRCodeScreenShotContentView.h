@class UIImageView, UIImage, UIView, AWEIMRefreshImageView, UILabel;

@interface IESIMShareDetailWithQRCodeScreenShotContentView : UIView

@property (retain, nonatomic) UIView *groupInfoView;
@property (retain, nonatomic) UIImageView *QRCodeImageView;
@property (retain, nonatomic) UIImage *fakeQRImage;
@property (retain, nonatomic) AWEIMRefreshImageView *groupAvatarView;
@property (nonatomic) BOOL useWarmColorBg;
@property (retain, nonatomic) UILabel *groupNameLabel;
@property (retain, nonatomic) UIImageView *coverImageView;

- (id)imageToSaveToAlbum;
- (struct CGSize { double x0; double x1; })saveImageSize;
- (void)p_setupBackgroundColor;
- (void).cxx_destruct;
- (void)setUpSubviews;

@end
