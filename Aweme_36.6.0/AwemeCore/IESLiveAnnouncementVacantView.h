@class UIImageView, UILabel;

@interface IESLiveAnnouncementVacantView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *mainLabel;
@property (retain, nonatomic) UILabel *secondaryLabel;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1;
- (void)setupUI;
- (void)applyConfiguration:(id)a0;
- (void)setupLayout;

@end
