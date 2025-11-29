@class UIImageView, AWEGDVideoModel;

@interface AWEGDImageVideoCell : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *videoIcon;
@property (retain, nonatomic) AWEGDVideoModel *video;

- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;
- (void)updateModel:(id)a0;

@end
