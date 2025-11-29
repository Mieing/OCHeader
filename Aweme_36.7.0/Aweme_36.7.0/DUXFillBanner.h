@class UIImage, NSURL, BDImageView;

@interface DUXFillBanner : UIView

@property (retain, nonatomic) BDImageView *imageView;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSURL *imageURL;
@property (nonatomic) long long sizeStyle;
@property (nonatomic) double cornerRadius;
@property (readonly, nonatomic) double aspectRatio;
@property (copy, nonatomic) id /* block */ clickAction;

- (void)tapGestureAction;
- (id)initWithSizeStyle:(long long)a0 image:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
