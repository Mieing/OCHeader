@class BDSCGradientColorView, BDSCImageView, BDWebImageRequest;

@interface BDSCBackgroundView : UIView

@property (retain, nonatomic) BDSCGradientColorView *gradientView;
@property (retain, nonatomic) BDSCImageView *imageView;
@property (retain, nonatomic) BDWebImageRequest *imageRequest;

- (void)configWithModel:(id)a0;
- (void)configWithModel:(id)a0 placeholder:(id)a1;
- (void).cxx_destruct;

@end
