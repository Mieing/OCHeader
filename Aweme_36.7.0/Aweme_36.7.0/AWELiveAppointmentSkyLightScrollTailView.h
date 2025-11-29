@class UILabel, UIImageView, UIView;

@interface AWELiveAppointmentSkyLightScrollTailView : UICollectionReusableView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (copy, nonatomic) id /* block */ tailViewDidClick;

- (void)tapGestureAction;
- (void)updateSpacing:(double)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
