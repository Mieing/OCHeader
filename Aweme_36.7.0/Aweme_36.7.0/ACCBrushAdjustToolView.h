@class UIImageView, UILabel, UIView;

@interface ACCBrushAdjustToolView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) id /* block */ actionblock;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) BOOL enable;

- (void)configViewWithImage:(id)a0 title:(id)a1 tapAction:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)handleTapGesture;

@end
