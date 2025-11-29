@class UIImageView, PAGPlayer, UIImage;

@interface TingPAGImageView : UIView

@property (retain, nonatomic) PAGPlayer *pagCore;
@property (retain, nonatomic) UIImageView *coverView;
@property (weak, nonatomic) UIImage *renderImage;
@property (nonatomic) BOOL bResignActive;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)applicationWillResignActive;
- (void)applicationDidBecomeActive;
- (void)initPagView;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)freeCache;
- (void)flush;
- (id)imageFromPixelBuffer:(struct __CVBuffer { } *)a0;
- (void)prepareForReuse;
- (void)applyFile:(id)a0;
- (void)applyRenderResultImg:(id)a0;
- (void).cxx_destruct;

@end
