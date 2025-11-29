@class UIImageView, UIImage, UILabel, APBDTFUploadToastView, UIView;

@interface AFEUploadView : UIView

@property (retain, nonatomic) UIImage *uploadingImage;
@property (retain, nonatomic) APBDTFUploadToastView *DTFUploadingView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIImageView *backgroundImageView;

- (void)stopUploading;
- (void)beginUploading;
- (void)verifyAnimation:(long long)a0;
- (void).cxx_destruct;
- (void)setBackgroundImage:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
