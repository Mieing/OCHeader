@class UIImageView, UILabel, UIView;

@interface AWEGCPDetailAlbumBadgeView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *textLabel;

- (void)updateWithIndex:(unsigned long long)a0 count:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutView;
- (void)setupView;

@end
