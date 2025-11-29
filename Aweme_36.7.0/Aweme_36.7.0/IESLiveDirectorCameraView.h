@class UILabel, UIImageView, UIView;

@interface IESLiveDirectorCameraView : UIView

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIView *customView;
@property (retain, nonatomic) UIImageView *imageView;
@property (copy, nonatomic) id /* block */ switchBlock;

- (void)switchCameraPositionDidClick;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
