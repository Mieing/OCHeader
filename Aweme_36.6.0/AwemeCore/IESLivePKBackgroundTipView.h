@class UIImageView;

@interface IESLivePKBackgroundTipView : UIView

@property (nonatomic) BOOL isImageCover;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) BOOL isFullScreen;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isFullScreen:(BOOL)a1;
- (void)showImageCoverIfNeedsWithUrl:(id)a0 centerYOffset:(double)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)loadViews;

@end
