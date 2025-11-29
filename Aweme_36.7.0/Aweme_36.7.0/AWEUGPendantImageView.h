@class UIImageView;

@interface AWEUGPendantImageView : AWEUGPendantContentBaseView

@property (readonly, nonatomic) UIImageView *foldedImageView;
@property (readonly, nonatomic) UIImageView *expandedImageView;

- (id)expandView;
- (id)foldView;
- (void)performUpdateFromState:(unsigned long long)a0 toState:(unsigned long long)a1 animated:(BOOL)a2 animationStart:(id /* block */)a3 animationEnd:(id /* block */)a4;
- (void)animateWithDuration:(double)a0 timingFunction:(id)a1 animations:(id /* block */)a2 completion:(id /* block */)a3;
- (void)switchImageViewWithFolded:(BOOL)a0;
- (void)performFoldingAnimationWithAnimationStart:(id /* block */)a0 animationEnd:(id /* block */)a1;
- (void)performExpandingAnimationWithAnimationStart:(id /* block */)a0 animationEnd:(id /* block */)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 expandFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 foldFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 foldedImageURL:(id)a3 expandedImageURL:(id)a4;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 expandFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 foldFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 foldedImage:(id)a3 expandedImage:(id)a4;
- (void)updateWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 expandFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 foldFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 foldedImageURL:(id)a3 expandedImageURL:(id)a4;
- (void)updateWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 expandFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 foldFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 foldedImage:(id)a3 expandedImage:(id)a4;
- (id)addImageViewWithImage:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)addImageWithURL:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
