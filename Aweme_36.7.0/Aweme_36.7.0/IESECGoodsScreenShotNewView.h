@class IESECGoodsScreenShotShareModel, UIImageView, UIImage, UIView;

@interface IESECGoodsScreenShotNewView : UIView

@property (retain, nonatomic) UIImageView *goodImageView;
@property (retain, nonatomic) UIView *qrCodeView;
@property (retain, nonatomic) UIImageView *qrCodeImage;
@property (retain, nonatomic) UIView *textView;
@property (retain, nonatomic) IESECGoodsScreenShotShareModel *shareModel;
@property (retain, nonatomic) UIImage *screenShotImage;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 shareModel:(id)a1 fullScreenShotImage:(id)a2;
- (void)createScreenShotView:(id /* block */)a0;
- (void)fetchQRCode:(id /* block */)a0;
- (void)QRCodeImageCompletionWithUrlList:(id)a0 avatarUrlList:(id)a1 error:(id)a2 placeholder:(id)a3 expireTime:(long long)a4 completion:(id /* block */)a5;
- (void).cxx_destruct;
- (void)setupUI;

@end
