@class HDRMTImageView;

@interface HDRMTUIImageView : UIImageView

@property (retain, nonatomic) HDRMTImageView *innerHDRImageView;
@property (nonatomic) BOOL hdrEnabled;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 hdrEnabled:(BOOL)a1;
- (struct CGSize { double x0; double x1; })scaledSizeForImageSize:(struct CGSize { double x0; double x1; })a0 containerSize:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;
- (void)setImage:(id)a0;
- (void)layoutSubviews;
- (id)image;

@end
