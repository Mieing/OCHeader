@class UIImageView, CAGradientLayer, UIView;

@interface AWEShareDetailWithRebrandQRCodeProfileContentView : AWEShareDetailWithQRCodeBaseContentView

@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UIView *qrCodeView;
@property (retain, nonatomic) UIView *logoBgView;
@property (retain, nonatomic) CAGradientLayer *bgLayer;

- (id)imageToSaveToAlbum;
- (struct CGSize { double x0; double x1; })saveImageSize;
- (void)syncContentFrom:(id)a0;
- (void)updateSubviewsForGenerateImage;
- (double)logoScale;
- (void).cxx_destruct;
- (void)setContext:(id)a0;
- (void)setUpSubviews;
- (struct CGSize { double x0; double x1; })contentViewSize;
- (void)setTemplateModel:(id)a0;

@end
