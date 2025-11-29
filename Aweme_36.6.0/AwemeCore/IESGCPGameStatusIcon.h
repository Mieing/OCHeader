@class UIImageView;

@interface IESGCPGameStatusIcon : UIView

@property (retain, nonatomic) UIImageView *halfScreenIcon;
@property (retain, nonatomic) UIImageView *fullScreenIcon;
@property (nonatomic) BOOL isSameImages;

- (void)updateFullScreenProgress:(double)a0;
- (void)setupWithHalfScreenImage:(id)a0 fullScreenImage:(id)a1 isFullScreen:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;

@end
