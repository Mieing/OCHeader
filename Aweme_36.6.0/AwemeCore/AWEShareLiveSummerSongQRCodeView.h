@class UIImageView, UILabel;

@interface AWEShareLiveSummerSongQRCodeView : UIView

@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIImageView *qrCodeImageView;

- (void)addQRCodeImage:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
