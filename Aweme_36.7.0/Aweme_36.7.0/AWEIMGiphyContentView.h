@class UITapGestureRecognizer, BDImageView, UIView;

@interface AWEIMGiphyContentView : UIView

@property (retain, nonatomic) UITapGestureRecognizer *coverTapGesture;
@property (retain, nonatomic) UIView *reloadView;
@property (retain, nonatomic) BDImageView *giphyImageView;
@property (copy, nonatomic) id /* block */ coverDidTappedAction;
@property (copy, nonatomic) id /* block */ reloadDidTapBlock;

- (void)p_setupView;
- (void)configWithMessage:(id)a0 image:(id)a1 urls:(id)a2 bdImageCompletion:(id /* block */)a3;
- (void)p_updateImageViewBackgroundColor:(BOOL)a0;
- (void)lazyCreateReloadView;
- (void)p_didClickToGiphy;
- (void)p_reloadGiphyTap;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
