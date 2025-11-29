@class UIImageView, UIColor, UIImage;

@interface ACCAIGCMultiImageView : UIView

@property (retain, nonatomic) UIImageView *contentImageView;
@property (nonatomic) double insideBorderWidth;
@property (retain, nonatomic) UIColor *insideBorderColor;
@property (nonatomic) double insideContentCornerRadius;
@property (retain, nonatomic) UIImage *image;

- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;

@end
