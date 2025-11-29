@class UIImageView;

@interface AWEPOICurrentLocationAnnotationView : MKAnnotationView

@property (retain, nonatomic) UIImageView *poiAnchorImageView;
@property (retain, nonatomic) UIImageView *userAvatarImageView;

- (void)updateCurrentHeading:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
