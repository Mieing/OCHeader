@class UIImageView;

@interface EditImageUIView : MMUIView {
    UIImageView *_imageView;
}

@property (nonatomic) unsigned long long editImageUIStyle;
@property (nonatomic) unsigned int fromEntrance;
@property (nonatomic) int _toolType;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withToolType:(int)a1;
- (void)renderImageWithBlankView:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
