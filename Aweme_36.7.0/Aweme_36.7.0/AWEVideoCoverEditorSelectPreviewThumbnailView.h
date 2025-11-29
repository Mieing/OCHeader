@class UIImageView, UIView;

@interface AWEVideoCoverEditorSelectPreviewThumbnailView : UIView

@property (retain, nonatomic) UIView *controlContentView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIImageView *highLightAnchor;
@property (nonatomic) BOOL highLight;
@property (nonatomic) BOOL highLightAnchorEnable;

- (void)setHighLightWidth:(double)a0;
- (void).cxx_destruct;
- (void)setImage:(id)a0;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setContentCornerRadius:(double)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
