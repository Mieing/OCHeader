@class UIView, UIControl;

@interface AWEFeedFeelGoodPlayerContainerView : UIView

@property (retain, nonatomic) UIControl *coverView;
@property (weak, nonatomic) UIView *playerView;
@property (retain, nonatomic) UIView *playerBGView;
@property (copy, nonatomic) id /* block */ tapBlock;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } dstFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } srcFrame;
@property (nonatomic) double videoUpOffset;

- (void)insertPlayerView:(id)a0;
- (void)onTouchEvent;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
