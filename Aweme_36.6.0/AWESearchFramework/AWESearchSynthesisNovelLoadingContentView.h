@class UIImageView, UIImage;

@interface AWESearchSynthesisNovelLoadingContentView : UIView

@property (retain, nonatomic) UIImageView *image1;
@property (retain, nonatomic) UIImageView *image2;
@property (retain, nonatomic) UIImageView *maskImage;
@property (nonatomic) BOOL darkMode;
@property (retain, nonatomic) UIImage *loadImage;
@property (retain, nonatomic) UIImage *darkLoadImage;

- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setUpLayers;

@end
