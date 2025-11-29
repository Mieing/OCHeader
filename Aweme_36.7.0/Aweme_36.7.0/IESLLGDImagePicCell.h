@class UIImageView, IESLLGDImageModel;

@interface IESLLGDImagePicCell : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) IESLLGDImageModel *image;
@property (copy, nonatomic) id /* block */ endLoadAction;

- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;
- (void)updateModel:(id)a0;

@end
