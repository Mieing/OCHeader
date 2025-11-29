@class UIButton, UIView;

@interface AWEFeedDetailBarVideoShrinkView : AWEFeedDetailBarActionBaseView

@property (retain, nonatomic) UIView *verticalSeparateLine;
@property (retain, nonatomic) UIButton *shrinkBtn;
@property (copy, nonatomic) id /* block */ shrinkBtnHandler;

- (void)shrinkBtnClicked;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)viewHeight;
- (double)viewWidth;
- (void)configureConstraints;
- (void)configureSubviews;

@end
