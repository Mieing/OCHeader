@class UIColor;

@interface WCTogetherFeedCellContentView : UIView

@property (retain, nonatomic) UIColor *normalBackgroundColor;
@property (retain, nonatomic) UIColor *highlightedBackgroundColor;
@property (nonatomic) BOOL showsBorder;
@property (copy, nonatomic) id /* block */ didTapBlock;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setNormalState;
- (void)setHighlightedState;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
