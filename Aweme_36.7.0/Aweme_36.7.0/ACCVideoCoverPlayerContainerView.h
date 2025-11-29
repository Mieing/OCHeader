@class UIImageView, UIImage, UIView;

@interface ACCVideoCoverPlayerContainerView : UIView

@property (nonatomic) struct CGSize { double width; double height; } containerSize;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *editingView;
@property (readonly, nonatomic) UIImage *renderedImage;
@property (readonly, nonatomic) UIView *customerContentView;

- (void)updateRenderImage:(id)a0;
- (void)updateEditingView:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithContainerSize:(struct CGSize { double x0; double x1; })a0;

@end
