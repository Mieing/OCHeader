@class UIImageView, UIColor, UIView;

@interface AWEProgressThumbView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *previewImageView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentEdgeInsets;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) double imageCornerRadius;
@property (nonatomic) double imageBorderWidth;
@property (retain, nonatomic) UIColor *imageBorderColor;

- (void).cxx_destruct;
- (void)setImage:(id)a0;
- (id)init;
- (void)reset;
- (void)setupUI;

@end
