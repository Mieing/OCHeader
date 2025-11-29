@class UIImage, UIImageView;

@interface IESECLLImageView : UIView {
    UIImageView *_imageView;
}

@property (nonatomic) long long imageContentMode;
@property (retain, nonatomic) UIImage *image;

- (id)initWithImage:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupSubviews;

@end
