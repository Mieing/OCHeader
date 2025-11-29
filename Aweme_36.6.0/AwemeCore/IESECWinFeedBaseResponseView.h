@class UIScrollView;

@interface IESECWinFeedBaseResponseView : UIView

@property (weak, nonatomic) UIScrollView *scrollView;
@property (nonatomic) double startOffset;
@property (copy, nonatomic) id /* block */ tapInView;

- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
