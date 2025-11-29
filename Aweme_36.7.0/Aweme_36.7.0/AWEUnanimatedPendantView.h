@class UIImageView;

@interface AWEUnanimatedPendantView : AWEPendantView

@property (readonly, nonatomic) UIImageView *foldedImageView;
@property (readonly, nonatomic) UIImageView *expandedImageView;

- (void)performUpdateFromState:(unsigned long long)a0 toState:(unsigned long long)a1 animated:(BOOL)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 foldedImage:(id)a1 expandedImage:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 foldedImageURL:(id)a1 expandedImageURL:(id)a2;
- (void)performFoldingAnimation;
- (void)performExpandingAnimation;
- (void)animateWithDuration:(double)a0 timingFunction:(id)a1 animations:(id /* block */)a2 completion:(id /* block */)a3;
- (id)addImageViewWithImage:(id)a0 expanded:(BOOL)a1;
- (id)addImageWithURL:(id)a0 expanded:(BOOL)a1;
- (void)switchImageViewWithFolded:(BOOL)a0;
- (void).cxx_destruct;

@end
