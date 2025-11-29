@class UIView, WCListenLyricAnimationLoadingView;

@interface WCListenLyricsLoadingHeaderView : MMUIView

@property (retain, nonatomic) WCListenLyricAnimationLoadingView *loadingView;
@property (retain, nonatomic) UIView *highlightedView;
@property (copy, nonatomic) id /* block */ onClickBlock;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)startAnimationWithDuration:(double)a0 completion:(id /* block */)a1;
- (void)pauseAnimation;
- (void)resumeAnimation;
- (void)stopAnimation;
- (void)setHighlightedViewHidden:(BOOL)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
