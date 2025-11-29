@class UIImageView, UILabel;

@interface IESLiveAlphaVideoPlayerButtonView : UIView

@property (retain, nonatomic) UIImageView *buttonImageView;
@property (retain, nonatomic) UILabel *buttonLabel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originFrame;

- (void)startDisplayAnimationWithLabel:(id)a0;
- (void)addButtonAction:(SEL)a0 forTarget:(id)a1;
- (void)updateImageWithURL:(id)a0 placeholderImage:(id)a1 completion:(id /* block */)a2;
- (void)startDismissAnimationDelay:(double)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
